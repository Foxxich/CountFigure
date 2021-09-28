
#define _USE_MATH_DEFINES
#include <math.h>
#include "Kolo.h"



Kolo::Kolo(double promien)
{
    if(promien <= 0) throw 114;
    this->promien = promien;
}


    
double Kolo::obliczObwod() {
    
    return 2 * M_PI  * promien;
}

double Kolo::obliczPole() {
        
    return M_PI * promien * promien;
}

    
