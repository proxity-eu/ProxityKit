// Copyright 2022 Proxity SA
// https://www.proxity.eu/

package main

import (
	"container/list"
	"encoding/json"
	"log"
	"net/http"
	"os"
	"time"
)

type webhook struct {
	ID        string  `json:"id"`
	Region    string  `json:"region"`
	Payload   *string `json:"payload"`
	Timestamp time.Time
}

func main() {
	list := list.New()

	mux := &http.ServeMux{}
	mux.HandleFunc("/webhook", func(w http.ResponseWriter, req *http.Request) {
		if req.Method != http.MethodPost {
			return
		}

		wh := webhook{Timestamp: time.Now()}
		if err := json.NewDecoder(req.Body).Decode(&wh); err != nil {
			return
		}

		log.Printf("Invoking webhook %s, region %s", wh.ID, wh.Region)
		if wh.Payload != nil {
			log.Printf("payload: %s", *wh.Payload)
		}

		list.PushFront(wh)
		if list.Len() > 100 {
			list.Remove(list.Back())
		}
	})
	mux.HandleFunc("/stats", func(w http.ResponseWriter, req *http.Request) {
		var items []webhook
		for e := list.Front(); e != nil; e = e.Next() {
			items = append(items, e.Value.(webhook))
		}

		w.Header().Add("Content-Type", "application/json; charset=utf-8")
		enc := json.NewEncoder(w)
		enc.SetIndent("", "  ")
		_ = enc.Encode(items)
	})

	port := os.Getenv("PORT")
	if port == "" {
		port = "8080"
	}
	addr := ":" + port
	log.Printf("Running webhook test backend on %s", addr)
	log.Fatal(http.ListenAndServe(addr, mux))
}
