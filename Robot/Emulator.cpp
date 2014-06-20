#ifdef VSEDITOR

#include "Emulator.h"
#include "Pins.h"
#include "ArduinoFix.h"

class pins pins;

int main()
{
    setup();
    for (int x = 0; x < 100; x++)
    {
        loop();
        delay(99);
    }
}

void pinMode(int pin, int mode)
{
    if (mode != OUTPUT && mode != INPUT)
    {
        throw invalidPinMode();
    }
    if (pin >= 0 && pin <= 13)
    {
        pins.mode(pin, mode);
    }
    else if (pin >= A0 && pin <= A5)
    {
        pins.mode(14 + (A0 - pin), mode);
    }
    else 
    {
        throw invalidPinNumber();
    }
}

void digitalWrite(int pin, int value)
{
    if (value != HIGH && value != LOW)
    {
        throw invalidValue();
    }
    if (pin >= 0 && pin <= 13)
    {
        pins.write(pin, value);
    }
    else if (pin >= A0 && pin <= A5)
    {
        pins.write(14 + (A0 - pin), value);
    }
    else
    {
        throw invalidPinNumber();
    }
}

void delay(int ms)
{
    if (ms < 0)
    {
        throw invalidDelay();
    }
}

#endif
