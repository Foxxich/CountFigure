
#include <math.h>
#include "Szesciokat.h"

Szesciokat::Szesciokat(double bok)
{
    if(bok <= 0) throw 114;
    this->bok = bok;
}

double Szesciokat::obliczObwod() {
    return 6*bok;
}

double Szesciokat::obliczPole() {
    return 3*bok*bok*pow(3, 0.5)/2;
}