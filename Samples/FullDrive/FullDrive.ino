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
}

void loop()
{
	high(13);
	high(12);
	low(11);
	low(10);
	high(9);
	high(8);
	low(7);
	low(6);
	delay(3000);
	
	low(13);
	low(12);
	low(11);
	low(10);
	low(9);
	low(8);
	low(7);
	low(6);
	delay(3000);
	
	low(13);
	low(12);
	high(11);
	high(10);
	low(9);
	low(8);
	high(7);
	high(6);
	delay(3000);
	
	low(13);
	low(12);
	low(11);
	low(10);
	low(9);
	low(8);
	low(7);
	low(6);
	delay(3000);
}

void low(int x) { digitalWrite(x, LOW); }
void high(int x) { digitalWrite(x, HIGH); }