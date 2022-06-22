#include <Servo.h>
int servoPin=9;
int servoPos=0; //past 165 makes the servo overdriven (beeping sound indicates overdriving)
Servo myServo;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What angle for the servo?");
while (Serial.available()==0){  //loops and waits until input
}
servoPos=Serial.parseInt();     //reads user input

myServo.write(servoPos);  //tells servo to move to defined position
}

//Extra Q: Figure out why the servo wants to return to the initial position? - Ans = Change Serial monitor's "New Line" to "No line Ending"
