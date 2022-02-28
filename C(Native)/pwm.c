#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

const int PWM_PIN = 13;

int main(){
    wiringPiSetupGpio();
    pinMode(PWM_PIN, PWM_OUTPUT);
    pwmSetMode(PWM_MODE_MS);

    pwmSetClock(187);
    pwmSetRange(1024);

    while(1){
        for(int i=0;i<101;i+=10){
            pwmWrite(PWM_PIN, i);       
            pwmWrite(PWM_PIN, duty_cycle);
            delay(500);
        }
    }
}
