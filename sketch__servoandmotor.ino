#include <Servo8Bit.h>
#include <L298N.h>
int pin_servo = 3;
const unsigned int IN1 = 7;
const unsigned int IN2 = 8;
const unsigned int EN = 9;

Servo8Bit servo;
L298N motor(EN, IN1, IN2);
int posserv = 0;
int vpot = 0;
int joy_x = 19;
int joy_y = 18;
int vmot = 0;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(joy_x,INPUT);
  pinMode(joy_y,INPUT);
  servo.attach(pin_servo);
  motor.setSpeed(vmot);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*int valservo = analogRead(joy_y);
  int valm = analogRead(joy_x);
  posserv = map (valservo, 0, 1023, 5, 174);
  servo.write(posserv);
  vpot = abs(508-valm);
  vmot = map (vpot, 0, 508, 0, 255);
  Serial.println("vmot" + (String)vmot);
  motor.setSpeed(vmot);
  if (valm < 505) {motor.forward();}
  else if (valm > 510) {motor.forward();}
  else {motor.stop();}
  delay(20);*/
  motor.setSpeed(200);
  motor.forward();
  delay(3000);
  motor.stop();
  delay(3000);
  motor.backward();
  delay(3000);
  
}
