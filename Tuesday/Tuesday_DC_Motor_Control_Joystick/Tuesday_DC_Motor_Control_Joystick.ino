int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed;
int jPin=A1;
int jVal;
int switchpin=2;
int switchval;

void setup() {
  // put your setup code here, to run once:
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(jPin, INPUT);
Serial.begin(9600);
digitalWrite(switchpin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

// Directions set in opposite directions for motor to spin one way
xVal=analogRead(xPin);
yVal = analogRead(yPin);
Serial.println(jVal);
if(jVal<512){
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  mSpeed=(-255./512.)*jVal+255.;
  analogWrite(speedPin, mSpeed); 
}
if(jVal>=512){
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
  mSpeed=(255./512.)*jVal-255.;
  analogWrite(speedPin, mSpeed); 
}

}
