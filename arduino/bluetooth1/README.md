## RC카를 블루투스로 조종

블루투스 연결을 해 보았다.
BTSerial 함수를 통해 블루투스 송수신을 할 수 있었다. 
 이 때 블루투스에서 송신을 하면 아두이노는 수신을 하고, 아두이노에서 송신을 하면 블루투스로 수신을 해야하기 때문에 RXD(Recieve Data)는 TX(Transmit Data)와, TX는 RX와 연결해야 한다.
Blooth rc controller 앱을 사용해 rc카를 제어했다. 
방향키를 누르면 시리얼 모니터에 case들이 나왔는데, 이 상황에 맞추어 함수를 만들어 적절한 움직임을 표현할 수 있도록 했다. 
이 때 대각선 방향으로 갈 때는 enable pin의 값을 다르게 해주어 양 바퀴의 속도에 차이를 두었고 이 상태로 앞, 뒤로 가는 코드를 실행했다. 
또 배터리는 12v 이므로, 5v가 아닌 12v, 즉 vin과 연결해야한다는 점을 간과해서는 안된다. 
![20220530_200052](https://user-images.githubusercontent.com/76214070/173239589-61fcdbfc-f752-4055-adeb-806fa07eedd1.jpg)
![Screenshot_20220613-000627_Bluetooth RC Controller](https://user-images.githubusercontent.com/76214070/173239594-b03d6754-bbc6-4da4-bf1b-15573dc81e24.jpg)
![image](https://user-images.githubusercontent.com/76214070/173355782-7ad14050-7146-4cbc-b410-25f0a7270339.png)
