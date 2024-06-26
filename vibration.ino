
int ledpin=5;
int vibpin=6;
int buzzerpin=4;
float vibstate=0;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(vibpin,INPUT);

}

void loop() {
  vibstate=digitalRead(vibpin);
  if (vibstate==HIGH)
  {
    digitalWrite(ledpin,HIGH);
    digitalWrite(buzzerpin,HIGH);

  }
  else{
    digitalWrite(ledpin,LOW);
    digitalWrite(buzzerpin,LOW);
  }
 
}