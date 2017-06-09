#include "Real.h"

#ifndef RADICAL_H
#define RADICAL_H

class Radical: public Real{
	private:
		double coeficinete;
		double indice;
		double radicando;
	public:
		Radical();
		Radical(double,double,double);
		double getCoeficiente();
		void setCoeficiente(double);

		double getIndice();
		void setIndice(double);

		double getRadicando();
		void setRadicando(double);
}