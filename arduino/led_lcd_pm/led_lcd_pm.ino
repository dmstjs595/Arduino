#include <PMsensor.h>

PMsensor PM;
int redPin = 3;
int greenPin = 6;
int bluePin = 5;
#include <Wire.h>
#include <LiquidCrystal_I2C.h>//헤더파일은 맨 위에 적기

LiquidCrystal_I2C lcd(0x27, 16, 2);//lcd의 디스플레이 설정 

void setup() {
  Serial.begin(9600);

  /////(infrared LED pin, sensor pin)  /////
  PM.init(2, A0);
  pinMode(redPin, OUTPUT);

  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  lcd.init();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
}

void loop() {
  Serial.println("=================================");
  Serial.println("Read PM2.5");
  lcd.backlight();
  float filter_Data = PM.read(0.1);//정수로 filter data 받음
  float noFilter_Data = PM.read();//정수로 nofilter data 받음
  
  lcd.setCursor(1,0);
  lcd.print("Filter : ");
  Serial.print("Filter : ");
  lcd.setCursor(1,1);
  lcd.print(filter_Data);//filter data 출력
  Serial.println(filter_Data);//serial monitor에 filter data 출력



  Serial.print("noFilter : ");
  Serial.println(noFilter_Data);//serial 모니터에 nofilter data출력


  //delay(1000);

  if (filter_Data <= 30) {
    digitalWrite(greenPin, HIGH);//초록빛 출력
        digitalWrite(bluePin, LOW);
    digitalWrite(redPin, LOW);
     delay(200);
  }
  else if (30 < filter_Data  && filter_Data<= 80) {
    digitalWrite(bluePin, HIGH);//파란색 빛 출력
         digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
    delay(200);

  }
  else if( filter_Data > 80) {
    Serial.println("64");

    digitalWrite(redPin, HIGH);//빨간빛 
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    delay(200);

  }
}
