#include "Real.h"
#include "Racional.h"
#include "Radical.h"
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>


using namespace std;
int menu();
int menuAgregar();
int menuOperaciones();
int main() {
	vector <Real*> banco;
	vector <Radical*> listaradical;
	vector <Racional*> listaracional;
	bool salirTodo=false;
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
							cout<< "1) Radical "<<endl
								<< "2) Racional "<<endl;
							cout<<"Elija una clase "<<endl;
							cin>>opcionsuma;
							if(opcionsuma==1){
								if(typeid(banco) == typeid(Radical)){
									//Radical* temp = dynamic_cast<Radical*>(banco);
								}
							}

							break;							
						}
						case 2:{
							//resta
							break;
						}
						case 3:{
							//multiplicar
							break;
						}
						case 4:{
							//division
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

int menuSuma(){
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
}