int redLed=4;
int dit=50;
int dah=150;
int longW=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLed, HIGH);
delay(dit);
digitalWrite(redLed, LOW);
delay(dit);

digitalWrite(redLed, HIGH);
delay(dit);
digitalWrite(redLed, LOW);
delay(dit);

digitalWrite(redLed, HIGH);
delay(dit);
digitalWrite(redLed, LOW);
delay(dit);

digitalWrite(redLed, HIGH);
delay(dah);
digitalWrite(redLed, LOW);
delay(dah);

digitalWrite(redLed, HIGH);
delay(dah);
digitalWrite(redLed, LOW);
delay(dah);

digitalWrite(redLed, HIGH);
delay(dah);
digitalWrite(redLed, LOW);
delay(dah);

digitalWrite(redLed, HIGH);
delay(dit);
digitalWrite(redLed, LOW);
delay(dit);

digitalWrite(redLed, HIGH);
delay(dit);
digitalWrite(redLed, LOW);
delay(dit);

digitalWrite(redLed, HIGH);
delay(dit);
digitalWrite(redLed, LOW);
delay(dit);

delay(longW);
}
