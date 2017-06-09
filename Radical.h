#include "Real.h"

#ifndef RADICAL_H
#define RADICAL_H

class Radical: public Real{
	private:
		double coeficinete;
		double indice;
		double radicando;
	public:
		double getCoeficiente();
		void setCoeficiente();

		double getIndice();
		void setIndice();

		double getRadicando();
		void setRadicando();
}