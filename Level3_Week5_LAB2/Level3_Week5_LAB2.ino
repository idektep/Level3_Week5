#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver idektep = Adafruit_PWMServoDriver(0x40);
#define SERVOMIN  100
#define SERVOMAX  600
/////////////////////////////////////////
#define servo1 0

//////////////////////////////////////////
int Volume = 14;
int pos1 = 0;
int Val1 = 0;
///////////////////////////////////////////

int angleToPulse(int ang) {
  int pulse = map(ang, 0, 180, SERVOMIN, SERVOMAX);
  return pulse;
}

void setup() {
  Serial.begin(115200);
  idektep.begin();
  idektep.setPWMFreq(60);
  delay(100);

}

void loop() {
  pos1 = analogRead(____);
  Val1 = map(pos1, 0, 4095, 0, 180);
  idektep.setPWM(___, 0, angleToPulse(___) );

  Serial.println(Val1);
}
