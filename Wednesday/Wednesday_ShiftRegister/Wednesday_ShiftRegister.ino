//Define all critical pins that work with data
int latchPin=11;
int clockPin=9;
int dataPin=12;
//Set HEX number - This will turn all LEDs high
byte LED2=0xFF; 
byte LEDS=0B001010101; 
int dt=150;


void setup() {
  // Define pinModes 
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT); //Simple command for the conversion
  pinMode(dataPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //In order to send data, latchpin must be off (to accept)
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDS); //Define order (least significant bit first or last?)
  delay(dt);
  digitalWrite(latchPin, HIGH);
  //Now we can shift between two binary indications 
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LED2);
  delay(dt);
  //NOw that data has been sent, we need to close that line of communication
  digitalWrite(latchPin, HIGH);
  
}
