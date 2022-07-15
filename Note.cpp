#include "Note.h"
#include "Pitches.h"
#ifndef NOTE_CPP
#define NOTE_CPP
Note::Note(Pitch _pitch, unsigned int _duration) {
  this->pitch = _pitch;
  this->duration = _duration;
}
const Pitch Note::getPitch() {
  return this->pitch;
}
const unsigned int Note::getDuration() {
  return this->duration;
}
#endif
