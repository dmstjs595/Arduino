미세먼지 센서에는 led 2개가 있어서 그라운드로 가는 선도 2개이다.
 또 용량을 변화시켜주는 일종의 저장소인 콘덴서와 155옴의 저항을 사용해 회로를 구성했다.
또 float는 실수를 의미하는데, 값을 실수로 받으면 값이 업데이트 될 때마다 계속 변화되며 오히려 정확성이 떨어질 수 있으므로, PM.read(0.1) 과 같은 코드를 사용하여 기존의 값을 0.9만큼, 새로운 값을 0.1 만큼 반영하는 등 정확성을 높이려는 시도를 해볼 수 있다.
그리고 lcd, rgb, pm sensor를 결합해보았는데 filter data의 값에 따라 rgb의 색상을 바꾸고 lcd에 나타내는 활동이었다.
 그런데 순차적으로 filter data의 값이 증가할수록 초록색, 파란색, 빨간색 순으로 색상이 바뀌어야 하는데 파란색이 된 후 빨간색으로 넘어가지 않았다. 
그래서 해결법을 계속 찾아보니 논리연산자의 문제였다는 것을 알게되었다.
30<filter_Data<80 가 아니라 30<fliter_Data && filter_Data<80 이 되어야 했던 것이다. 
이런 사소한 것도 코딩에서는 성공과 실패를 좌우하는 중요한 요소가 될 수 있다는 것을 다시 한 번 깨닫게 되는 하루였다.

![20220509_201538](https://user-images.githubusercontent.com/76214070/167422766-236794db-5a34-4fb9-9a63-a9e1dcb5585d.jpg)
![20220509_201544](https://user-images.githubusercontent.com/76214070/167422828-2934d5bc-a333-429f-bd66-46a61df6430e.jpg)
![20220509_201553](https://user-images.githubusercontent.com/76214070/167422879-6feab215-f1b9-49a4-8f59-8f51c4207304.jpg)
![20220509_201555](https://user-images.githubusercontent.com/76214070/167422908-d22e77c2-805d-4a4a-a4b0-e6c278881d01.jpg)
![1](https://user-images.githubusercontent.com/76214070/173317196-0a917a6a-eade-420c-81bb-bf40503e453e.PNG)
