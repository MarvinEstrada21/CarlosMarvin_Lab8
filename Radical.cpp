#include "Radical.h"
#include "Real.h"

#include <iostream>
#include <typeinfo>

using namespace std;

Radical::Radical(){

}

Radical::Radical(int coeficinete, int indice, int radicando){
	this -> coeficinete = coeficinete;
	this -> indice = indice;
	this -> radicando = radicando;
}

int Radical::getCoeficiente(){

}

string Radical :: operator+ (Real* temp) {
	return "";
}

Real* Radical :: operator- (Real* temp) {
	return temp;
}

Real* Radical :: operator* (Real* temp) {
	return temp;
}

Real* Radical :: operator/ (Real* temp) {
	return temp;
}