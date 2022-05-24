rc카를 움직이도록 프로그래밍 했다. 
모터는 총 4개였고, 2개씩 한 쌍으로 움직였다. 
motor1pinA와 motor1pinB가 한 쌍, motor2pinA와 motor2pinB가 한 쌍이었다. 
이 때 각각의 pin에 HIGH, LOW 신호를 보내어 회로를 닫고 열 수 있는데, 둘 다 HIGH일때는 신호가 중첩되므로 바퀴가 움직이지 않고, 둘 다 LOW일때는 아예 회로에 신호가 가지 않기 때문에 바퀴가 움직이지 않는다. 
즉, 한 쌍의 pin 중 하나는 HIGH값을, 하나는 LOW 값을 가져야하는 것이다. 
이 때 HIGH와 LOW의 순서쌍에 따라 전진과 후진이 결정된다. 
이는 직접 실험해봄으로써 확인할 수 있다. 
내 rc카의 경우 전진할 때       
    digitalWrite(motor1PinA, LOW);
     digitalWrite(motor1PinB, HIGH);
     digitalWrite(motor2PinA, HIGH);
     digitalWrite(motor2PinB, LOW);
     delay(1000);
후진할 때 
 digitalWrite(motor1PinA, HIGH);
  digitalWrite(motor1PinB, LOW);
  digitalWrite(motor2PinA, LOW);
  digitalWrite(motor2PinB, HIGH);
  delay(1000);
의 순서쌍이 나타났다. 
또한 우회전은 오른쪽 바퀴는 정지하고 왼쪽바퀴는 전진함으로써 실행할 수 있고, 좌회전은 이 반대의 경우가 된다. 
또한 fritzing 이라는 프로그램으로 회로를 구성해보기도 했는데, 프로그램 자체에 존재하지 않는 부품을 추가하고싶을 때에는 구글에 “(부품 이름)fzpz”를 서치해 설치한 후 fritzing프로그램에서 import해 사용할 수 있다. 
![20220523_202731](https://user-images.githubusercontent.com/76214070/170051873-f989d69f-2b1f-4594-9800-a83088e79899.jpg)
![image](https://user-images.githubusercontent.com/76214070/170051931-a20ab026-132e-4e86-b2d5-a79cd4ef9683.png)
