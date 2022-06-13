int led1 = 12;

void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);//led1 입력
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1, HIGH);//켜기
delay(1000);
digitalWrite(led1, LOW);//끄기
delay(1000);
}
