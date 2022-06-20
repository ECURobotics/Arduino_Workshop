//Need LED, 330 ohm resistor, potentiometer 

int potPin = A1;  //Analog 1 pin
int bPin = 6;     //pin 6 of LED
int potVal;       //potentiometer read value, 0-1023
float LEDVal;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin, INPUT);   //declare potentiometer as input
pinMode(bPin, OUTPUT);    //declare LED as output
Serial.begin(9600);       //Setup serial monitor, 9600 Bod rate

}

void loop() {
  // put your main code here, to run repeatedly:

potVal=analogRead(potPin);    //read pot val
LEDVal=(255./1023.)*potVal;   //calc LED val, floating point math used
analogWrite(bPin,LEDVal);     //pass LED val to bpin
Serial.println(LEDVal);       //print values to serial monitor to check if code works as intended
}
