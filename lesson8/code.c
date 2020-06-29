/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time(程序目的).

  The circuit:
 * LCD RS pin to digital pin 12（寄存器选择对应的串口）
 * LCD Enable pin to digital pin 11（启用对应的串口）
 * LCD D4 pin to digital pin 5（D1对应的串口）
 * LCD D5 pin to digital pin 4（D2对应的串口）
 * LCD D6 pin to digital pin 3（D3对应的串口）
 * LCD D7 pin to digital pin 2（D4对应的串口）
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V（将电源，对比度，地线设为对应数据）
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
//引入lcd对应的库
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
//设置对应D1，D2，D3，D4，RS，E的串口
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  //设置lcd显示在哪行哪列，可以指定行列。
  lcd.begin(16, 2);
  // Print a message to the LCD.
  //将需要的内容显示在lcd上，可在下方修改内容。
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  //将输入的光标定位在第一行零列
  // (note: line 1 is the second row, since counting begins with 0):
  //C语言0行才是第一行。
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  //lcd打印后复位的秒数
  lcd.print(millis() / 1000);
}
 