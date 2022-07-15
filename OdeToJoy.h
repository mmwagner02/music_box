#include "Melody.h"
#include "Note.h"
#include "Pitches.h"
#ifndef ODETOJOY_H
#define ODETOJOY_H

#define extraHalf(X) (X * 3 / 2)

const uint16_t MEASURE = 2000; // two seconds per measure
const uint16_t HALF_NOTE = MEASURE / 2;
const uint16_t QUARTER_NOTE = MEASURE / 4;
const uint16_t EIGTH_NOTE = MEASURE / 8;


const Note G   = Note(NOTE_G5, QUARTER_NOTE);
const Note Gs  = Note(NOTE_G5, EIGTH_NOTE);
const Note Gll = Note(NOTE_G5, HALF_NOTE);
const Note A   = Note(NOTE_A5, QUARTER_NOTE);
const Note As  = Note(NOTE_A5, EIGTH_NOTE);
const Note Al  = Note(NOTE_A5, extraHalf(QUARTER_NOTE));
const Note All = Note(NOTE_A5, HALF_NOTE);
const Note B   = Note(NOTE_B5, QUARTER_NOTE);
const Note Bs  = Note(NOTE_B5, EIGTH_NOTE);
const Note Bl  = Note(NOTE_B5, extraHalf(QUARTER_NOTE));
const Note C   = Note(NOTE_C6, QUARTER_NOTE);
const Note Cs  = Note(NOTE_C6, EIGTH_NOTE);
const Note D   = Note(NOTE_D6, QUARTER_NOTE);
const Note Dll = Note(NOTE_D5, HALF_NOTE);
const Note QR  = Note(NOTE_REST, QUARTER_NOTE);


Note notes[] = { 
  B,B,C,D, D,C,B,A, G,G,A,B, Bl,As,All,
//  QR,
  B,B,C,D, D,C,B,A, G,G,A,B, Al,Gs,Gll,
//  QR,
  A,A,B,G, A,Bs,Cs,B,G, A,Bs,Cs,B,A, G,A,Dll,
//  QR,
  B,B,C,D, D,C,B,A, G,G,A,B, Al,Gs,Gll
};

const Melody OdeToJoy = Melody(notes, sizeof(notes)/sizeof(Note));
#endif
