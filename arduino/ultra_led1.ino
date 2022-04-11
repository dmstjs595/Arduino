int echo_pin = 11; //초음파센서 eco pin을 12번
int trig_pin = 10; //초음파센서 trig pin을 11번
int led1 = 12;
int speakerpin = 13;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echo_pin, INPUT); //수신을 하기 때문에 INPUT으로 설정
  pinMode(trig_pin, OUTPUT); //송신을 하기 때문에 OUTPUT으로 설정
  pinMode(led1, OUTPUT);
}
void loop() {
  float duration, distance ;
  digitalWrite(trig_pin, HIGH); //high
  delay(10);//trigger핀이 10동안 발사됨
  digitalWrite(trig_pin, LOW); //low
  duration = pulseIn( echo_pin, HIGH);
duration = pulseIn(echo_pin, HIGH);
  distance = (float(duration / 2) / 29.1);
  Serial.print(distance); //시리얼 포트를 열어서 거리를 확인한다.
  Serial.println("mm"); //cm로 하고 싶으면 ‘/100’을 해주면 된다.
  if (distance < 30)
  {digitalWrite(led1, HIGH);
delay(1000);}
else{digitalWrite(led1, LOW);
  tone(speakerpin,500,1000);
delay(10);}
  delay(3);

}
