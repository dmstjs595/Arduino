#include <SimpleDHT.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

int pinDHT11 = 6;
SimpleDHT11 dht11(pinDHT11);

void setup() {
  lcd.init();
  lcd.init();
  lcd.backlight();
    lcd.setCursor(3,0);
  Serial.begin(9600);
}
void loop() {
 
   lcd.setCursor(3,0);
   Serial.println("=================================");
     lcd.setCursor(2,0);
  Serial.println("Sample DHT11...");
  lcd.backlight();

   byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.print(SimpleDHTErrCode(err));
    Serial.print(","); Serial.println(SimpleDHTErrDuration(err)); delay(1000);
    return;//에러 발생 시 실행 코드
}

  Serial.print("Sample OK: ");
    lcd.setCursor(1,1);
  Serial.print((int)temperature); Serial.print(" *C, ");//섭씨 온도로 온도 출력
   lcd.print((int)temperature);   lcd.print((char)0xDF);//화씨 온도로 온도 출력

    lcd.setCursor(7,1); 
  Serial.print((int)humidity); Serial.println(" H");
 lcd.print((int)humidity);   lcd.print("H");//습도 
  delay(1500);
}
