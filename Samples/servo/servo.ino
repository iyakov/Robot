#include <Servo.h>
Servo s;
void setup()
{
  s.attach(5);
  s.write(0);
  delay(180*15);
}
void loop()
{
  for(int a=0; a<10; a++)
  {
    int x = random(0,180)
    s.write(x);
    delay(500);
  }
    delay(100000);
}
