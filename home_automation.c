const int relayPin = 7;  // Pin connected to the relay module

void setup() {
  pinMode(relayPin, OUTPUT);  // Set the relay pin as an output
  Serial.begin(9600);         // Start serial communication at 9600 baud
  Serial.println("Ready to receive commands.");
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n'); // Read the incoming command
    command.trim(); // Remove any extraneous whitespace

    if (command.equalsIgnoreCase("ON")) {
      digitalWrite(relayPin, LOW); // Turn on the relay (LOW for active mode)
      Serial.println("Relay is ON");
    } else if (command.equalsIgnoreCase("OFF")) {
      digitalWrite(relayPin, HIGH); // Turn off the relay (HIGH for inactive mode)
      Serial.println("Relay is OFF");
    } else {
      Serial.println("Invalid command. Please enter 'ON' or 'OFF'.");
    }
  }
}
