//This program recieves the command of on/off button of the remote

#include <IRremote.h> //Make sure to install the library
int IRpin=9;
IRrecv IR(IRpin); //Creates the IR object and state connected pin
decode_results cmd; //Changes the signal read from the remote to our command
String myCom;


void setup(){
  Serial.begin(9600);
  IR.enableIRIn(); //Start module
}

void loop() {
  //Must always place the &, this is to show that you are assigning the value to cmd
  while (IR.decode(&cmd)==0){ 
  }
  Serial.println(cmd.value,HEX);
  //This is so it doesn't continously read the button
  delay(1500);
  //This function tells the sensor to read another value
  IR.resume();

  if (cmd.value==0xFF6897){
    myCom="zero";
    Serial.println(myCom); 
  }
  if (cmd.value==0xFFA25D){
    myCom="pwr";
    Serial.println(myCom); 
  }

  //Challenge -> Have it print only the value of the button (0, isnt of the HEX)
  //Challenge 2-> Using the hex values that display in the serial monitor code the up, down, left and right button 

}
