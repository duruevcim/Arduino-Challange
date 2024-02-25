// C++ code


#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int count = 0 ;
void setup() 
{
  pinMode(10, INPUT);  pinMode(13, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Person counter");
  
 
}

void loop() 
{
  if(digitalRead(10) ==  HIGH)
  {
    count = count+1;
    delay(1500);
    
  }  
  if (count > 12)
  {
    digitalWrite(13, HIGH);
  }
    
    
    
   lcd.setCursor(0, 1);
   lcd.print(count);
  
}