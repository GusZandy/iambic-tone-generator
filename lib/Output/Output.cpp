#include "Output.h"

void Output::setup(void)
{
    Output::Led::setup();
    Output::Key::setup();
    Output::Speaker::setup();
}

void Output::loop(void)
{
     Output::Led::loop();
     Output::Key::loop();
     Output::Speaker::loop();
}