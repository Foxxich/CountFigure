
#include "Prostokat.h"

Prostokat::Prostokat(double bok1, double bok2)
{
    if(bok1 <= 0 || bok2 <=0) throw 114;
    if(bok1 == bok2) throw 101; //("Boki musza byc rozne!")
    this->bok1 = this->bok3 = bok1;
    this->bok2 = this->bok4 = bok2;

    this->kat = 90;
}
    
double Prostokat::obliczPole() {
    return bok1*bok2;
}
