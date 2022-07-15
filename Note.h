#include "Pitches.h"
#ifndef NOTE_H
#define NOTE_H
class Note {
  private:
    Pitch pitch;
    unsigned int duration;
  public:
    Note(unsigned int,unsigned int);
    const Pitch getPitch();
    const unsigned int getDuration();
};
#endif
