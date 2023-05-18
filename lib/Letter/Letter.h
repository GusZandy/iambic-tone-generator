#ifndef LETTER_H
#define LETTER_H

#include <Arduino.h>
#include "Output.h"

void spaceLetter(int speed) { delay(speed*2); };
void spaceWord(int speed) { delay(speed*6); };

void dit(int speed) { Output::Key::dit(speed); };
void dah(int speed) { Output::Key::dah(speed); };

void a(int speed) { dit(speed); dah(speed); spaceLetter(speed); };
void b(int speed) { dah(speed); dit(speed); dit(speed); dit(speed); spaceLetter(speed); };
void c(int speed) { dah(speed); dit(speed); dah(speed); dit(speed); spaceLetter(speed); };
void d(int speed) { dah(speed); dit(speed); dit(speed); spaceLetter(speed); };
void e(int speed) { dit(speed); spaceLetter(speed); };
void f(int speed) { dit(speed); dit(speed); dah(speed); dit(speed); spaceLetter(speed); };
void g(int speed) { dah(speed); dah(speed); dit(speed); spaceLetter(speed); };
void h(int speed) { dit(speed); dit(speed); dit(speed); dit(speed); spaceLetter(speed); };
void i(int speed) { dit(speed); dit(speed); spaceLetter(speed); };
void j(int speed) { dit(speed); dah(speed); dah(speed); dah(speed); spaceLetter(speed); };
void k(int speed) { dah(speed); dit(speed); dah(speed); spaceLetter(speed); };
void l(int speed) { dit(speed); dah(speed); dit(speed); dit(speed); spaceLetter(speed); };
void m(int speed) { dah(speed); dah(speed); spaceLetter(speed); };
void n(int speed) { dah(speed); dit(speed); spaceLetter(speed); };
void o(int speed) { dah(speed); dah(speed); dah(speed); spaceLetter(speed); };
void p(int speed) { dit(speed); dah(speed); dah(speed); dit(speed); spaceLetter(speed); };
void q(int speed) { dah(speed); dah(speed); dit(speed); dah(speed); spaceLetter(speed); };
void r(int speed) { dit(speed); dah(speed); dit(speed); spaceLetter(speed); };
void s(int speed) { dit(speed); dit(speed); dit(speed); spaceLetter(speed); };
void t(int speed) { dah(speed); spaceLetter(speed); };
void u(int speed) { dit(speed); dit(speed); dah(speed); spaceLetter(speed); };
void v(int speed) { dit(speed); dit(speed); dit(speed); dah(speed); spaceLetter(speed); };
void w(int speed) { dit(speed); dah(speed); dah(speed); spaceLetter(speed); };
void x(int speed) { dah(speed); dit(speed); dit(speed); dah(speed); spaceLetter(speed); };
void y(int speed) { dah(speed); dit(speed); dah(speed); dah(speed); spaceLetter(speed); };
void z(int speed) { dah(speed); dah(speed); dit(speed); dit(speed); spaceLetter(speed); };

void zero(int speed) { dah(speed); dah(speed); dah(speed); dah(speed); dah(speed); spaceLetter(speed); };
void one(int speed) { dit(speed); dah(speed); dah(speed); dah(speed); dah(speed); spaceLetter(speed); };
void two(int speed) { dit(speed); dit(speed); dah(speed); dah(speed); dah(speed); spaceLetter(speed); };
void three(int speed) { dit(speed); dit(speed); dit(speed); dah(speed); dah(speed); spaceLetter(speed); };
void four(int speed) { dit(speed); dit(speed); dit(speed); dit(speed); dah(speed); spaceLetter(speed); };
void five(int speed) { dit(speed); dit(speed); dit(speed); dit(speed); dit(speed); spaceLetter(speed); };
void six(int speed) { dah(speed); dit(speed); dit(speed); dit(speed); dit(speed); spaceLetter(speed); };
void seven(int speed) { dah(speed); dah(speed); dit(speed); dit(speed); dit(speed); spaceLetter(speed); };
void eight(int speed) { dah(speed); dah(speed); dah(speed); dit(speed); dit(speed); spaceLetter(speed); };
void nine(int speed) { dah(speed); dah(speed); dah(speed); dah(speed); dit(speed); spaceLetter(speed); };


#endif