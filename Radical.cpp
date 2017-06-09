#include "Radical.h"
#include "Racional.h"
#include "Real.h"

#include <iostream>
#include <typeinfo>

using namespace std;

Radical::Radical():Real(){

}

Radical::Radical(int coeficinete, int indice, int radicando):Real(){
	this -> coeficinete = coeficinete;
	this -> indice = indice;
	this -> radicando = radicando;
}

int Radical::getCoeficiente(){
	return coeficinete;
}

void Radical::setCoeficiente(int coeficinete){
	this->coeficinete=coeficinete;
}

int Radical::getIndice(){
	return indice;
}

void Radical::setIndice(int indice){
	this->indice=indice;
}

int Radical::getRadicando(){
	return radicando;
}

void Radical::setRadicando(int radicando){
	this->radicando=radicando;
}

string Radical::operator+(Real* temp){
	/*Real* suma=new Real();
	if (dynamic_cast<Radical*>(temp)){
		int coeficiente;
		coeficiente.getCoeficiente();
		int indice;
		indice.getIndice();
		int radicando;
		radicando.getRadicando();
		suma((coeficiente)(radicando)^(1/indice)+temp);
	}
	if(dynamic_cast<Radical*>(temp)){
		Racional* numerador= new Racional();
		numerador->getNumerador();
		Racional* denominador= new Racional();
		denominador->getDenominador();
	}*/
	return "";
}	


Real* Radical::operator-(Real* temp){
	/*Real* resta= new Real();
	if (dynamic_cast<Radical*>(temp)){
		int coeficiente;
		coeficiente.getCoeficiente();
		int indice;
		indice.getIndice();
		int radicando;
		radicando.getRadicando();
		multiplicacion((coeficiente)(radicando)^(1/indice)+temp);
	}
	if(dynamic_cast<Radical*>(temp)){
		Racional* numerador= new Racional();
		numerador->getNumerador();
		Racional* denominador= new Racional();
		denominador->getDenominador();
	}*/ 
	return temp;
}

Real* Radical::operator*(Real* temp){
	/*Real* multiplicacion= new Real();
	if (dynamic_cast<Radical*>(temp)){
		int coeficiente;
		coeficiente.getCoeficiente();
		int indice;
		indice.getIndice();
		int radicando;
		radicando.getRadicando();
		multiplicacion((coeficiente)(radicando)^(1/indice)+temp);
	}
	if(dynamic_cast<Radical*>(temp)){
		Racional* numerador= new Racional();
		numerador->getNumerador();
		Racional* denominador= new Racional();
		denominador->getDenominador();
	}*/
	return temp;
}

Real* Radical :: operator/ (Real* temp) {
	return temp;
}