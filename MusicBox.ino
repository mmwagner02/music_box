#include "OdeToJoy.h"

const int SpeakerPin = 5;

Melody melody = OdeToJoy;
unsigned int count = melody.getCount(); 
void setup() {
  pinMode(SpeakerPin, OUTPUT);
//  Serial.begin(9600);
//  Serial.println (count);
  delay(1000);
  play();
}

void loop() {
  delay(2000);
}

void play() {
  noTone(SpeakerPin);
  for (unsigned int i = 0; i < count; i++) {
    Note note = melody.getNote(i);
    Pitch pitch = note.getPitch();
    if (pitch != NOTE_REST) tone(SpeakerPin, pitch);
    delay(note.getDuration());
    noTone(SpeakerPin);
  }
}
