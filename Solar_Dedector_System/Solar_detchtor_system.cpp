// C++ code
#include <LiquidCrystal.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("servo1");
  lcd.setCursor(0, 1);
  lcd.print("servo2");
  servo1.attach(9);
  servo2.attach(8);
}

void loop() {
  int sensor1 = analogRead(A0);
  int sensor2 = analogRead(A1);
  int sensor3 = analogRead(A2);
  int sensor4 = analogRead(A3);

  int avg1 = (sensor1 + sensor2) / 2;
  int avg2 = (sensor3 + sensor4) / 2;

  adjustServo1(avg1, avg2);
  adjustServo2(avg1, avg2);

  lcd.setCursor(12, 0);
  lcd.print(servo1.read());
  lcd.setCursor(12, 1);
  lcd.print(servo2.read());

  delay(10);
}

void adjustServo1(int avg1, int avg2) {
  int delta = avg1 - avg2;
  servo1.write(constrain(servo1.read() + delta, 0, 180));
}

void adjustServo2(int avg1, int avg2) {
  int delta = avg1 - avg2; 
  servo2.write(constrain(servo2.read() - delta, 0, 180)); 
}
