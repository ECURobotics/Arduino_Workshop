//Control and LCD disply
//Connect a potentiometer to control birghtness of display (characters should be nice and visible)

#include <LiquidCrystal.h>
int rs=7; //register select
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7); //How to tell the arduino how we have connected the lcd
void setup() {
  // 16=coloumns, 2=ros
  lcd.begin(16,2);
}

void loop() {
  //Always gotta tell lcd where to place the cursor (upper left)
  lcd.setCursor(0,0);
  //First part of lesson - test connection of LCD
  //  lcd.print("Hello World");
  lcd.print("Watch me Count");
  for (int j=1;j<=10;j=j+1){
    lcd.setCursor(0,1); //This will print to the next line
    lcd.print(j);
    delay(500);
 }
  lcd.clear();

  //For anyone who speeds ahead, do a quick calculator! Ask for two inputs, an operator and display it nicely. 
}
