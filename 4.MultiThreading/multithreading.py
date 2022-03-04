import RPi.GPIO as GPIO
import time
import threading



Rled = 26
Gled = 6

GPIO.setmode(GPIO.BCM)

GPIO.setup(Rled,GPIO.OUT)
GPIO.setup(Gled,GPIO.OUT)
GPIO.setwarnings(False)

def blue():
        while True:
                start = time.time()
                print ("LED BLUE is  ON")
                GPIO.output(Gled,GPIO.LOW)
                time.sleep(1.5)
                print ("LED BLUE is  OFF")
                GPIO.output(Gled,GPIO.HIGH)
                time.sleep(1.5)
                end = time.time()
                print(f"Time taken to blink Blue LED is : {end - start}")
def red():
        while True:
                start = time.time()
                print ("LED RED is  ON")
                GPIO.output(Rled,GPIO.LOW)
                time.sleep(1)
                print ("LED RED is OFF")
                GPIO.output(Rled,GPIO.HIGH)
                time.sleep(1)
                end = time.time()
                print(f"Time taken to blink  Red LED is : {end-start}")


t1 = threading.Thread(target=blue)
t2 = threading.Thread(target=red)


t1.start()
t2.start()
