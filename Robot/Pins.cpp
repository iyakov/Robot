#ifdef VSEDITOR

#include "Pins.h"
#include "ArduinoFix.h"

void pins::mode(int pin, int mode)
{
    pins::modes[pin] = mode;
}

void pins::write(int pin, int value)
{
    if (pins::modes[pin] == INPUT)
    {
        throw cannotWriteToReadOnlyPin();
    }
    pins::values[pin] = value;
}

int pins::read(int pin)
{
    if (pins::modes[pin] == OUTPUT)
    {
        throw cannotReadFromWriteOnlyPin();
    }
    return pins::values[pin];
}

#endif