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
	//Racional* suma = new Real();
	stringstream resp; 
	int todo = 0;
	if (dynamic_cast<Racional*>(temp)) {
		Racional* cast = static_cast <Racional*> (temp);
		int numerador = cast -> getNumerador();
		int denominador = cast -> getDenominador();

		if (denominador == this -> denominador){
			resp << (numerador + this -> numerador) << "/" << denominador;
		} else {
			resp << (numerador + this -> numerador) << "/" << (denominador + this -> denominador) << endl;
		}
	}
	if (dynamic_cast<Radical*>(temp)) {
		Radical* cast = static_cast <Radical*> (temp);
		Racional* pasar = static_cast <Racional*> (temp);

		int coef = cast -> getCoeficiente();
		int indi = cast -> getIndice();
		int radi = cast -> getRadicando();

		resp << "[(" << numerador << "+" << (denominador*coef) << ")(" << indi << ")^(" << radi << ")] / " << denominador << endl;
	}
	return resp.str();
}

Real* Racional :: operator- (Real* temp) {
	return temp;
}

Real* Racional :: operator* (Real* temp) {
	return temp;
}

Real* Racional :: operator/ (Real* temp) {
	return temp;
}
/*Real* Racional :: operator+ (Real* temp) {
	Real* suma = new Real();
	if (dynamic_cast<Racional*>(temp)) {
		Racional* numer = new Racional();
		numer -> getNumerador();
		Racional* denom = new Racional();
		denom -> getDenominador();
		suma = (numer/denom) + temp;
	}
	if (dynamic_cast<Radical*>(temp)) {
		
	}
	return suma;
}*/