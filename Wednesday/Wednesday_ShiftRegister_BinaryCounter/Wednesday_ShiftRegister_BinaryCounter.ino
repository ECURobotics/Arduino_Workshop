//Using the 74HC595 shift register, and 8 leds, flash from 0-255 
int latchPin=11;
int clockPin=9;
int dataPin=12;
//Set HEX number - This will turn all LEDs high
//byte LEDS=0xFF; 
//byte LED1;
byte LEDS=0B000000000; 
int dt=150;


void setup() {
  // Define pinModes 
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT); //Simple command for the conversion
  pinMode(dataPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //In order to send data, latchpin must be off (to accept)
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDS); //Define order (least significant bit first or last?)
  digitalWrite(latchPin, HIGH);
  delay(dt);
  //This is how it will count
  LEDS = LEDS+1;
  Serial.print(LEDS, BIN);
  Serial.print(" , ");
  Serial.println(LEDS, DEC);
  delay(dt);
  
}
