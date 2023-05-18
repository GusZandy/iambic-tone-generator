#ifndef INPUT_H
#define INPUT_H

#include <Arduino.h>
#include "Config.h"

class Input
{
private:
    /* data */

public:
    static void setup(void);
    static void loop(void);

    class Button;
    class Sensor;
};

class Input::Button
{
private:
    static bool ditPressed;
    static bool dahPressed;
    static bool mem1Pressed;
    static bool mem2Pressed;
    static bool mem3Pressed;
    static bool mem4Pressed;

public:
    static void setup(void);
    static void loop(void);

    static bool getPressedDit(void) { return ditPressed; };
    static bool getPressedDah(void) { return dahPressed; };
    static bool getPressedMem1(void) { return mem1Pressed; };
    static bool getPressedMem2(void) { return mem2Pressed; };
    static bool getPressedMem3(void) { return mem3Pressed; };
    static bool getPressedMem4(void) { return mem4Pressed; };
};

class Input::Sensor
{
private:
    static int speed;
public:
    static void setup(void);
    static void loop(void);

    static int getSpeed(void) { return speed; };
};

#endif