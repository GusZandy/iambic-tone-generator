#include "Input.h"

void Input::setup(void)
{
    Input::Button::setup();
    Input::Sensor::setup();
}

void Input::loop(void)
{
     Input::Button::loop();
     Input::Sensor::loop();
}