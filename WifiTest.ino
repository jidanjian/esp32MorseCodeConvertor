#include <WiFi.h>
const char* ssid = "ESP32_Hotspot";
const char* password = "123";
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  IPAddress IP = WiFi.softAPIP();
  WiFi.softAP(ssid, password);
  Serial.print(ssid);
  Serial.print(password);
  Serial.print(IP);
  server.begin();
}

void loop() {
  Serial.print("Connected Devices: ");
  Serial.println(WiFi.softAPgetStationNum());
  delay(5000);
  //hi 
  /*WiFiClient client = server.available();
  if(client){
    while(client.connected()){
      if(client.available()){
        char c = client.read();
        Serial.write(c);
      }
    }
  }
  */
}
