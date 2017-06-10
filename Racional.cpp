#include "Racional.h"
#include "Radical.h"
#include "Real.h"

#include <iostream>
#include <typeinfo>
#include <sstream>

using namespace std;

Racional :: Racional(){

}

Racional :: Racional(int numerador, int denominador) : Real(){
	this -> numerador = numerador;
	this -> denominador = denominador;

}

int Racional :: getNumerador() {
	return numerador;
}

void Racional :: setNumerador(int numerador) {
	this -> numerador = numerador;
}

int Racional :: getDenominador() {
	return denominador;
}

void Racional :: setDenominador(int denominador) {
	this -> denominador = denominador;
}

string Racional :: operator+ (Real* temp) {
	stringstream resp; 
	int todo = 0;
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);
		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();

		if (denominador == this -> denominador){
			resp << (numerador + this -> numerador) << " / " << denominador;
		} else {
			resp << ((numerador*this -> denominador) + (denominador*this -> numerador)) << " / " << (denominador*this -> denominador) << endl;
		}
	}
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);
		Racional* pasar = static_cast <Racional*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		resp << "[(" << numerador << " + " << (denominador*coef) << ")(" << indi << ")^(" << radi << ")] / " << denominador << endl;
	}
	return resp.str();
}

string Racional :: operator- (Real* temp) {
	stringstream resp; 
	int todo = 0;
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);
		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();

		if (denominador == this -> denominador){
			resp << (numerador - this -> numerador) << " / " << denominador;
		} else {
			resp << ((numerador*(this -> denominador/2)) - (this -> numerador)*denominador/2) << " / " << ((denominador*this -> denominador)/2) << endl;
		}
	}
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);
		Racional* pasar = static_cast <Racional*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		resp << "[(" << numerador << " - " << (denominador*coef) << ")(" << indi << ")^(" << radi << ")] / " << denominador << endl;
	}
	return resp.str();
}

string  Racional :: operator* (Real* temp) {
	stringstream resp; 
	int todo = 0;
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);
		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();

		resp << (numerador*this -> numerador) << " / " << (denominador*this -> denominador) << endl;
	}
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);
		Racional* pasar = static_cast <Racional*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		resp << "[(" << (numerador*coef) << ")(" << radi << ")^(" << indi << ")] / " << denominador << endl;
	}
	return resp.str();
}

string Racional :: operator/ (Real* temp) {
	stringstream resp; 
	int todo = 0;
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);
		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();

		resp << (numerador*this -> denominador) << " / " << (denominador*this -> numerador) << endl;
	}
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);
		Racional* pasar = static_cast <Racional*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		resp << numerador << " / [(" << (numerador*coef) << ")(" << radi << ")^(" << indi << ")]" << endl;
	}
	return resp.str();
}