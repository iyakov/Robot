// IRremote http://arcfn.com by Ken Shirriff
// В основе лежит библотека некого Кена
#include <IRremote.h>

// Определяем выходы для каждого цвета RGB лампочки
int red = 11;
int green = 10;
int blue = 9;

// Делаем магию
int RECV_PIN = 5;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
  Serial.begin(9600);  // Включаем "прослушку" между ПК и устройством
  irrecv.enableIRIn(); // Запускаем ИК датчик
}

void loop() 
{
  if (irrecv.decode(&results)) // Если получили ответ от ИК датчика
  {
    Serial.println(results.value, HEX); // Печатаем значение
    irrecv.resume(); // Командуем ждать следующего значение
    
	// В зависимости от кода сигнала зажигаем нужную лампочку
    if(results.value == 0xFF22DD)
    {
      setColor(55, 0, 0);
    }
    if(results.value == 0xFF02FD)
    {  
	  setColor(0, 55, 0);
    }
    if(results.value == 0xFF906F)
    {  
	  setColor(0, 0, 55);
    }
  }
}

// наша вспомогательная функция по работе с RGB лампочкой
void setColor(int r, int g, int b)
{
  analogWrite(red, 255 - r);   // цвета инвертируются, 
  analogWrite(green, 255 - g); // т.к. у нас RGB лампочка
  analogWrite(blue, 255 - b);  // с общим анодом
}
