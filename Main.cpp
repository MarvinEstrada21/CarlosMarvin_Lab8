#include "Real.h"
#include "Racional.h"
#include "Radical.h"
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <sstream>
#include <fstream>


using namespace std;
int menu();
int menuAgregar();
int menuOperaciones();
int menuSuma();
int main() {
	vector <Real*> banco;
	string respuesta;
	vector <Radical*> listaradical;
	vector <Racional*> listaracional;
	bool salirTodo=false;
	stringstream var;
	ofstream archive;
	archive.open("Ecuaciones.txt",ios::app);
	while(!salirTodo){
		switch(menu()){
			case 1:{
				bool salirAgregar =false;
				while(!salirAgregar){
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
							salirAgregar=true;
							break;
						}
					}
				}
				break;
			}

			case 2:{
				bool salirOperaciones=false;
				while(!salirOperaciones){
					switch(menuOperaciones()){
						case 1:{
							//sumar
							int  opcionsuma;
							int posicion1,posicion2;
							cout<< "1) Radical "<<endl
								<< "2) Racional "<<endl;
							cout<<"Elija una clase "<<endl;
							cin>>opcionsuma;
							if(opcionsuma==1){
								if(typeid(banco) == typeid(Radical)){
									//Radical* temp = dynamic_cast<Radical*>(banco);
									/*for (int i = 0; i < banco.size(); ++i){
										
									}*/
									cout<<"Seleccione la posicion 1 "<<endl;
									cin>>posicion1;
									cout<<"Seleccione la posicion 2 "<<endl;
									bool saliropsuma=false;
									cin>>posicion2;
									while(!saliropsuma){
										switch(menuSuma()){
											case 1:{
												if(typeid(banco[posicion1])==typeid(Radical)){
													Radical* temporal1 = dynamic_cast<Radical*>(banco[posicion1]);
													//Real* temporal2 = dynamic_cast<Real*>(banco[posicion]);
													Real* temporal2 =banco[posicion2];
													respuesta = *temporal1 + temporal2;
													archive<<temporal1<<'+'<<temporal2<<'='<<respuesta;

												}
												if(typeid(banco[posicion1])==typeid(Racional)){
													Racional* temporal1 = dynamic_cast<Racional*>(banco[posicion1]);
													Real* temporal2 =banco[posicion2];
													respuesta=*temporal1+temporal2;
													archive<<temporal1<<'+'<<temporal2<<'='<<respuesta;
												}
												break;
											}
											case 2:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'+'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'+'<<temporal2<<'='<<respuesta;
												break;
											}
											case 3:{
												double numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'+'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'+'<<temporal2<<'='<<respuesta;
												break;
											}
											
											case 4:{
												saliropsuma=false;
												break;
											}
										}
									}

								}
								if(typeid(banco)==typeid(Racional)){
									cout<<"Seleccione la posicion 1 "<<endl;
									cin>>posicion1;
									cout<<"Seleccione la posicion 2 "<<endl;
									bool saliropsuma=false;
									cin>>posicion2;
									while(!saliropsuma){
										switch(menuSuma()){
											case 1:{
												if(typeid(banco[posicion1])==typeid(Racional)){
													Racional* temporal1 = dynamic_cast<Racional*>(banco[posicion1]);
													//Real* temporal2 = dynamic_cast<Real*>(banco[posicion]);
													Real* temporal2 =banco[posicion2];
													respuesta = *temporal1 + temporal2;
													archive<<temporal1<<'+'<<temporal2<<'='<<respuesta;
												}
												if(typeid(banco[posicion1])==typeid(Radical)){
													Radical* temporal1 = dynamic_cast<Radical*>(banco[posicion1]);
													Real* temporal2 =banco[posicion2];
													respuesta=*temporal1+temporal2;
													archive<<temporal1<<'+'<<temporal2<<'='<<respuesta;
												}
												break;
											}
											case 2:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'+'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'+'<<temporal2<<'='<<respuesta;

												break;
											}
											case 3:{
												double numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'+'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'+'<<temporal2<<'='<<respuesta;

												break;
											}
											
											case 4:{
												saliropsuma=false;
												break;
											}
										}
									}
								}
							}

							break;							
						}
						case 2:{
							//resta
							int  opcionsuma;
							int posicion1,posicion2;
							cout<< "1) Radical "<<endl
								<< "2) Racional "<<endl;
							cout<<"Elija una clase "<<endl;
							cin>>opcionsuma;
							if(opcionsuma==1){
								if(typeid(banco) == typeid(Radical)){
									//Radical* temp = dynamic_cast<Radical*>(banco);
									/*for (int i = 0; i < banco.size(); ++i){
										
									}*/
									cout<<"Seleccione la posicion 1 "<<endl;
									cin>>posicion1;
									cout<<"Seleccione la posicion 2 "<<endl;
									bool saliropsuma=false;
									cin>>posicion2;
									while(!saliropsuma){
										switch(menuSuma()){
											case 1:{
												if(typeid(banco[posicion1])==typeid(Radical)){
													Radical* temporal1 = dynamic_cast<Radical*>(banco[posicion1]);
													//Real* temporal2 = dynamic_cast<Real*>(banco[posicion]);
													Real* temporal2 =banco[posicion2];
													respuesta = *temporal1 - temporal2;
													archive<<temporal1<<'-'<<temporal2<<'='<<respuesta;

												}
												if(typeid(banco[posicion1])==typeid(Racional)){
													Racional* temporal1 = dynamic_cast<Racional*>(banco[posicion1]);
													Real* temporal2 =banco[posicion2];
													respuesta=*temporal1-temporal2;
													archive<<temporal1<<'-'<<temporal2<<'='<<respuesta;
													
												}
												break;
											}
											case 2:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'-'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'-'<<temporal2<<'='<<respuesta;

												break;
											}
											case 3:{
												double numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'-'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'-'<<temporal2<<'='<<respuesta;

												break;
											}
											
											case 4:{
												saliropsuma=false;
												break;
											}
										}
									}

								}
								if(typeid(banco)==typeid(Racional)){
									cout<<"Seleccione la posicion 1 "<<endl;
									cin>>posicion1;
									cout<<"Seleccione la posicion 2 "<<endl;
									bool saliropsuma=false;
									cin>>posicion2;
									while(!saliropsuma){
										switch(menuSuma()){
											case 1:{
												if(typeid(banco[posicion1])==typeid(Racional)){
													Racional* temporal1 = dynamic_cast<Racional*>(banco[posicion1]);
													//Real* temporal2 = dynamic_cast<Real*>(banco[posicion]);
													Real* temporal2 =banco[posicion2];
													respuesta = *temporal1 - temporal2;
												}
												if(typeid(banco[posicion1])==typeid(Radical)){
													Radical* temporal1 = dynamic_cast<Radical*>(banco[posicion1]);
													Real* temporal2 =banco[posicion2];
													respuesta=*temporal1-temporal2;
													archive<<temporal1<<'-'<<temporal2<<'='<<respuesta;

												}
												break;
											}
											case 2:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'-'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'-'<<temporal2<<'='<<respuesta;
												break;
											}
											case 3:{
												double numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'-'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'-'<<temporal2<<'='<<respuesta;

												break;
											}
											
											case 4:{
												saliropsuma=false;
												break;
											}
										}
									}
								}
							}

							break;
						}
						case 3:{
							//multiplicar
							int  opcionsuma;
							int posicion1,posicion2;
							cout<< "1) Radical "<<endl
								<< "2) Racional "<<endl;
							cout<<"Elija una clase "<<endl;
							cin>>opcionsuma;
							if(opcionsuma==1){
								if(typeid(banco) == typeid(Radical)){
									//Radical* temp = dynamic_cast<Radical*>(banco);
									/*for (int i = 0; i < banco.size(); ++i){
										
									}*/
									cout<<"Seleccione la posicion 1 "<<endl;
									cin>>posicion1;
									cout<<"Seleccione la posicion 2 "<<endl;
									bool saliropsuma=false;
									cin>>posicion2;
									while(!saliropsuma){
										switch(menuSuma()){
											case 1:{
												if(typeid(banco[posicion1])==typeid(Radical)){
													Radical* temporal1 = dynamic_cast<Radical*>(banco[posicion1]);
													//Real* temporal2 = dynamic_cast<Real*>(banco[posicion]);
													Real* temporal2 =banco[posicion2];
													respuesta = *temporal1 * temporal2;
													archive<<temporal1<<'*'<<temporal2<<'='<<respuesta;

												}
												if(typeid(banco[posicion1])==typeid(Racional)){
													Racional* temporal1 = dynamic_cast<Racional*>(banco[posicion1]);
													Real* temporal2 =banco[posicion2];
													respuesta=*temporal1 * temporal2;
													archive<<temporal1<<'*'<<temporal2<<'='<<respuesta;

												}
												break;
											}
											case 2:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'*'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'*'<<temporal2<<'='<<respuesta;

												break;
											}
											case 3:{
												double numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'*'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'*'<<temporal2<<'='<<respuesta;

												break;
											}
											
											case 4:{
												saliropsuma=false;
												break;
											}
										}
									}

								}
								if(typeid(banco)==typeid(Racional)){
									cout<<"Seleccione la posicion 1 "<<endl;
									cin>>posicion1;
									cout<<"Seleccione la posicion 2 "<<endl;
									bool saliropsuma=false;
									cin>>posicion2;
									while(!saliropsuma){
										switch(menuSuma()){
											case 1:{
												if(typeid(banco[posicion1])==typeid(Racional)){
													Racional* temporal1 = dynamic_cast<Racional*>(banco[posicion1]);
													//Real* temporal2 = dynamic_cast<Real*>(banco[posicion]);
													Real* temporal2 =banco[posicion2];
													respuesta = *temporal1 * temporal2;
													archive<<temporal1<<'*'<<temporal2<<'='<<respuesta;

												}
												if(typeid(banco[posicion1])==typeid(Radical)){
													Radical* temporal1 = dynamic_cast<Radical*>(banco[posicion1]);
													Real* temporal2 =banco[posicion2];
													respuesta=*temporal1 * temporal2;
													archive<<temporal1<<'*'<<temporal2<<'='<<respuesta;

												}
												break;
											}
											case 2:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'*'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'*'<<temporal2<<'='<<respuesta;

												break;
											}
											case 3:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'*'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'*'<<temporal2<<'='<<respuesta;
												break;
											}
											
											case 4:{
												saliropsuma=false;
												break;
											}
										}
									}
								}
							}

							break;
						}
						case 4:{
							//division
							int  opcionsuma;
							int posicion1,posicion2;
							cout<< "1) Radical "<<endl
								<< "2) Racional "<<endl;
							cout<<"Elija una clase "<<endl;
							cin>>opcionsuma;
							if(opcionsuma==1){
								if(typeid(banco) == typeid(Radical)){
									//Radical* temp = dynamic_cast<Radical*>(banco);
									/*for (int i = 0; i < banco.size(); ++i){
										
									}*/
									cout<<"Seleccione la posicion 1 "<<endl;
									cin>>posicion1;
									cout<<"Seleccione la posicion 2 "<<endl;
									bool saliropsuma=false;
									cin>>posicion2;
									while(!saliropsuma){
										switch(menuSuma()){
											case 1:{
												if(typeid(banco[posicion1])==typeid(Radical)){
													Radical* temporal1 = dynamic_cast<Radical*>(banco[posicion1]);
													//Real* temporal2 = dynamic_cast<Real*>(banco[posicion]);
													Real* temporal2 =banco[posicion2];
													respuesta = *temporal1 / temporal2;
													archive<<temporal1<<'/'<<temporal2<<'='<<respuesta;

												}
												if(typeid(banco[posicion1])==typeid(Racional)){
													Racional* temporal1 = dynamic_cast<Racional*>(banco[posicion1]);
													Real* temporal2 =banco[posicion2];
													respuesta=*temporal1 / temporal2;
													archive<<temporal1<<'/'<<temporal2<<'='<<respuesta;

												}
												break;
											}
											case 2:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'/'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'/'<<temporal2<<'='<<respuesta;

												break;
											}
											case 3:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'/'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'/'<<temporal2<<'='<<respuesta;

												break;
											}
											
											case 4:{
												saliropsuma=false;
												break;
											}
										}
									}

								}
								if(typeid(banco)==typeid(Racional)){
									cout<<"Seleccione la posicion 1 "<<endl;
									cin>>posicion1;
									cout<<"Seleccione la posicion 2 "<<endl;
									bool saliropsuma=false;
									cin>>posicion2;
									while(!saliropsuma){
										switch(menuSuma()){
											case 1:{
												if(typeid(banco[posicion1])==typeid(Racional)){
													Racional* temporal1 = dynamic_cast<Racional*>(banco[posicion1]);
													//Real* temporal2 = dynamic_cast<Real*>(banco[posicion]);
													Real* temporal2 =banco[posicion2];
													respuesta = *temporal1 / temporal2;
													archive<<temporal1<<'/'<<temporal2<<'='<<respuesta;

												}
												if(typeid(banco[posicion1])==typeid(Radical)){
													Radical* temporal1 = dynamic_cast<Radical*>(banco[posicion1]);
													Real* temporal2 =banco[posicion2];
													respuesta=*temporal1/temporal2;
													archive<<temporal1<<'/'<<temporal2<<'='<<respuesta;

												}
												break;
											}
											case 2:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'/'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'/'<<temporal2<<'='<<respuesta;

												break;
											}
											case 3:{
												int numero;
												cout<<"Ingrese un numero"<<endl;
												cin>>numero;
												Real* temporal2 = banco[posicion1];
												var<<numero<<'/'<<temporal2;
												respuesta = var.str();
												archive<<numero<<'/'<<temporal2<<'='<<respuesta;
												break;
											}
											
											case 4:{
												saliropsuma=false;
												break;
											}
										}
									}
								}
							}

							break;
						}
						case 5:{
							salirOperaciones=true;
							break;
						}
					}
				}

				break;
			}
			case 3:{
				salirTodo=true;
				break;				
			}
		}
	}
	archive.close();
	return 0;

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

int menuOperaciones(){
	int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU DE OPERACIONES -----" << endl
			<< "1.- Sumar" << endl
			<< "2.- Restar " << endl
			<< "3.- Multiplicacion "<<endl
			<< "4.- Division "<<endl
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

/*int menuSuma(){
	int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU DE SUMA -----" << endl
			<< "1.- Radical con Radical" << endl
			<< "2.- Radical con Racional " << endl
			<< "3.- Radical con Enteros "<<endl
			<< "4.- Radical con Decimales "<<endl
			<< "5.- Racional con Racional "<<endl
			<< "6.- Racional con Radical "<<endl
			<< "7.- Racional con Enteros "<<endl
			<< "8.- Racional con Decimales "<<endl
			<< "9.- Enteros con Decimales "<<endl
			<< "10.- Enteros con Racionales "<<endl
			<< "11.- Enteros con Radical "<<endl
			<< "12.- Decimales con Racional "<<endl
			<< "13.- Decimales con Radical "<<endl
			<< "14.- Decimales con Enteros "<<endl
			<< "15.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 15)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}*/

int menuSuma(){
	int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU DE Sumas -----" << endl
			<< "1.- Sumar con Banco" << endl
			<< "2.- Sumar con un Entero "<<endl
			<< "3.- Sumar con un Decimal "<<endl
			<< "4.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 4)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}