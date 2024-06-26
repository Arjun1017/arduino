int buzzer_pin=5;
void setup() {
  pinMode(buzzer_pin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  tone(buzzer_pin,1000);
  delay(1000);
  noTone(buzzer_pin);
  delay(1000);
  tone(buzzer_pin,1500);
  delay(1000);
  noTone(buzzer_pin);
  delay(1000);
 // put your main code here, to run repeatedly:

}
