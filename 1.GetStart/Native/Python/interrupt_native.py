import RPi.GPIO as GPIO
import time 

GPIO.setmode(GPIO.BCM)

def template_func(channel):
    print("you pressed button...")

GPIO.setup(26, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.add_event_detect(26, GPIO.FALLING, callback=template_func, bouncetime=300)

i=0
while(True):
    i=i+1
    print(i)
    time.sleep(1)
