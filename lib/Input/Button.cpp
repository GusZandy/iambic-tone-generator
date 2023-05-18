#include "Config.h"
#include "Input.h"

bool Input::Button::ditPressed = false;
bool Input::Button::dahPressed = false;
bool Input::Button::mem1Pressed = false;
bool Input::Button::mem2Pressed = false;
bool Input::Button::mem3Pressed = false;
bool Input::Button::mem4Pressed = false;

void Input::Button::setup(void)
{
    pinMode(PIN_DIT, INPUT_PULLUP);
    pinMode(PIN_DAH, INPUT_PULLUP);
    pinMode(PIN_MEM1, INPUT_PULLUP);
    pinMode(PIN_MEM2, INPUT_PULLUP);
    pinMode(PIN_MEM3, INPUT_PULLUP);
    pinMode(PIN_MEM4, INPUT_PULLUP);
}

void Input::Button::loop(void)
{
   ditPressed = !digitalRead(PIN_DIT);
   dahPressed = !digitalRead(PIN_DAH);
   mem1Pressed = !digitalRead(PIN_MEM1);
   mem2Pressed = !digitalRead(PIN_MEM2);
   mem3Pressed = !digitalRead(PIN_MEM3);
   mem4Pressed = !digitalRead(PIN_MEM4);
}
