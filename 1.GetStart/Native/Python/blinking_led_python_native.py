import RPi.GPIO as GPIO
import time

pin = 26

GPIO.setmode(GPIO.BCM)
GPIO.setup(pin, GPIO.OUT)

while(True):
    GPIO.output(pin, True)
    time.sleep(0.5)
    GPIO.output(pin, False)
    time.sleep(0.5)

GPIO.cleanup()
