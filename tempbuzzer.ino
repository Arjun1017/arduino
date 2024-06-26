const int temp=A0;
const int buzzerpin=3;
const float tempth=25.0; 
void setup()
{
 pinMode(buzzerpin,OUTPUT);
 digitalWrite(buzzerpin,LOW);
 Serial.begin(9600);


void loop()
{
 int sensorvalue=analogRead(temp);
 float temp=sensorvalue*(3.0/1023.0)*10;
 Serial.print("temp:");
 Serial.print(temp);
 Serial.print("C");
 if(temp>tempth)
 {
   digitalWrite(buzzerpin,HIGH);
 }
 else
 {
   digitalWrite(buzzerpin,LOW);
 }
  delay(1000);
 
}