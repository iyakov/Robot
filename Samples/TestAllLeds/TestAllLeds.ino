void setup()  
{ 
  for(int pin = 0; pin <= 13; pin++)
    pinMode(pin, OUTPUT);
  
  const int length = 255+255;
  int values[length];
  for(int value = 0; value <= 255; value += 1)
    values[value]=value;
  for(int value = 255; value >= 0; value -= 1)
    values[length-value]=value;
  
  for(int repeat = 0; repeat < 10; repeat++)
  {
    for(int pin = 0; pin <= 13; pin++)
    {
      for(int i = 0; i <= length; i++)
      {
        analogWrite(pin, values[i]);   
        delay(2);  
      }
    }  
  } 
}

void loop()  
{                         
}

