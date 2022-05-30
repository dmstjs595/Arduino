#include <SoftwareSerial.h>
SoftwareSerial BTSerial(12, 13);   //RX,TX

int motor1PinA  = 2  ;
int motor1PinB  = 3  ;
int enablelPin  =11 ;   
int motor2PinA  = 4  ;
int motor2PinB  = 5  ;
int enable2Pin  = 10 ;  
char in;
   void setup() {
        BTSerial.begin(9600);//블루투스 통신
        Serial.begin(9600);//시리얼통신
    
        pinMode(motor1PinA, OUTPUT);
        pinMode(motor1PinB, OUTPUT);
        pinMode(motor2PinA, OUTPUT);
        pinMode(motor2PinB, OUTPUT);
        pinMode(enable2Pin, OUTPUT);
        pinMode(enablelPin, OUTPUT);

        // set enablePin high so that motor can turn on:
       analogWrite(enable2Pin, 100);
       analogWrite(enablelPin, 100);
       }
   void loop() {
       if (BTSerial.available())
          { in =BTSerial.read();
            Serial.write(in);
         }
         if (Serial.available()) 
          {  BTSerial.write(Serial.read());
             Serial.print("data =");
           Serial.println(in);
          }
    
    switch(in){
               case 'F':Forward(); break;
               case 'R': Right(); break; 
               case 'S': Stop(); break;
               case 'L': Left(); break;
               case 'B': Back(); break;
               case 'G': ForwardLeft(); break;
               case 'I': ForwardRight(); break;
               case 'H': BackLeft(); break;
               case 'J': BackRight(); break;
               
             } 
      }  
void Forward(){  
    //  앞
 analogWrite(enablelPin, 100);
  analogWrite(enable2Pin, 100);
    
    digitalWrite(motor1PinA, LOW);
       digitalWrite(motor1PinB,HIGH);
       digitalWrite(motor2PinA,HIGH);
       digitalWrite(motor2PinB,LOW);
}
void Right(){  
    //  오른쪽
     analogWrite(enablelPin, 100);
  analogWrite(enable2Pin, 100);
  
       digitalWrite(motor1PinA, LOW);
       digitalWrite(motor1PinB,LOW);
       digitalWrite(motor2PinA,HIGH);
       digitalWrite(motor2PinB,LOW);
}
void Stop(){  
    //  정지
    digitalWrite(motor1PinA, LOW);
       digitalWrite(motor1PinB,LOW);
       digitalWrite(motor2PinA,LOW);
       digitalWrite(motor2PinB,LOW);
}
void Left(){  
    //  왼쪽
     analogWrite(enablelPin, 100);
  analogWrite(enable2Pin, 100);
  
        digitalWrite(motor1PinA, LOW);
       digitalWrite(motor1PinB,HIGH);
       digitalWrite(motor2PinA,LOW);
       digitalWrite(motor2PinB,LOW);
}void Back(){  
    //  뒤
     analogWrite(enablelPin, 100);
  analogWrite(enable2Pin, 100);
  
    digitalWrite(motor1PinA, HIGH);
       digitalWrite(motor1PinB,LOW);
       digitalWrite(motor2PinA,LOW);
       digitalWrite(motor2PinB,HIGH);
}void ForwardLeft(){  
    //  왼쪽앞
    analogWrite(enablelPin, 250);
  analogWrite(enable2Pin, 60);

  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  digitalWrite(motor2PinA, HIGH);
  digitalWrite(motor2PinB, LOW);
}
void ForwardRight(){  
    //  오른쪽앞
    analogWrite(enablelPin, 60);
  analogWrite(enable2Pin, 250);

  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  digitalWrite(motor2PinA, HIGH);
  digitalWrite(motor2PinB, LOW);
}
void BackLeft(){  
    //  왼쪽뒤
    analogWrite(enablelPin, 250);
  analogWrite(enable2Pin, 60);

   digitalWrite(motor1PinA, HIGH);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, HIGH);
}
void BackRight(){  
    //  오른쪽뒤
    analogWrite(enablelPin, 60);
  analogWrite(enable2Pin, 250);
  
  digitalWrite(motor1PinA, HIGH);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, HIGH);
 
}
