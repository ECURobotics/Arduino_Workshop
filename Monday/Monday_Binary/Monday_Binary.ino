// Materials needed: 4x LEDs, 4x 330Ohm resistors, Breadboard, Arduino Uno + Cable, Jumper cables

//Pin varialbes
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int waitTime = 1000; //delay variable 


void setup() {
  // put your setup code here, to run once:
  
//establishes pins used and number of each pin
pinMode(pin2, OUTPUT);
pinMode(pin3, OUTPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//Binary 0
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 1
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 2
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 3
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 4
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 5
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 6
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 7
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waitTime);

//Binary 8
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 9
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 10
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 11
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 12
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 13
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 14
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waitTime);

//Binary 15
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waitTime);
}
