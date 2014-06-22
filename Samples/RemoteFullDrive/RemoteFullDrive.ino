#include <IRremote.h>

const int RECV_PIN = 5;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
	pinMode(13,OUTPUT);
	pinMode(12,OUTPUT);
	pinMode(11,OUTPUT);
	pinMode(10,OUTPUT);
	pinMode(9,OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(6,OUTPUT);
	Serial.begin(9600); 
	irrecv.enableIRIn();
}

void loop()
{
	if (irrecv.decode(&results)) 
	{
		Serial.println(results.value, HEX);
		irrecv.resume(); 
		
		if(results.value == 0x3D9AE3F7
		|| results.value == 0xFF18E7)
		{
                        Serial.println("forward");
			forward();
		}
		if(results.value == 0x449E79F
		|| results.value == 0xFF5AA5)
		{  
                        Serial.println("right");
			right();
		}
		if(results.value == 0x1BC0157B
		|| results.value == 0xFF4AB5)
		{  
                        Serial.println("backward");
			backward();
		}
		if(results.value == 0x8C22657B
		|| results.value == 0xFF10EF)
		{  
                        Serial.println("left");
			left();
		}
		if(results.value == 0x3
		|| results.value == 0xFF38C7)
		{  
                        Serial.println("stop");
			stop();
		}
		if(results.value == 0x2
		|| results.value == 0xFF7A85)
		{  
                        Serial.println("rot right");
			rotareRight();
		}
		if(results.value == 0x1
		|| results.value == 0xFF30CF)
		{  
                        Serial.println("rot left");
			rotateLeft();
		}
	}
}

void low(int x) { digitalWrite(x, LOW); }
void high(int x) { digitalWrite(x, HIGH); }

void forward()
{
	high(13);
	high(12);
	low(11);
	low(10);
	
	high(9);
	high(8);
	low(7);
	low(6);
}
void backward()
{
	low(13);
	low(12);
	high(11);
	high(10);
	
	low(9);
	low(8);
	high(7);
	high(6);
}
void right()
{
	high(13);
	high(12);
	low(11);
	low(10);
}
void left()
{
	high(9);
	high(8);
	low(7);
	low(6);
}
void rotareRight()
{
	high(13);
	high(12);
	low(11);
	low(10);
	
	low(9);
	low(8);
	high(7);
	high(6);
}
void rotateLeft()
{
	low(13);
	low(12);
	high(11);
	high(10);
	
	high(9);
	high(8);
	low(7);
	low(6);
}
void stop()
{
	low(13);
	low(12);
	low(11);
	low(10);
	
	low(9);
	low(8);
	low(7);
	low(6);
}
