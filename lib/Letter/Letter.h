#ifndef LETTER_H
#define LETTER_H

#include <Arduino.h>
#include "Output.h"

void spaceLetter(int speed) { delay(speed * 4); };
void spaceWord(int speed) { delay(speed * 6); };

void dit(int speed) { Output::Key::dit(speed); };
void dah(int speed) { Output::Key::dah(speed); };

void a(int speed)
{
    dit(speed);
    dah(speed);
    spaceLetter(speed);
};
void b(int speed)
{
    dah(speed);
    dit(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void c(int speed)
{
    dah(speed);
    dit(speed);
    dah(speed);
    dit(speed);
    spaceLetter(speed);
};
void d(int speed)
{
    dah(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void e(int speed)
{
    dit(speed);
    spaceLetter(speed);
};
void f(int speed)
{
    dit(speed);
    dit(speed);
    dah(speed);
    dit(speed);
    spaceLetter(speed);
};
void g(int speed)
{
    dah(speed);
    dah(speed);
    dit(speed);
    spaceLetter(speed);
};
void h(int speed)
{
    dit(speed);
    dit(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void i(int speed)
{
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void j(int speed)
{
    dit(speed);
    dah(speed);
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void k(int speed)
{
    dah(speed);
    dit(speed);
    dah(speed);
    spaceLetter(speed);
};
void l(int speed)
{
    dit(speed);
    dah(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void m(int speed)
{
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void n(int speed)
{
    dah(speed);
    dit(speed);
    spaceLetter(speed);
};
void o(int speed)
{
    dah(speed);
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void p(int speed)
{
    dit(speed);
    dah(speed);
    dah(speed);
    dit(speed);
    spaceLetter(speed);
};
void q(int speed)
{
    dah(speed);
    dah(speed);
    dit(speed);
    dah(speed);
    spaceLetter(speed);
};
void r(int speed)
{
    dit(speed);
    dah(speed);
    dit(speed);
    spaceLetter(speed);
};
void s(int speed)
{
    dit(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void t(int speed)
{
    dah(speed);
    spaceLetter(speed);
};
void u(int speed)
{
    dit(speed);
    dit(speed);
    dah(speed);
    spaceLetter(speed);
};
void v(int speed)
{
    dit(speed);
    dit(speed);
    dit(speed);
    dah(speed);
    spaceLetter(speed);
};
void w(int speed)
{
    dit(speed);
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void x(int speed)
{
    dah(speed);
    dit(speed);
    dit(speed);
    dah(speed);
    spaceLetter(speed);
};
void y(int speed)
{
    dah(speed);
    dit(speed);
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void z(int speed)
{
    dah(speed);
    dah(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};

void zero(int speed)
{
    dah(speed);
    dah(speed);
    dah(speed);
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void one(int speed)
{
    dit(speed);
    dah(speed);
    dah(speed);
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void two(int speed)
{
    dit(speed);
    dit(speed);
    dah(speed);
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void three(int speed)
{
    dit(speed);
    dit(speed);
    dit(speed);
    dah(speed);
    dah(speed);
    spaceLetter(speed);
};
void four(int speed)
{
    dit(speed);
    dit(speed);
    dit(speed);
    dit(speed);
    dah(speed);
    spaceLetter(speed);
};
void five(int speed)
{
    dit(speed);
    dit(speed);
    dit(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void six(int speed)
{
    dah(speed);
    dit(speed);
    dit(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void seven(int speed)
{
    dah(speed);
    dah(speed);
    dit(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void eight(int speed)
{
    dah(speed);
    dah(speed);
    dah(speed);
    dit(speed);
    dit(speed);
    spaceLetter(speed);
};
void nine(int speed)
{
    dah(speed);
    dah(speed);
    dah(speed);
    dah(speed);
    dit(speed);
    spaceLetter(speed);
};

void letter(int speed, char data)
{
    switch (data)
    {
        case 'A': a(speed); break;
        case 'B': b(speed); break;
        case 'C': c(speed); break;
        case 'D': d(speed); break;
        case 'E': e(speed); break;
        case 'F': f(speed); break;
        case 'G': g(speed); break;
        case 'H': h(speed); break;
        case 'I': i(speed); break;
        case 'J': j(speed); break;
        case 'K': k(speed); break;
        case 'L': l(speed); break;
        case 'M': m(speed); break;
        case 'N': n(speed); break;
        case 'O': o(speed); break;
        case 'P': p(speed); break;
        case 'Q': q(speed); break;
        case 'R': r(speed); break;
        case 'S': s(speed); break;
        case 'T': t(speed); break;
        case 'U': u(speed); break;
        case 'V': v(speed); break;
        case 'W': w(speed); break;
        case 'X': x(speed); break;
        case 'Y': y(speed); break;
        case 'Z': z(speed); break;
        
        case '0': zero(speed); break;
        case '1': one(speed); break;
        case '2': two(speed); break;
        case '3': three(speed); break;
        case '4': four(speed); break;
        case '5': five(speed); break;
        case '6': six(speed); break;
        case '7': seven(speed); break;
        case '8': eight(speed); break;
        case '9': nine(speed); break;

        default:
            break;
    }
}

#endif