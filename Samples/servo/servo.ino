#include <Servo.h>
Servo s;
void setup()
{
  s.attach(5);
  s.write(0);
  delay(1000);
  s.write(180);
  delay(1000);
}
void loop()
{
  
}
