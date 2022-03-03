#include <stdio.h>
#include <wiringPi.h>

#define LED_PIN 25
int main(){
  wiringPiSetup();
  pinMode(LED_PIN, OUTPUT);
  while(1){
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    }
}
