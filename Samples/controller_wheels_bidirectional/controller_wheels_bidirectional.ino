// ранние объявления функций
void closeCCW();
void closeCW();
void openCCW();
void openCW();
void closeRightCCW();
void closeRightCW();
void openRightCCW();
void openRightCW();

const int sleep = 500;

const int pnp1 = 13;
const int pnp2 = 12;
const int npn1 = 10;
const int npn2 = 8;

const int pnp3 = 7;
const int pnp4 = 6;
const int npn3 = 3;
const int npn4 = 2;

void closeAll()
{ 
  closeCCW();
  closeCW();
  closeRightCCW();
  closeRightCW();
}

void setup()
{
  // устанавливаем 4 выхода для контроля моста левые
  pinMode(pnp1, OUTPUT);
  pinMode(pnp2, OUTPUT);
  pinMode(npn1, OUTPUT);
  pinMode(npn2, OUTPUT);
  
  // устанавливаем 4 выхода для контроля моста правые
  pinMode(pnp3, OUTPUT);
  pinMode(pnp4, OUTPUT);
  pinMode(npn3, OUTPUT);
  pinMode(npn4, OUTPUT);
  
  // закрываем все транзисторы, чтобы ничего не сжечь
  closeAll();
  delay(10000);
}

void loop()
{
  openCW();
  openRightCW();
  delay(5000);
  openCCW();
  openRightCCW();
  delay(5000);
}

// открываем 1 и 3 транзисторы
void openCCW()
{
  digitalWrite(pnp1, LOW);
  digitalWrite(pnp2, LOW);
}
// закрываем
void closeCCW()
{
  digitalWrite(pnp1, HIGH);
  digitalWrite(pnp2, HIGH);
}

// открываем 2 и 4 транзисторы
void openCW()
{
  digitalWrite(npn1, HIGH);
  digitalWrite(npn2, HIGH);
}
// закрваем
void closeCW()
{
  digitalWrite(npn1, LOW);
  digitalWrite(npn2, LOW);
}

// открываем 1 и 3 транзисторы правые
void openRightCCW()
{
  digitalWrite(pnp3, LOW);
  digitalWrite(pnp4, LOW);
}
// закрываем
void closeRightCCW()
{
  digitalWrite(pnp3, HIGH);
  digitalWrite(pnp4, HIGH);
}

// открываем 2 и 4 транзисторы правые
void openRightCW()
{
  digitalWrite(npn3, HIGH);
  digitalWrite(npn4, HIGH);
}
// закрваем
void closeRightCW()
{
  digitalWrite(npn3, LOW);
  digitalWrite(npn4, LOW);
}
