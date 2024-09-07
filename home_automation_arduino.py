import serial
import time

# Replace 'COM3' with the appropriate port for your system.
# On Windows, it might be something like 'COM3'. On macOS/Linux, it might be '/dev/ttyACM0' or similar.
arduino_port = 'COM3'
baud_rate = 9600

# Set up the serial connection to the Arduino
arduino = serial.Serial(arduino_port, baud_rate, timeout=1)
time.sleep(2)  # Wait for the connection to establish

def send_command(command):
    if command in ['ON', 'OFF']:
        arduino.write((command + '\n').encode())  # Send the command to Arduino
        response = arduino.readline().decode().strip()  # Read the response from Arduino
        print(response)
    else:
        print("Invalid command. Please enter 'ON' or 'OFF'.")

try:
    while True:
        user_input = input("Enter 'ON' to turn the appliance on, 'OFF' to turn it off, or 'exit' to quit: ").strip().upper()
        if user_input == 'EXIT':
            break
        send_command(user_input)

except KeyboardInterrupt:
    print("Program interrupted")

finally:
    arduino.close()  # Close the serial connection
    print("Serial connection closed")
