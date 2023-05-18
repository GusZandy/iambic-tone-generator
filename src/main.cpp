#include <Arduino.h>
#include "Config.h"
#include "main.h"
#include "Input.h"
#include "Output.h"

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
}