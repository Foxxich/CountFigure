#pragma once
#include "Figura.h"

class Kolo : public Figura
{
	private:
		double promien;

	public:
		Kolo(double promien);

		double obliczPole() override;
		double obliczObwod() override;
		
};
