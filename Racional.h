#include "Real.h"
#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>
#include <string>
#include <sstream>
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

		string operator+ (Real*);
		string operator- (Real*);
		string operator* (Real*);
		string operator/ (Real*);

		friend ostream& operator<<(ostream& write,Racional& rd){
			stringstream text;
			text<<rd.getNumerador()<<" / "<<rd.getDenominador();
			return write<<text.str();
		}
};
#endif