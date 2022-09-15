package eu.proxity.demo.android

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

import eu.proxity.proxitykit.*

class MainActivity : AppCompatActivity() {
    @OptIn(ExperimentalUnsignedTypes::class)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val platform = ProxityPlatform(this)
        with(ProxityClient) {
            configure(
                "<YOUR-API-KEY>",
                platform = platform,
                delegate = object : ProxityDelegate {
                    override fun onWebhook(id: String, region: String): String? {
                        println("webhook id $id for region $region")
                        return null
                    }
                }
            )
            start()
            requestContent()
        }
    }
}
