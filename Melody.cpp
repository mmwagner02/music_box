#include "Melody.h"
#ifndef MELODY_CPP
#define MELODY_CPP
Melody::Melody(Note* notes, const unsigned int count) {
  this->count = count;
  this->notes = notes;
}
const unsigned int Melody::getCount() {
  return count;
}
const Note Melody::getNote(const unsigned int idx) {
  if (idx < count) return notes[idx];
}
#endif
