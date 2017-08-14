#include <Servo.h>
#include <Adafruit_TiCoServo.h>

//Servo servo;        //Servoオブジェクトを作成
Adafruit_TiCoServo servo;

void setup() 
{ 
  servo.attach(9);  //D9ピンをサーボの信号線として設定
  servo.write(0); // サーボの角度を0°に設定
  Serial.begin(9600);

} 
 
void loop() 
{ 
  slowDown(360);
  slowUp(0);
}


void slowDown(int pos){
  Serial.write(1);
  delay(50);
  Serial.write(0);
  while(pos>0){
    servo.write(pos);
    delay(15);
    pos--;
  }
  Serial.write(1);
  delay(3000);
}

void slowUp(int pos){
  Serial.write(1);
  delay(50);
  Serial.write(0);
  while(pos<360){
    servo.write(pos);
    delay(15);  
    pos++;
  }
  //Serial.write(1);
  delay(5000); 
}

