
#include "Kwadrat.h"

Kwadrat::Kwadrat(double bok)
{
    if(bok <= 0) throw 114;
    bok1 = bok2 = bok3 = bok4 = bok;

    this->kat = 90;
}


    
double Kwadrat::obliczPole() {
    return bok1 * bok1;
}
