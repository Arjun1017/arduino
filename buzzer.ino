int buzzer_pin=9;
void setup()
{
  pinMode(buzzer_pin, OUTPUT);
}
void loop()
{
  tone(buzzer_pin,500);
  delay(500);
  noTone(buzzer_pin);
  delay(500);

  tone(buzzer_pin,1000);
  delay(500);
  noTone(buzzer_pin);
  delay(500);

  tone(buzzer_pin,1500);
  delay(500);
  noTone(buzzer_pin);
  delay(500);
  
}
