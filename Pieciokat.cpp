
#define _USE_MATH_DEFINES
#include <math.h>
#include "Pieciokat.h"


Pieciokat::Pieciokat(double bok)
{
    if(bok <= 0) throw 114;
    this->bok = bok;
}

double Pieciokat::obliczObwod() {
    return 5*bok;
}

double Pieciokat::obliczPole() {
    return (1.25)*(bok*bok)*(cos(36*M_PI/180)/(sin(36*M_PI/180)));
}
