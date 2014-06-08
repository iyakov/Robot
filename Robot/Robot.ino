/////////////////////////////////////////////////////////////////////////////////////////////
////////////////DO NOT FORGET TO NAME INO FILE THE SAME AS ITS PARENT FOLDER/////////////////
///////////////AND MAKE INO FILE BE TREATED AS CPP FILE TO HAVE INTELLI SENSE////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////Add ArduinoFix.h include into all files that use Arduino functions//////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include "ArduinoFix.h"
#include "Morse.h"

Morse morse(13);

void setup()
{
}

void loop()
{
    morse.dot(); morse.dot(); morse.dot();
    morse.dash(); morse.dash(); morse.dash();
    morse.dot(); morse.dot(); morse.dot();
    delay(3000);
}