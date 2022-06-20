int yellowPin=6;
int redPin=9;
int yellowTime=500;
int redTime=500;
int yellowBlink=3;
int redBlink=5;
int j;

void setup() {

pinMode(yellowPin, OUTPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);
}

void loop() {

for(j=1; j<=yellowBlink; j=j+1){
  //Serial.println(j); //prints value of j in serial monitor
  digitalWrite(yellowPin, HIGH);
  delay(yellowTime);
  digitalWrite(yellowPin, LOW);
  delay(yellowTime);
}
//Serial.println(); //prints blank line inbetween loops
for(j=1; j<=redBlink; j=j+1){
  //Serial.println(j);
  digitalWrite(redPin, HIGH);
  delay(redTime);
  digitalWrite(redPin, LOW);
  delay(redTime);
}
//Serial.println(); 
}
