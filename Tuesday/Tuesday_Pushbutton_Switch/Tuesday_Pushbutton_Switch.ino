//Pushbutton without need of resistor hooked into circuit

int buttonPin=2;
int buttonValue;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);  //connects it to 5V, pull-up situation and reads a 1 constantly until depressed
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonValue=digitalRead(buttonPin);
Serial.print("Your Button is: ");
Serial.println(buttonValue);
delay(dt);
}
