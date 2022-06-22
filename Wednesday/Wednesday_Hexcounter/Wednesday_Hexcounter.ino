//byte myBinary=B000000000;
//byte myHex=0x0;
byte myByte = 0x0;
byte myByte2 = 0xF;
byte totalByte;
//byte myOct= 
int dt=100;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(myByte, HEX);
  Serial.print(" , ");
  //Print out the binary conversion
  Serial.print(myByte, BIN);
  Serial.print(" , ");
  //Print out the decimal conversion
  Serial.println(myByte, DEC);
  
  myByte = myByte+1;
  delay(dt);
  //Challenge for those who go ahead: Create a binary adder/subtracter (serial monitor)
  myByte2 = myByte2+1;
  totalByte = myByte + myByte2;
  Serial.println(totalByte, DEC);
  delay(1000);
  
  

}
