//Need switch, 10K Ohm resistor, 330 Ohm resistor, LED 

int LEDState=0;   //Value passed through if statements
int LEDPin=8;
int buttonPin=12;
int buttonNew;
int buttonOld=1;  //button switch is off
int dt=100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew=digitalRead(buttonPin);

//Loops between on and off for switch inputs 
if (buttonOld==0 && buttonNew==1){
  if (LEDState==0){           //Switch on
    digitalWrite(LEDPin,HIGH);
    LEDState=1;
  }
  else{                       //Switch off
    digitalWrite(LEDPin, LOW);
    LEDState=0;
  }
}
buttonOld = buttonNew;        //Need to remember new value, which becomes old value as the loop reiterates
delay(dt);
}
