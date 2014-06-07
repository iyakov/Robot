//// ранние объявления функций
//void closeCCW();
//void closeCW();
//void openCCW();
//void openCW();
//
//const int pnp1 = 13;
//const int pnp2 = 12;
//const int npn1 = 10;
//const int npn2 = 8;
//
//void setup()
//{
//  // устанавливаем 4 выхода для контроля моста
//  pinMode(pnp1, OUTPUT);
//  pinMode(pnp2, OUTPUT);
//  pinMode(npn1, OUTPUT);
//  pinMode(npn2, OUTPUT);
//  
//  // закрываем все транзисторы, чтобы ничего не сжечь
//  closeCCW();
//  closeCW();
//  delay(2000);
//}
//
//void loop()
//{
//  // вращаем против часовой стрелки
//  openCCW();
//  delay(2000);
//  closeCCW();
//  delay(2000);
//  
//  // вращаем по часовой стрелке
//  openCW();
//  delay(2000);
//  closeCW();
//  delay(2000);
//}
//
//// открываем 1 и 3 транзисторы
//void openCCW()
//{
//  digitalWrite(pnp1, LOW);
//  digitalWrite(pnp2, LOW);
//}
//// закрываем
//void closeCCW()
//{
//  digitalWrite(pnp1, HIGH);
//  digitalWrite(pnp2, HIGH);
//}
//
//// открываем 2 и 4 транзисторы
//void openCW()
//{
//  digitalWrite(npn1, HIGH);
//  digitalWrite(npn2, HIGH);
//}
//// закрваем
//void closeCW()
//{
//  digitalWrite(npn1, LOW);
//  digitalWrite(npn2, LOW);
//}
