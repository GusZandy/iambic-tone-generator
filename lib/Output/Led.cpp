#include "Config.h"
#include "Output.h"

void Output::Led::setup(void)
{
    pinMode(PIN_LED, OUTPUT);
}

void Output::Led::loop(void)
{

}
