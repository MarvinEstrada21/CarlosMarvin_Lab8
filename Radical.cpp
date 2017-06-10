#include "Radical.h"
#include "Racional.h"
#include "Real.h"

#include <iostream>
#include <sstream>
#include <typeinfo>

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
	
	return "";
}

string Radical::operator-(Real* temp) {
	return "";
}

string Radical::operator*(Real* temp) {
	return "";
}

string Radical :: operator/ (Real* temp) {
	return "";
}