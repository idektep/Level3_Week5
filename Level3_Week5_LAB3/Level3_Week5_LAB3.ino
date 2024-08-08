#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver idektep = Adafruit_PWMServoDriver(0x40);
#define SERVOMIN  100
#define SERVOMAX  600
//////////////////////////////////////
#define servo1 15

//////////////////////////////////////
int S1 = 14;
int Val1 = 0;
int pos1 = 0;

///////////////////////////////////////

int angleToPulse(int ang) {
  int pulse = map(ang, 0, 180, SERVOMIN, SERVOMAX);
  return pulse;
}

void setup() {
  Serial.begin(115200);
  idektep.begin();
  idektep.setPWMFreq(60);
  delay(100);

  pinMode(S1, _____);
}

void loop() {
  Val1 = digitalRead(____);
  if ( Val1 == 1)
  {
    pos1 ++;
    delay(100);
    idektep.setPWM(servo1, 0, angleToPulse(___) );
    Serial.print(" Position reading =  "); 
    Serial.println(pos1);
  }
  else if (Val1 == 0 && pos1 == 180){
    Serial.println(" position not reading ");
 }
  else if (Val1 == 0 && pos1 > 180){
    Serial.println(" RESET Position ");
    pos1 = 0;
    idektep.setPWM(servo1, 0, angleToPulse(___) );
    Serial.print(" Position reading =  ");
    Serial.println(pos1);
 }
}

