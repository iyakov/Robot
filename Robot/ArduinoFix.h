/////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////Add arduino function stub declarations here///////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////DO NOT FORGET TO ADD ' /DVSEDITOR '//////////////////////////////
//////Properites > Configuration Properties > C/C++ > Command Line > Additional Options//////
/////////////////////////////////////////////////////////////////////////////////////////////

#ifndef ARDUINOFIX2H
#define ARDUINOFIX2H

    #ifdef VSEDITOR

        #define INPUT 1
        #define OUTPUT 2
        #define HIGH 1
        #define LOW 2
        #define A0 100
        #define A1 101
        #define A2 102
        #define A3 103
        #define A4 104
        #define A5 105

        int main();
        void setup();
        void loop();

        void pinMode(int, int);
        void delay(int);
        void digitalWrite(int, int);
        int digitalRead(int);

    #else

        #include "Arduino.h"

    #endif

#endif
