int motor1PinA  = 2 ;
int motor1PinB =3 ;
int enablelPin=  11 ; 
int motor2PinA  = 4 ;
int motor2PinB =5 ;
int enable2Pin=  10 ; 

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
     digitalWrite(motor1PinA, HIGH);
     digitalWrite(motor1PinB, LOW);
     digitalWrite(motor2PinA, LOW);
     digitalWrite(motor2PinB, HIGH);
     delay(1000);
   
     }
