// Need L293d motor controller, Power Supply, DC motor and Fan
// Later need Tilt Switch

//WARNINGS:
// Motor will draw too much current if plugged straight into the Arduino digital pins
// Motor acts as an inductor - cannot instantaneously change the current within a coil of wire - backward voltage spike back into Arduino
// Power management and heat management are important - need controllers and power supplies that suit the motor used
// Power Supply rails MUST match the breadboard positive and negative rails
// Power Supply jumper needs to be attached to 5V and VCC, otherwise 5V not supplied

//notch on the chip shows pin 1
// chip controls speed and direction of two appropriately sized DC motors (Pins on left control 1 motor, right side another)

//EN1 controls the speed of the motor - analogWrite to EN1, need squigly line pin to PWM function
// IN1 and IN7 control direction
// OUT1 and OUT2 connect to the motor
//Pin 4 is ground of supply
//+Vmotor is power from power supply

int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=170; // 0 - 255

void setup() {
  // put your setup code here, to run once:
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

// Directions set in opposite directions for motor to spin one way
digitalWrite(dir1, LOW);
digitalWrite(dir2, HIGH);
analogWrite(speedPin, 255);     //code gives the motor a jumpstart if the speed was originally set low
delay(25);
analogWrite(speedPin, mSpeed);  //sets speed of motor
delay(5000);
}
