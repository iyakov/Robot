#ifndef PINSH
#define PINSH

#include "ArduinoFix.h"

class pins
{
private:
    int modes[20];
    int values[20];
public:
    void mode(int pin, int mode);
    void write(int pin, int value);
};

#endif