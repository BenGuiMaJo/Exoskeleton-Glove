#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial xbee(10,11);

Servo thumb;
Servo index;
Servo middle;
Servo annular;
Servo pinky;

byte Start;
int anglethumb=0;
int angleindex=0;
int anglemiddle=0;
int angleannular=0;
int anglepinky=0;

void setup() {
  pinMode(9,INPUT);
  pinMode(8,OUTPUT);
  xbee.begin(9600);
  thumb.attach(11);
  index.attach(10);
  middle.attach(6);
  annular.attach(5);
  pinky.attach(3);
  }

void loop() {
  if(xbee.available()) {

    thumb.detach();
    index.detach();
    middle.detach();
    annular.detach();
    pinky.detach();
    Start = xbee.read();
    anglethumb = xbee.read();
    angleindex = xbee.read();
    anglemiddle = xbee.read();
    angleannular = xbee.read();
    anglepinky = xbee.read();

    
    if(Start == '<')  {
      thumb.attach(11);
      index.attach(10);
      middle.attach(6);
      annular.attach(5);
      pinky.attach(3);
      thumb.write(anglethumb);
      index.write(angleindex);
      middle.write(anglemiddle);
      annular.write(angleannular);
      pinky.write(anglepinky);  
    }
  }
  delay(30);

}
