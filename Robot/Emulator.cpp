#include "Emulator.h"
#include "ArduinoFix.h"

#ifdef VSEDITOR

int pins[20];

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
        pins[pin] = mode;
    }
    else if (pin >= A0 && pin <= A5)
    {
        pins[14 + (A0 - pin)] = mode;
    }
    else 
    {
        throw invalidPinNumber();
    }
}

#endif
