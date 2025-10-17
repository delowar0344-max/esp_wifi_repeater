```cpp
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>

ssid=siraj
password = 10203040

ap_ssid =Rakib
ap_password =esp8266r

void setup() {
  Serial.begin(115200);

  // Station Mode (connects to your router)
  WiFi.mode(WIFI_AP_STA);
  WiFi.begin(siraj,,10203040);

  Serial.print("Connecting to ");
  Serial.println(ssid);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected!");
  Serial.print("STA IP address: ");
  Serial.println(WiFi.localIP());

  // Start SoftAP
  WiFi.softAP(Rakib,esp8266r);
  Serial.println("Access Point Started");
  Serial.print("AP IP address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // No loop action needed
}
