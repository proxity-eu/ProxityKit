import SwiftUI
import ProxityKit

@main
class demoApp: App, ProxityDelegate {
    var proxity: ProxityClient

    func onWebhook(id: String, region: String) -> String? {
        print("Got webhook \(id) for region \(region)")
        let payload = UIDevice.current.orientation == .portrait ? "portrait": "landscape"
        print("Sending payload \(payload)")
        return payload
    }

    required init() {
        proxity = ProxityClient()
        proxity.configure(
            apiKey: "YOR-API-KEY-HERE",
            platform: ProxityPlatform(),
            delegate: self
        )
        proxity.start()
        // requestContent() is used to get content here and now
        // usefull on app start for example
        //proxity.requestContent()
    }

    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
