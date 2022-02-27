#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

conts int PWM_PIN = 13;//physical por number 

int main(){
    wiringPiSetupGpio();
    pinMode(PWM_PIN, PWM_OUTPUT);
    pwmSetMode(PWM_MODE_MS);

    pwmSetClock(187);
    pwmSetRange(1024);

    while(1){
        for (int i = 0; i < 101; i+=5){
            pwmWrite(PWM_PIN, i);
            delay(500);
        }
    }
}