## lcd와 온도센서의 결합
온도센서는 저항의 여부에 따라 소자형과 모둘형으로 나뉘는데, 우리가 사용한 것은 모듈형이었다.
int pinDHT11 = 6;
SimpleDHT11 dht11(pinDHT11);
라는 코드는 순서가 매우 중요했는데, 핀에서 받은 값을 가지고 dht의 데이터를 지정해주는 것이기 때문이다.
또 온도센서로 온도와 습도의 값을 받아 lcd에 나타내어보았는데, 이 때 (char)0xDF를 써주면 우리가 일상적으로 쓰는 섭씨 기호인 작은 동그라미를 나타낼 수 있었다. 
이 때 char는 character의 약자로, 0xDF를 문자로 나타내주는 역할이었다.

![5](https://user-images.githubusercontent.com/76214070/173323091-20f62b17-e8b6-469a-8fee-34813d91e15e.PNG)
