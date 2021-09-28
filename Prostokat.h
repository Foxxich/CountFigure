#pragma once
#include "Czworokat.h"

class Prostokat: public Czworokat
{
	public:
		Prostokat(double bok1, double bok2);
		double obliczPole() override;
};
