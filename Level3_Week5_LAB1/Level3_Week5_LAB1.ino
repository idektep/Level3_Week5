#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver idektep = Adafruit_PWMServoDriver(0x40);
#define SERVOMIN  100
#define SERVOMAX  600
////////////////////////////////////////

#define servo1 0

/////////////////////////////////////////

int angleToPulse(int ang) {
  int pulse = map(ang, 0, 180, SERVOMIN, SERVOMAX);
  return pulse;
}

void setup() {
  Serial.begin(115200);
  idektep.begin();
  idektep.setPWMFreq(60);

  idektep.setPWM(servo1, 0, angleToPulse(180) );
  delay(1000);
  idektep.setPWM(servo1, 0, angleToPulse(0) );
  delay(1000);
}
void loop() {

}
