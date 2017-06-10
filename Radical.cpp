#include "Radical.h"
#include "Racional.h"
#include "Real.h"

#include <iostream>
#include <sstream>
#include <typeinfo>
#include <sstream>

using namespace std;

Radical :: Radical():Real() {

}

Radical :: Radical(int coeficinete, int indice, int radicando):Real() {
	this -> coeficinete = coeficinete;
	this -> indice = indice;
	this -> radicando = radicando;
}

int Radical :: getCoeficiente() {
	return coeficinete;
}

void Radical :: setCoeficiente(int coeficinete) {
	this -> coeficinete = coeficinete;
}

int Radical :: getIndice() {
	return indice;
}

void Radical :: setIndice(int indice) {
	this -> indice = indice;
}

int Radical :: getRadicando() {
	return radicando;
}

void Radical :: setRadicando(int radicando){
	this -> radicando = radicando;
}

string Radical :: operator+(Real* temp) {
	stringstream resp;
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		if (radi == radicando && indi == indice) {
			resp << "(" << coef + coeficinete << ")(" << radicando << ")^(" << indice << ")" << endl; 
		} else {
			resp << "(" << coef << ")(" << radi << ")^(" << indi << ") + (" << coeficinete << ")(" << radicando << ")^(" << indice << ")" << endl;
		}
	}
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);

		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();

		resp << "[(" << numerador << " + " << (denominador*coeficinete) << ")(" << indice << ")^(" << radicando << ")] / " << denominador << endl;
	}
	return resp.str();
}

string Radical::operator-(Real* temp) {	
	stringstream resp;
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		if (radi == radicando && indi == indice) {
			resp << "(" << coef - coeficinete << ")(" << radicando << ")^(" << indice << ")" << endl; 
		} else {
			resp << "(" << coef << ")(" << radi << ")^(" << indi << ") - (" << coeficinete << ")(" << radicando << ")^(" << indice << ")" << endl;
		}
	}
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);

		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();

		resp << "[(" << numerador << " - " << (denominador*coeficinete) << ")(" << indice << ")^(" << radicando << ")] / " << denominador << endl;
	}
	return resp.str();
	
}

string Radical::operator*(Real* temp) {
	stringstream resp;
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		if (radi == radicando && indi == indice) {
			resp << "(" << coef * coeficinete << ")(" << radicando << ")^(" << indice << ")" << endl; 
		} else {
			resp << "(" << coef*coeficinete << ")(" << radi << ")^(" << indi << ")(" << radicando << ")^(" << indice << ")" << endl;
		}
	}
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);

		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();

		resp << "[(" << (numerador*coeficinete) << ")(" << radicando << ")^(" << indice << ")] / " << denominador << endl;
	}
	return resp.str();
}

string Radical :: operator/ (Real* temp) {
	stringstream resp;
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		if (radi == radicando && indi == indice) {
			resp << "(" << coef / coeficinete << ")(" << radicando << ")^(" << indice << ")" << endl; 
		} else {
			resp << "(" << coef << ")(" << radi << ")^(" << indi << ") / (" << coeficinete << ")(" << radicando << ")^(" << indice << ")" << endl;
		}
	}
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);

		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();
		
		resp << numerador << " / [(" << (numerador*coeficinete) << ")(" << radicando << ")^(" << indice << ")]" << endl;
	}
	return resp.str();
}