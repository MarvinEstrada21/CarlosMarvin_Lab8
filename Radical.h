#include "Real.h"
#include <iostream>
#include <string>
#include <sstream>
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

		string operator+ (Real*);
		string operator- (Real*);
		string operator* (Real*);
		string operator/ (Real*);

		friend ostream& operator<<(ostream& write,Radical& rd){
			stringstream text;
			text<< '('<<rd.getCoeficiente()<<")("<<rd.getRadicando()<<")^("<<rd.getIndice()<<')';
			return write<<text.str();
		}

};
#endif