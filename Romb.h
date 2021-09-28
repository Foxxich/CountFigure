#pragma once
#include "Czworokat.h"

class Romb : public Czworokat
{
	public:
		Romb(double bok, double kat);
		double obliczPole() override;
};

