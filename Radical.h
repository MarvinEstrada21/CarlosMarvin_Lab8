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
		double getCoeficiente(double);
		void setCoeficiente(double);

		double getIndice(double);
		void setIndice();

		double getRadicando(double);
		void setRadicando();
}