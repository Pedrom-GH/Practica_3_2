#include <WiFi.h>
#include <WebServer.h>
#include "webpage.h"

const char* ssid     = "iPhone de Pedro";
const char* password = "pedro1010";

WebServer server(80);

void handle_root() {
  server.send(200, "text/html", HTML);
}

void setup() {
  Serial.begin(115200);
  Serial.println("Conectando a: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nWiFi conectado!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  server.on("/", handle_root);
  server.begin();
  Serial.println("Servidor HTTP iniciado");
}

void loop() {
  server.handleClient();
}