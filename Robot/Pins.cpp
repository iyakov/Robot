#ifdef VSEDITOR

#include "Pins.h"
#include "ArduinoFix.h"

pins::pins()
{
    pins::time = 0;
    for (int i = 0; i < 20; i++) pins::modes[i] = PIN_MODE_NOT_SET;
    for (int i = 0; i < 20; i++) pins::values[i] = LOW;
}

void pins::mode(int pin, int mode)
{
    pins::modes[pin] = mode;
}

void pins::write(int pin, int value)
{
    if (pins::modes[pin] == PIN_MODE_NOT_SET)
    {
        throw pinModeNotSet();
    }
    else if (pins::modes[pin] == INPUT)
    {
        throw cannotWriteToReadOnlyPin();
    }
    pins::values[pin] = value;
}

int pins::read(int pin)
{
    if (pins::modes[pin] == PIN_MODE_NOT_SET)
    {
        throw pinModeNotSet();
    }
    else if (pins::modes[pin] == OUTPUT)
    {
        throw cannotReadFromWriteOnlyPin();
    }
    return pins::values[pin];
}

void pins::delay(int ms)
{

}

#endif