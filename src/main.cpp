#include <Arduino.h>
#include "Config.h"
#include "main.h"
#include "Input.h"
#include "Output.h"
#include "Letter.h"

void setup() {
  Input::setup();
  Output::setup();

  delay(1000);
}

void loop() {
  Input::loop();
  Output::loop();

  speed = Input::Sensor::getSpeed();

  if(Input::Button::getPressedDit()) {
    Output::Key::dit(speed);
  }
  if(Input::Button::getPressedDah()) {
    Output::Key::dah(speed);
  }
  if (Input::Button::getPressedMem1())
  {
    mem1(speed);
  }
}

void mem1(int speed) {
  // CQ SES 8A05SILA K
  c(speed);
  q(speed);
  spaceWord(speed);

  s(speed);
  e(speed);
  s(speed);
  spaceWord(speed);

  eight(speed);
  a(speed);
  zero(speed);
  five(speed);
  s(speed);
  i(speed);
  l(speed);
  a(speed);
  spaceWord(speed);

  k(speed);
  spaceWord(speed);
}