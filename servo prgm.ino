#include<Servo.h>
Servo myServo;
const int servopin =6;

void setup() {
myServo.attach(servopin);  // put your setup code here, to run once:
}

void loop() {
  myServo.write(0);
  delay(5000);// put your main code here, to run repeatedly:
  myServo.write(90);//move servo to 90 degrees
  delay(5000);// wait for 1 second
  myServo.write(180);
  delay(5000);
}