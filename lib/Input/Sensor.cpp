#include "Config.h"
#include "Input.h"

int Input::Sensor::speed = 700;

void Input::Sensor::setup(void)
{
}

void Input::Sensor::loop(void)
{
    speed = map(analogRead(PIN_SPEED), 0, 1023, 350, 10);
}