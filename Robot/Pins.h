#ifndef PINSH
#define PINSH

    #ifdef VSEDITOR

    #include "ArduinoFix.h"

    class pins
    {
    private:
        int modes[20];
        int values[20];
    public:
        void mode(int pin, int mode);
        void write(int pin, int value);
        int read(int pin);
    };

    class cannotWriteToReadOnlyPin{};
    class cannotReadFromWriteOnlyPin{};

    #endif

#endif