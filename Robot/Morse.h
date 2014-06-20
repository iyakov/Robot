/*
Morse.h - Library for flashing Morse code.
Created by David A. Mellis, November 2, 2007.
Released into the public domain.
*/
#ifndef MORSEH
#define MORSEH

#include "ArduinoFix.h"

class Morse
{
public:
    Morse();
    Morse(int pin);
    void dot();
    void dash();
private:
    int _pin;
};

#endif