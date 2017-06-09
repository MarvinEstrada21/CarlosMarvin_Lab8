#include "Racional.h"
#include "Real.h"
#include <iostream>
using namespace std;
Racional::Racional(){

}

Racional::Racional(int numerador,int denominador)::Real(){
	this->numerador=numerador;
	this->denominador=denominador;

}

int Racional::getNumerador(){
	return numerador;
}

void Racional::setNumerador(int numerador){
	this->numerador=numerador;
}

int Racional::getDenominador(){
	return denominador;
}

void Racional::setDenominador(int denominador){
	this->denominador=denominador;
}
