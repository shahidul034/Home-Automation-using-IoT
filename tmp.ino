#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266HTTPClient.h>
#define USE_SERIAL Serial

ESP8266WiFiMulti WiFiMulti;
const int trigPin = D4;
const int echoPin = D3;

// defines variables
long duration;
int distance;

void setup() {

  USE_SERIAL.begin(115200);
  USE_SERIAL.println();
  USE_SERIAL.println();
  USE_SERIAL.println();

  for (uint8_t t = 4; t > 0; t--) {
    USE_SERIAL.printf("[SETUP] WAIT %d...\n", t);
    USE_SERIAL.flush();
    delay(1000);
  }


  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input


  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D8, OUTPUT);
  WiFi.mode(WIFI_STA);
  WiFiMulti.addAP("Shakib", "1507034shakib");

}

void loop() {




  if ((WiFiMulti.run() == WL_CONNECTED)) {
    HTTPClient http;
    USE_SERIAL.print("[HTTP] begin...\n");
    http.begin("http://shakib034.pythonanywhere.com/get"); //HTTP
    USE_SERIAL.print("[HTTP] GET...\n");
    int httpCode = http.GET();

    if (httpCode > 0) {
      if (httpCode == HTTP_CODE_OK) {
        String payload = http.getString();
  
        ///////////////////////////

        // Clears the trigPin
        auto tmp = millis();
        while (millis() - tmp < 2000) {
          digitalWrite(trigPin, LOW);
          delayMicroseconds(2);
          digitalWrite(trigPin, HIGH);
          delayMicroseconds(10);
          digitalWrite(trigPin, LOW);
          duration = pulseIn(echoPin, HIGH);
          distance = duration * 0.034 / 2;
          Serial.print("Distance: ");
          Serial.println(distance);
          if (distance <= 10 ) {
            http.begin("http://shakib034.pythonanywhere.com/set?ac2=on");
           
            USE_SERIAL.println("Security break"); digitalWrite(D8, HIGH);
          }
          else digitalWrite(D8, LOW);
        }
       
        ///////////////////


        //        Load Control
        if (payload.indexOf("~light~") >= 0 or payload.indexOf("~light~") < 0) {
          if ( payload.indexOf("~light~") < 0) {
            digitalWrite(D0, LOW);
            USE_SERIAL.println("light off");
          }
          else {
            digitalWrite(D0, HIGH);
            USE_SERIAL.println("light on");
          }

        }
        if (payload.indexOf("~fan~") >= 0 or payload.indexOf("~fan~") < 0) {
          if ( payload.indexOf("~fan~") < 0) {
            digitalWrite(D1, LOW);
            USE_SERIAL.println("fan off");
          }
          else {
            digitalWrite(D1, HIGH);
            USE_SERIAL.println("fan on");
          
          }
        }
        if (payload.indexOf("~ac~") >= 0 or payload.indexOf("~ac~") < 0) {
          if ( payload.indexOf("~ac~") < 0) {
            digitalWrite(D2, LOW);
            USE_SERIAL.println("ac off");
          }
          else {
            digitalWrite(D2, HIGH);
            USE_SERIAL.println("ac on");
          }
        }
		if (payload.indexOf("~ac2~") >= 0 or payload.indexOf("~ac2~") < 0) {
          if ( payload.indexOf("~ac2~") < 0) {
            digitalWrite(D6, LOW);
            USE_SERIAL.println("notification off");
          }
          else {
            digitalWrite(D6, HIGH);
            USE_SERIAL.println("notification on");
          }
        }

        //        End of Load control
      }

    } else {
      USE_SERIAL.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
    }
    http.end();
  }
  delay(100);
}

