#include "Config.h"
#include "Output.h"

void Output::Speaker::setup(void)
{
    pinMode(PIN_AUDIO, OUTPUT);
}

void Output::Speaker::loop(void)
{
}

void Output::Speaker::beep(int duration)
{
    tone(PIN_AUDIO, FREQ_AUDIO);
    for (int i = 0; i < (duration / 2); i++) // Beep loop
    {
        digitalWrite(PIN_AUDIO, HIGH);
        delay(1);
        digitalWrite(PIN_AUDIO, LOW);
        delay(1);
    }
    noTone(PIN_AUDIO);
}