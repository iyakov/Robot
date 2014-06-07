int pin0 = 11;  
int pin1 = 12;  
int pin2 = 13;  

void setup()  
{ 
  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
} 

int s = 0;
void loop()  
{ 
  //0-000-000
  //1-001-111
  //2-010-022
  //3-011-133
  //4-100-004
  //5-101-115
  //6-110-026
  //7-111-137
  s++;
  int x0 = s % 2 > 0;
  int x1 = s % 4 > 1;
  int x2 = s % 8 > 3;
  digitalWrite(pin0, x0); 
  digitalWrite(pin1, x1); 
  digitalWrite(pin2, x2); 
  delay(500);                            
}

