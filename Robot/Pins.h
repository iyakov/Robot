#ifndef PINSH
#define PINSH

    #ifdef VSEDITOR

    #include "ArduinoFix.h"

    class pins
    {
    public:
        pins();

    private:
        int time;
        int modes[20];
        int values[20];

    public:
        void mode(int pin, int mode);
        void write(int pin, int value);
        int read(int pin);
        void delay(int ms);

    private:
        void tick();
    };

    class cannotWriteToReadOnlyPin{};
    class cannotReadFromWriteOnlyPin{};
    class pinModeNotSet{};

    #endif

#endif