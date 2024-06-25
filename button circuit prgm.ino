const int ledpin = 13;
const int buttonpin = 5;
int buttonstate = 0;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
}
void loop()
{
  buttonstate = digitalRead(buttonpin);
  if (buttonstate == 1)
  {
    digitalWrite(ledpin, HIGH);
  }
  else {
    digitalWrite(ledpin,LOW);
  }
}
