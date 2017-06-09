#include "Real.h"
#ifndef RACIONAL_H
#define RACIONAL_H
using namespace std;

class Racional: public Real{
	private:
		double numerador;
		double denominador;
	public:
		Racional(double,double);
		Racional();
		double getNumerador(double);
		void setNumerador(); 

		double getDenominador();
		void setDenominador();

};

#endif;