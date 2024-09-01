#include <Ultrasonic.h>
#include "DHT.h"
#include DHTPIN 2
#define pin_ve 8
#define pin_vs 9
#define pin_aque 10
#define pin_led 11
#define pin_alarme 7
#define DHTTYPE DHT11
DHT dht (DHTPIN, DHTTYPE);
Ultrasonic ultrasonic(12, 13);
int h;

void setup() {
  dht.begin();
  pinMode(pin_ve, OUTPUT);
  pinMode(pin_vs, OUTPUT);
  pinMode(pin_aque, OUTPUT);
  pinMode(pin_led, OUTPUT);
  pinMode(pin_alarme, OUTPUT);
}

void loop() {
  float t = dht.readTemperature();
  h = ultrasonic.read();
  if (h == 0) {
    digitalWrite(pin_ve, 0);
  } else {
    digitalWrite(pin_ve,1);
  }
  if ((h<20) && (t>24) && (t<26)) {
    digitalWrite(pin_vs, 1);
  } else {
    digitalWrite(pin_vs, 0);
  }
  if (h > 40){
    digitalWrite(pin_led,1);
  } else {
    digitalWrite(pin_led,0);
  }
  if (h > 45){
    digitalWrite(pin_alarme, 1);
  } else {
    digitalWrite(pin_alarme, 0);
  }
}
