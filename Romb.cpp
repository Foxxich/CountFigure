
#define _USE_MATH_DEFINES
#include <math.h>
#include "Romb.h"



Romb::Romb(double bok, double kat)
{
    if(bok <= 0) throw 114;

    if(kat >=180 || kat <= 0) throw 115;
    if(kat == 90) throw 102; //("Kat musi byc inny niz 90 st.");


        
    bok1 = bok2 = bok3 = bok4 = bok;
    this->kat = kat;
}


double Romb::obliczPole() 
{
    if(kat<90){
        return bok1 * bok1 * sin(kat*M_PI/180);
    }
    else {
        return bok1 * bok1 * sin((180-kat)*M_PI/180);
    }
}
