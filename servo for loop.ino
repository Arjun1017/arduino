#include<Servo.h>
Servo myServo;
const int servopin =6;

void setup() {
myServo.attach(servopin);  // put your setup code here, to run once:
}

void loop() {
 for(int i=0;i<=180;i++)
  {
    myServo.write(i);
    delay(15);
  }
   for(int i=180;i>=0;i--)
  {
    myServo.write(i);
    delay(15);
  }
 }