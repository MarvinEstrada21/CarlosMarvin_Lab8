#include "Racional.h"

Racional::Racional(){

}

Racional::Racional(double numerador,double denominador)::Real(){
	this->numerador=numerador;
	this->denominador=denominador;

}

double Racional::getNumerador(){
	return numerador;
}

void Racional::setNumerador(double numerador){
	this->numerador=numerador;
}

double Racional::getDenominador(){
	return denominador;
}

void Racional::setDenominador(double denominador){
	this->denominador=denominador;
}
