#include "Real.h"

#ifndef RADICAL_H
#define RADICAL_H

class Radical: public Real{
	private:
		int coeficinete;
		int indice;
		int radicando;
	public:
		Radical();
		Radical(int,int,int);
		int getCoeficiente();
		void setCoeficiente(int);

		int getIndice();
		void setIndice(int);

		int getRadicando();
		void setRadicando(int);
}:

#endif