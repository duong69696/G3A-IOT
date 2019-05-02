#include <LiquidCrystal.h>
#define button1 8
#define button2 9
#define button3 10
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Menu");


}

void loop() {

  int i;
  int a;
  int b;
  if (digitalRead(button1) == 1) {
    lcd.clear();
    lcd.print("food");
    lcd.setCursor(0, 1);
    delay(3000);
    while (1) {
      if (digitalRead(button1) == 1) {
        i += 1;
        while (i > 3) {
          i = 0;
        }
      }
      switch (i) {
        case 1:
          lcd.print("food1");
          delay(2000);
        case 2:
          lcd.print("food2");
          delay(2000);
        case 3:
          lcd.print("food3");
          delay(2000);
        default:
          lcd.print("no food");
          delay(2000);
      }
      if (digitalRead(button3) == 1) {
        a = i;
        delay(2000);
      }


    }
  }
  if (digitalRead(button2) == 1) {
    lcd.clear();
    lcd.print("drink");
    lcd.setCursor(0, 1);
    delay(3000);
    if (digitalRead(button2) == 1) {
      i += 1;
      while (i > 3) {
        i = 0;
      }
    }
    switch (i) {
      case 1:
        lcd.print("drink1");
        delay(2000);
      case 2:
        lcd.print("drink2");
        delay(2000);
      case 3:
        lcd.print("drink3");
        delay(2000);
      default:
        lcd.print("no drink");
        delay(2000);
    }
    if (digitalRead(button3) == 1) {
      b = i;
      delay(2000);
    }


  }
  lcd.clear();
  lcd.print(a);
  lcd.setCursor(0, 1);
  lcd.print(b);

}
