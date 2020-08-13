#include "WiFi.h"

char* ssid              = "Nama_WiFI";
char* password          = "Password_WiFi";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  int reset = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    reset ++;
    Serial.print("Menyambungkan ke WiFi : ");
    Serial.println(ssid);
    if (reset == 5) {
      ESP.restart();
    }
  }
  Serial.print("Berhasil Menyambungkan ke WiFi : ");
  Serial.println(ssid);
  Serial.print("IP Address : ");
  Serial.println(WiFi.localIP());
}

void loop(){
}
