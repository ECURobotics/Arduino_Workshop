int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=175; // 0 - 255
int tiltPin=2;
int tiltVal;

void setup() {
  // put your setup code here, to run once:
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(tiltPin, OUTPUT);
digitalWrite(tiltPin, HIGH); //places pull-up resistor between high and pin - switch is closed = reads 0 
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

// Directions set in opposite directions for motor to spin one way
digitalWrite(dir1, LOW);
digitalWrite(dir2, HIGH);
tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal);
if (tiltVal==0){
  analogWrite(speedPin, mSpeed);
}
if(tiltVal==1){
  analogWrite(speedPin, 0); //or digitalWrite LOW
}
} 
