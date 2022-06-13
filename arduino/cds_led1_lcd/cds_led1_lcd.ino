#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

int cds = A1;
int cdsValue = 0;
int led1 = 11;
void setup() {
  lcd.init();
  lcd.init();
  lcd.backlight();//백라이트 켜기
  lcd.setCursor(3,0);//커서 초기화
  lcd.print("Hello, world!");//프린트
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
}
void loop() {
  cdsValue  = analogRead(cds);
 
  Serial.print("sensor = ");
  Serial.println(cdsValue); //cds값 출력
  lcd.backlight();
  lcd.setCursor(0,1);
  lcd.print("cds_value = ");
  lcd.setCursor(12,1);
  lcd.print(cdsValue);
  if (cdsValue >= 600)
  {
    digitalWrite(led1, LOW);
  }
  else
  {
    digitalWrite(led1, HIGH);
  }
  delay(20);
}
