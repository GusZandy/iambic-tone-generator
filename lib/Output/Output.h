#ifndef OUTPUT_H
#define OUTPUT_H

#include <Arduino.h>
#include "Config.h"

class Output
{
private:
    /* data */

public:
    static void setup(void);
    static void loop(void);

    class Led;
    class Key;
    class Speaker;
};

class Output::Led
{
private:

public:
    static void setup(void);
    static void loop(void);

    static void on(void) { digitalWrite(PIN_LED, HIGH); };
    static void off(void) { digitalWrite(PIN_LED, LOW); };
};

class Output::Key
{
private:


public:
    static void setup(void);
    static void loop(void);

    static void base(int speed);
    static void dit(int speed);
    static void dah(int speed);
};

class Output::Speaker
{
private:


public:
    static void setup(void);
    static void loop(void);

    static void beep(int duration);
};

#endif