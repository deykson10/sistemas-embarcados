// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int seconds = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
 lcd_1.begin(16, 2);
  
 lcd_1.print("suave mano!");
} 

void loop()
{
  lcd_1.setCursor(0, 1);
  lcd_1.print(seconds);
  lcd_1.setBacklight(1);
  delay(1000); // wait for 500 millecond(s)
  seconds += 1;

}