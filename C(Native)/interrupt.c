#include <wiringPi.h>
#include <stdio.h>
int LED = 26;			/* GPIO26 as per wiringPi, GPIO12 as per BCM, pin no.32 */
int switch_input = 21;          /* GPIO21 as per WiringPi, GPIO5 as per BCM, pin no.29 */
int main(){
	wiringPiSetup();	/* initialize wiringPi setup */
	pinMode(LED,OUTPUT);	/* set GPIO as output */
	pullUpDnControl(switch_input, PUD_UP);
	while (1){
		if(digitalRead(switch_input))
			digitalWrite(LED,LOW);		/* write LOW on GPIO */
		else
			digitalWrite(LED, HIGH);	/* write HIGH on GPIO */
		
		}
	}
