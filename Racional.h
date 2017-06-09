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
		double getNumerador();
		void setNumerador(double); 

		double getDenominador();
		void setDenominador(double);

};

#endif;