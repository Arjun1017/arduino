int buzzer_pin=5;
int temp_pin=A1;
int temp_state=0;
int threshold= 100;
void setup()
{
  pinMode(buzzer_pin,OUTPUT);
  pinMode(temp_pin,INPUT);
}
void loop()
{
  temp_state=analogRead(temp_pin);
  float temperature=temp_state*(5.0/1023.0)*100.0;
  if(temperature>=threshold)
  {
    digitalWrite(buzzer_pin,HIGH);
  }
  else
  {
    digitalWrite(buzzer_pin,LOW);
  }
}
  
