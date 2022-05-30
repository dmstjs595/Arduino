int motor1PinA  = 2 ;
int motor1PinB = 3 ;
int enablelPin =  11 ;
int motor2PinA  = 4 ;
int motor2PinB = 5 ;
int enable2Pin =  10 ;

void setup() {
  pinMode(motor1PinA, OUTPUT);
  pinMode(motor1PinB, OUTPUT);
  pinMode(motor2PinA, OUTPUT);
  pinMode(motor2PinB, OUTPUT);
  pinMode(enablelPin, OUTPUT);
  analogWrite(enablelPin, 100);
  analogWrite(enable2Pin, 100);//모터속도를 정해준다
}
void loop() {
  analogWrite(enablelPin, 100);
  analogWrite(enable2Pin, 100);//모터 속도 초기화

  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  digitalWrite(motor2PinA, HIGH);
  digitalWrite(motor2PinB, LOW);
  delay(1000);//앞
  digitalWrite(motor1PinA, HIGH);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, HIGH);
  delay(1000);//뒤
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, HIGH);
  digitalWrite(motor2PinB, LOW);
  delay(1000);//왼쪽
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, LOW);
  delay(1000);//오른쪽
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, LOW);
  delay(1000);//정지

  //1:30
  analogWrite(enablelPin, 100);
  analogWrite(enable2Pin, 200);//왼쪽 바퀴 속도>오른쪽 바퀴 속도

  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  digitalWrite(motor2PinA, HIGH);
  digitalWrite(motor2PinB, LOW);
  delay(375);
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, LOW);
  delay(1000);//정지

  //4:30
  analogWrite(enablelPin, 100);
  analogWrite(enable2Pin, 400);//왼쪽 바퀴 속도>>오른쪽 바퀴 속도

  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  digitalWrite(motor2PinA, HIGH);
  digitalWrite(motor2PinB, LOW);
  delay(750);
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, LOW);
  delay(1000);//정지

  //7:30
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  digitalWrite(motor2PinA, HIGH);
  digitalWrite(motor2PinB, LOW);
  delay(750);
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, LOW);
  delay(1000);//정지

  //10:30
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  digitalWrite(motor2PinA, HIGH);
  digitalWrite(motor2PinB, LOW);
  delay(750);
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, LOW);
  delay(1000);//정지
}
