import time
import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

pinout = 18
color = "Green"

GPIO.setup(pinout,GPIO.OUT)

GPIO.output(pinout,GPIO.HIGH)
time.sleep(1)

GPIO.output(pinout,GPIO.LOW)
time.sleep(1)