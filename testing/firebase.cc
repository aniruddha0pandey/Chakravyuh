#include <ESP8266WiFi.h>

#define FIREBASE_HOST "https://chakravyuh-78a2d.firebaseio.com/"
#define FIREBASE_AUTH "fSqu0gWEaP8afnum6XaUBx7RC7RfZQ9HTM26c3wA" 

#define WIFI_SSID "yash"
#define WIFI_PASSWORD "12300000"

#define LED 2

void setup() {
    pinMode(LED,OUTPUT);
    digitalWrite(LED,0);
    Serial.begin(9600);
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.print("connecting");

    while (WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(500);
    }

    Serial.println();
    Serial.print("connected: ");
    Serial.println(WiFi.localIP());
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
    Firebase.setInt("LEDStatus",0);
}

void loop() {
    if ( Firebase.getInt("LEDStatus") ) {
        digitalWrite(LED,HIGH);
    } else {
        digitalWrite(LED,LOW);
    }

    // Check for errors
    if ( Firebase.failed() ) {
        Serial.print("setting /number failed:");
        Serial.println(Firebase.error());
        return;
    }

    delay(1000);
}
