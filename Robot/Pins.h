#ifndef PINSH
#define PINSH

    #ifdef VSEDITOR

    #include "ArduinoFix.h"

    class pins
    {
    private:
        int time;
        int modes[20];
        int values[20];

    public:
        pins();

        void mode(int pin, int mode);
        void write(int pin, int value);
        int read(int pin);
        void delay(int ms);
    };

    class cannotWriteToReadOnlyPin{};
    class cannotReadFromWriteOnlyPin{};
    class pinModeNotSet{};

    #endif

#endif