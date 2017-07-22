#include <Servo.h> 
Servo servo;        //Servoオブジェクトを作成
 
void setup() 
{ 
  servo.attach(9);  //D9ピンをサーボの信号線として設定
  servo.write(0); // サーボの角度を0°に設定
} 
 
void loop() 
{ 
slowDown(360);
slowUp(0);
}
void slowDown(int pos){
  while(pos>0){
    servo.write(pos);
    delay(15); 
    pos--;
  }
    delay(3000); 
}
void slowUp(int pos){
  while(pos<360){
    servo.write(pos);
    delay(15);  
    pos++;
  }
  delay(5000); 
}

