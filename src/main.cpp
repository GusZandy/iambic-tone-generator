#include <Arduino.h>
#include "Config.h"
#include "main.h"
#include "Input.h"
#include "Output.h"
#include "Letter.h"

void setup() {
  Input::setup();
  Output::setup();

  Serial.begin(9600);

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
    encode(speed,  "CQ SES 8A05SILA 8A05SILA K");
  }
  if (Input::Button::getPressedMem2())
  {
    encode(speed,  "5NN TU");
  }
  if (Input::Button::getPressedMem3())
  {
    encode(speed,  "73 TU");
  }
  if (Input::Button::getPressedMem4())
  {
    // encode(speed,  "CQ SES 8A05SILA 8A05SILA K");
  }
}

void encode(int speed, const char* data) {
  for (size_t i = 0; i < strlen(data); i++)
  {
    if (data[i] == ' ')
    {
      spaceWord(speed);
    } else {
      letter(speed, data[i]);
    }
  }
  
  spaceWord(speed);
}