#pragma once
#include "Czworokat.h"

class Kwadrat : public Czworokat
{
	public:
		Kwadrat(double bok);
		double obliczPole() override;
};
