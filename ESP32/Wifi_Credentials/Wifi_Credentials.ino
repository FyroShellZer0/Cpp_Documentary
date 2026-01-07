
#include <WiFi.h>
#include <WebServer.h>
#include <ESPmDNS.h>

// Customize these values
const char* customSSID = "MyESP32_Network";
const char* customPassword = "esp32password";  // Minimum 8 characters
const char* hostname = "esp32"; // will be esp32.local
WebServer server(80);
void setup() {
  Serial.begin(115200);

  //start mDNS responder 
  if(!MDNS.begin(hostname)) {
    Serial.println("Error setting up MDNS responder!");
  }
  
  // Create AP with custom SSID and password
  WiFi.softAP(customSSID, customPassword);  
  server.on("/", []() {
    server.send(200, "text/html",
    "<h1>Title</h1>"
    "<p> sample web prototype</p>");
  });
  server.begin();
  MDNS.addService("http", "tcp", 80);
  Serial.println("Wi-Fi Access Point Started!");
  Serial.println("1. Go to your browser");
  Serial.println("2. Enter http://esp32.local OR esp32.local");
  Serial.println("3. OR enter 192.168.4.1");
    
}

void loop() {
  server.handleClient(); // Checks for incoming web requests
}
