#pragma once
#include "Figura.h"

class Czworokat : public Figura {

	protected: 
		double bok1, bok2, bok3, bok4, kat;

	virtual double obliczObwod() override;

};


	// public     		protected     	private

	// public: -> 		protected: 	-> private:

	// protected: -> 	protected: 	-> private:

	// private: -> 		private: 	-> private:

	

