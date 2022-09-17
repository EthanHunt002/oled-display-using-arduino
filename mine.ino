#include <Silvervest_OLED_0010_SPI.h>
Silvervest_OLED_0010_SPI lcd(10);
void setup() {
  lcd.begin(16, 2);

}

void loop() {
   lcd.setCursor(0, 0);
   lcd.print("Work in progress !!!");
   lcd.scrollDisplayLeft();
   delay(125);
   lcd.setCursor(23, 1);
   lcd.print("Title: My Telephone");
   lcd.scrollDisplayLeft();
   delay(125);
}
/*
 * arduino uno spi pinout
 * sck 13
 * master in slave out(miso) 12
 * master out slave in(mosi) 11
 * 
 * oled spi pinout
 * scl 12
 * serial digital output signal 13
 * serial digital input signal 14
 * active low chip signal 16
 
 
 connectons
 arduino-oled
 13-12
 12-13
 11-14
 10-16   active low pin can be set as any pin on arduino as you like, but make sure to change the pin in the library too
 
 
 */
