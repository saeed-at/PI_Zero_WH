#include <stdio.h>
#include <wiringpi.h>

#define LED-PIN 26
int main(){
  printf("testing led...\n');
  wintingPiSetup();
  pinMode(LED_PIN, OUTPUT);
  while(1){
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    }
    RETURN(1);
