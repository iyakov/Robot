// IRremote http://arcfn.com by Ken Shirriff
// В основе лежит библотека некого Кена
#include <IRremote.h>

// Определяем выходы для каждого цвета RGB лампочки
int rightWheel = 11;
int leftWheel = 10;

// Делаем магию
int RECV_PIN = 5;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  pinMode(rightWheel, OUTPUT);
  pinMode(leftWheel, OUTPUT);
  
  Serial.begin(9600);  // Включаем "прослушку" между ПК и устройством
  irrecv.enableIRIn(); // Запускаем ИК датчик
  
  digitalWrite(rightWheel, HIGH);
  digitalWrite(leftWheel, LOW);
}

void loop() 
{
    decode();
}
void forward()
{
  digitalWrite(rightWheel, HIGH);
  digitalWrite(leftWheel, LOW);
}
void backward()
{
  digitalWrite(rightWheel, LOW);
  digitalWrite(leftWheel, HIGH);
}

void right(){}
void left(){}

void decode()
{
    if (irrecv.decode(&results)) // Если получили ответ от ИК датчика
  {
    Serial.println(results.value, HEX); // Печатаем значение
    irrecv.resume(); // Командуем ждать следующего значение
    
	// В зависимости от кода сигнала зажигаем нужную лампочку
    if(results.value == 0x3D9AE3F7
    || results.value == 0xFF18E7)
    {
          forward();
    }
    if(results.value == 0x449E79F
    || results.value == 0xFF5AA5)
    {  
	  right();
    }
    if(results.value == 0x1BC0157B
    || results.value == 0xFF4AB5)
    {  
	  backward();
    }
    if(results.value == 0x8C22657B
    || results.value == 0xFF10EF)
    {  
	  left();
    }
  }
}

