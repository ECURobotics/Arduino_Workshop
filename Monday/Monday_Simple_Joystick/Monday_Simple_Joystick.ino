//Need Joystick, Arduino 

int Xpin=A0;
int Ypin=A1;
int switchPin=2;
int Xval;
int Yval;
int switchVal;
int dt = 200;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin, INPUT);
pinMode(Ypin, INPUT);
pinMode(switchPin, INPUT);
digitalWrite(switchPin, HIGH); //sets up pull-up resistor, negates need for external circuitry  

}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
switchVal=digitalRead(switchPin);
delay(dt);
Serial.print("X Value = ");
Serial.print(Xval);
Serial.print(" Y Value = ");
Serial.print(Yval);
Serial.print(" Switch State is ");
Serial.println(switchVal);
}
