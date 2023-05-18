#include "Config.h"
#include "Output.h"

void Output::Key::setup(void)
{
    pinMode(PIN_CW, OUTPUT);
}

void Output::Key::loop(void)
{
}

void Output::Key::base(int speed)
{
    digitalWrite(PIN_CW, HIGH);
    Led::on();
    Speaker::beep(speed);
    digitalWrite(PIN_CW, LOW);
    Led::off();
}

void Output::Key::dit(int speed)
{
    base(speed);
    delay(speed);
}

void Output::Key::dah(int speed)
{
    base(speed*3);
    delay(speed);
}
