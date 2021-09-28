#pragma once
#include "Figura.h"


class Szesciokat: public Figura
{
	private:
		double bok;
	public:
		Szesciokat(double bok);
		double obliczObwod() override;
		double obliczPole() override;
	
};

