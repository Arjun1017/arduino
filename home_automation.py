import RPi.GPIO as GPIO
import time

# Setup
GPIO.setmode(GPIO.BCM)  # Use Broadcom pin numbering
relay_pin = 17          # GPIO pin connected to the relay module
GPIO.setup(relay_pin, GPIO.OUT)

def turn_on():
    GPIO.output(relay_pin, GPIO.LOW)  # LOW to turn on the relay (depends on relay module)
    print("Relay is ON")

def turn_off():
    GPIO.output(relay_pin, GPIO.HIGH) # HIGH to turn off the relay (depends on relay module)
    print("Relay is OFF")

try:
    while True:
        command = input("Enter 'on' to turn the light on, 'off' to turn it off, or 'exit' to quit: ").strip().lower()
        if command == 'on':
            turn_on()
        elif command == 'off':
            turn_off()
        elif command == 'exit':
            break
        else:
            print("Invalid command. Please enter 'on', 'off', or 'exit'.")

except KeyboardInterrupt:
    print("Program interrupted")

finally:
    GPIO.cleanup()  # Clean up GPIO pins
    print("GPIO cleanup done")
