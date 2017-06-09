#include "Real.h"
#ifndef RACIONAL_H
#define RACIONAL_H
using namespace std;

class Racional : public Real{
	private:
		int numerador;
		int denominador;
	public:
		Racional(int,int);
		Racional();
		int getNumerador();
		void setNumerador(int); 

		int getDenominador();
		void setDenominador(int);

		Real* operator+ (Real*);
		Real* operator- (Real*);
		Real* operator* (Real*);
		Real* operator/ (Real*);
};
#endif;