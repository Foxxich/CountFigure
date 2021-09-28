
#pragma once
#include "Figura.h"

class Pieciokat: public Figura
{
	private:
		double bok;
	public:
		Pieciokat(double bok);
		double obliczObwod() override;
		double obliczPole() override;
};


