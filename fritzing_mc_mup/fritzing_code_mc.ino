#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27,16,2);


int BUT1=8;
int BUT2=9;


void setup(){
  lcd.init();
  lcd.backlight();
  pinMode(BUT1,INPUT_PULLUP);
  pinMode(BUT2,INPUT_PULLUP);
}


void loop(){
  if ((digitalRead(BUT1)==LOW) && (digitalRead(BUT2)==HIGH)){
    lcd.setCursor(0,1);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Marko");
  }
  else if ((digitalRead(BUT1)==HIGH) && (digitalRead(BUT2)==LOW)){
    lcd.setCursor(0,0);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Ciganovic");
  }
  else if ((digitalRead(BUT1)==LOW) && (digitalRead(BUT2)==LOW)){
    lcd.setCursor(0,0);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Marko");
    lcd.setCursor(0,1);
    lcd.print("Ciganovic");
  }
}

