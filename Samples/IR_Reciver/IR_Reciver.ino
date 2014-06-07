#include <IRremote.h>

int RECV_PIN = 19;

int reversePin = 4;                 
int forwardPin = 5;                
int playPin = 6;                
int pausePin = 7;                

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(reversePin, OUTPUT);      // sets the digital pin as output
  pinMode(forwardPin, OUTPUT);      // sets the digital pin as output
  pinMode(playPin, OUTPUT);      // sets the digital pin as output
  pinMode(pausePin, OUTPUT);      // sets the digital pin as output
}

void loop() {
  if (irrecv.decode(&results)) {
    
    long int decCode = results.value;
    Serial.println(decCode);
    switch (results.value) {
      case 1431986946:
        Serial.println("Forward");
        digitalWrite(forwardPin, HIGH);   // sets the LED on
        break;
      case -11780576:
        Serial.println("Reverse");
        digitalWrite(reversePin, HIGH);   // sets the LED on
        break;
      case -873913272:
        Serial.println("Play");
        digitalWrite(playPin, HIGH);   // sets the LED on
        break;
      case -1025287420:
        Serial.println("Pause");
        digitalWrite(pausePin, HIGH);   // sets the LED on
        break;  
      case 1791365666:
        Serial.println("Stop");
        digitalWrite(forwardPin, LOW);   // sets the LED off
        digitalWrite(reversePin, LOW);   // sets the LED off
        digitalWrite(playPin, LOW);   // sets the LED off
        digitalWrite(pausePin, LOW);   // sets the LED off
        break;  
      default: 
        Serial.println("Waiting ...");
    }

    irrecv.resume(); // Receive the next value
  }
}

