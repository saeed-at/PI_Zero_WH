#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

conts int PWM_PIN = 25;

int main(){
    int duty_cycle;
    wiringPiSetupGpio();
    pinMode(1, PWM_OUTPUT);
    pwmSetMode(PWM_MODE_MS);

    pwmSetClock(187);
    pwmSetRange(1024);

    system("clear");
    while(1){
        print("please insert duty cycle:");
        scanf("%d". &duty_cycle);
        system("clear");
        printf("\n duty = %d of \'1023\'\n", duty_cycle);
        pwmWrite(PWM_PIN, duty_cycle);

    }
}