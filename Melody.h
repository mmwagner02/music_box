#include "Note.h"
#ifndef MELODY_H
#define MELODY_H
class Melody {
  private:
    Note* notes;
    unsigned int count;
  public:
    Melody(Note*, const unsigned int);
    const unsigned int getCount();
    const Note getNote(const unsigned int);
};
#endif
