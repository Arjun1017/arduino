int ledpin=3;
int ldrpin=5;
int ldrstate;
void setup()
{
  pinMode(ledpin,OUTPUT);
  pinMode(ldrpin,INPUT);

}
void loop()
{
  ldrstate=digitalRead(ldrpin);
  if(ldrstate==HIGH)
  {
    digitalWrite(ledpin,LOW);
  }
  else
  {
    digitalWrite(ledpin,HIGH);
    
  }
}