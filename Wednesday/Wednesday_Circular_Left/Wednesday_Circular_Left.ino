int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=100;
byte myByte=0b10101010; //Put your binary number here

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,myByte);
digitalWrite(latchPin,HIGH);
Serial.println(myByte,BIN);
delay(dt);
myByte=myByte/128+myByte*2;
}
