const int waterlevelpin = 3;
const int buzzerpin = 4;
int waterlevelstate = 0;
void setup()
{
  pinMode(buzzerpin, OUTPUT);
  pinMode(waterlevelpin, INPUT);
}
void loop()
{
  waterlevelstate = digitalRead(waterlevelpin);
  if (waterlevelstate == 1)
  {
    digitalWrite(buzzerpin, HIGH);
  }
  else {
    digitalWrite(buzzerpin,LOW);
  }
}