/*
  Melody
 
 Plays a melody 
 
 circuit:
 * 8-ohm speaker on digital pin 8
 
 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe 

This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/Tone
 
 */
 #include "pitches.h"

// notes in the melody:
int melody[] = {
  //NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 
  //0, NOTE_B3, NOTE_C4,  0, 0, 
  NOTE_B5, 0, NOTE_AS5, 0, NOTE_G5, 0, NOTE_C6, 0, NOTE_C6, 0,
  NOTE_B5, 0, NOTE_AS5, 0, NOTE_G5, 0, NOTE_C6, 0, NOTE_C6, 0,
  NOTE_B5, 0, NOTE_AS5, 0, NOTE_G5, 0, NOTE_C6, 0, NOTE_FS5,0, 
  NOTE_C6, 0, NOTE_F5, 0, NOTE_CS6, 0,NOTE_CS6, 0,
 0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8,16, 8,16, 8,16, 4,16, 4,8,
  8,16, 8,16, 8,16, 4,16, 4,8,
  8,16, 8,16, 8,16, 4,16, 8,16, 4,16, 8,16, 4,16, 4,8,
  4,4,4,4,4,4,4,4,4,4 };
  //3,6,9,10
int leds[] = {3,6,9,3,3, 6,3,3,19,3, 9,3,3,3,10};
void setup() {
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(3, OUTPUT);
   delay(3000);
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 19*2+1; thisNote++) {
    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(11, melody[thisNote], noteDuration);
    
    analogWrite(leds[thisNote%15],thisNote%255);
    
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(11);
  }
}

void loop() {
  // no need to repeat the melody.
}