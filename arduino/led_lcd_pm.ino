#include <PMsensor.h>

PMsensor PM;
int redPin = 3;
int greenPin = 6;
int bluePin = 5;
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

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
  float filter_Data = PM.read(0.1);
  float noFilter_Data = PM.read();
  
  lcd.setCursor(1,0);
  lcd.print("Filter : ");
  Serial.print("Filter : ");
  lcd.setCursor(1,1);
  lcd.print(filter_Data);
  Serial.println(filter_Data);



  Serial.print("noFilter : ");
  Serial.println(noFilter_Data);


  //delay(1000);

  if (filter_Data <= 30) {
    digitalWrite(greenPin, HIGH);
        digitalWrite(bluePin, LOW);
    digitalWrite(redPin, LOW);
     delay(200);
  }
  else if (30 < filter_Data  && filter_Data<= 80) {
    digitalWrite(bluePin, HIGH);
         digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
    delay(200);

  }
  else if( filter_Data > 80) {
    Serial.println("64");

    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    delay(200);

  }
}
