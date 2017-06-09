#include "Real.h"
#include "Racional.h"
#include "Radical.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int menu();
int menuAgregar();
int menuOperaciones();
int main() {
	vector <Real*> banco;
	bool salir=false;
	while(!salir){
		switch(menu()){
			case 1:{
				bool salirOperaciones =false;
				while(!salirOperaciones){
					switch(menuAgregar()){
						case 1:{
							int temporal;
							int coeficiente,radicando, indice;
							cout<<"Ingrese el coeficiente: "<<endl;
							cin>>coeficiente;
							cout<<"Ingrese el radicando: "<<endl;
							cin>>radicando;
							cout<<"Ingrese el indice: "<<endl;
							cin>>indice;
							banco.push_back(new Radical(coeficiente,indice,radicando));
							break;
						}
						case 2:{
							int temporal;
							int numerador,denominador;
							cout<<"Ingrese el numerador: "<<endl;
							cin>>numerador;
							cout<<"Ingrese el Denominador: "<<endl;
							cin>>denominador;
							banco.push_back(new Racional(numerador,denominador));
							break;
						}
						case 3:{
							/*int numero;
							cout<<"Ingrese un numero: "<<endl;
							cin>>numero;
							banco.push_back(new Real&(numero));
							break;*/
						}
						case 4:{
							/*double numeroDecimal;
							cout<<"Ingrese un numero decimal: ";
							cin>>numeroDecimal;
							banco.push_back(numeroDecimal);
							break;*/
						}
						case 5:{
							salirOperaciones=true;
							break;
						}
					}
				}
				break;
			}

			case 2:{
				break;
			}
			case 3:{
				salir=true;
				break;				
			}
		}
	}

}

int menu(){
	int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU-----" << endl
			<< "1.- Agregar Numeros" << endl
			<< "2.- Hacer Operaciones" << endl
			<< "3.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 3)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

int menuAgregar(){
	int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU AGREGAR -----" << endl
			<< "1.- Agregar Radical" << endl
			<< "2.- Agregar Racional " << endl
			<< "3.- Agregar Enteros "<<endl
			<< "4.- Agregar Decimales "<<endl
			<< "5.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 5)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

int menuOperaciones(){
	int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU DE OPERACIONES -----" << endl
			<< "1.- Agregar Radical" << endl
			<< "2.- Agregar Racional " << endl
			<< "3.- Agregar Enteros "<<endl
			<< "4.- Agregar Decimales "<<endl
			<< "5.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 5)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}