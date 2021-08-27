#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "INTEGER.h"
#include "CHAR.h"
#include "STRING.h"



int menu();
void listarNumeros(vector<INTEGER*>);
void listarLetras(vector<CHAR*>);
void listarCadenas(vector <STRING*>);

int main(int argc, char** argv) {
	
	vector<INTEGER*> numeros;
	vector<CHAR*> letras;
	vector <STRING*> cadenas;
	
	int op=menu();
	while(op!=7){
		switch(op){
			case 1:{
				int num;
				cout<<"Ingrese un numero"<<endl;
				cin>>num;
				INTEGER* nuevo=new INTEGER (num);
				numeros.push_back(nuevo);
				cout<<"Elemento agregado con exito"<<endl<<endl;
				op=menu();
			}
			break;
			case 2:{
				char carac;
				cout<<"Ingrese una letra"<<endl;
				cin>>carac;
				CHAR* nuevo=new CHAR(carac);
				letras.push_back(nuevo);
				cout<<"Elemento agregado con exito"<<endl<<endl;
				op=menu();
			}
			break;
			case 3:{
				string cad;
				cout<<"Ingrese una cadena"<<endl;
				cin>>cad;
				STRING* nuevo=new STRING(cad);
				cadenas.push_back(nuevo);
				cout<<"Elemento agregado con exito"<<endl<<endl;
				op=menu();
			}
			break;
			case 4:{
				int a,b;
			    listarLetras(letras);
			    cout<<"seleccione 2 letras(ingrese el indice)"<<endl;
			    cin>>a;
			    cin>>b;
			}
			break;
			case 5:{
				int op2;
				cout<<"Operaciones con INTEGER"<<endl;
				cout<<"1-Sumar"<<endl;
				cout<<"2-Restar"<<endl; 
				cout<<"3-Multiplicacion"<<endl;
				cout<<"4-Division"<<endl;
				cout<<"Ingrese una opcion"<<endl;
				cin>>op2;
				switch(op2){
					case 1:{
						int x,y;
						listarNumeros(numeros);
						cout<<"Elija dos numeros(Seleccione los indices)"<<endl;
						cin>>x;
						cin>>y;
						*numeros[x]+*numeros[y];	
					}
					break;
					case 2:{
						int x,y;
						listarNumeros(numeros);
						cout<<"Elija dos numeros(Seleccione los indices)"<<endl;
						cin>>x;
						cin>>y;
						*numeros[x]-*numeros[y];
					}
					break;
					case 3:{
						int x,y;
						listarNumeros(numeros);
						cout<<"Elija dos numeros(Seleccione los indices)"<<endl;
						cin>>x;
						cin>>y;
						*numeros[x] * *numeros[y];	 
					}
					break;
					case 4:{
						int x,y;
						listarNumeros(numeros);
						cout<<"Elija dos numeros(Seleccione los indices)"<<endl;
						cin>>x;
						cin>>y;
						*numeros[x] / *numeros[y];	 	 
					}
					break;
						
				}
			}
			break;
		}
	}
	
	
	return 0;
}

int menu(){
	
	int op;
	cout<<"BIENVENIDO"<<endl;
	cout<<"1. Agregar INTEGER"<<endl;
	cout<<"2. Agregar CHAR"<<endl;
	cout<<"3. Agregar STRING"<<endl;
	cout<<"4. Operaciones INTEGER"<<endl;
	cout<<"5. Operacion CHAR"<<endl;
	cout<<"6. Operacio STRING"<<endl;
	cout<<"7. Salir"<<endl;
	cin>>op;
	
	return op;
}

void listarNumeros(vector<INTEGER*> listaN){
	for(int i=0;listaN.size();i++){
		cout<<i<<"->"<<listaN[i]->getNumero()<<endl;
	}
}

void listarLetras(vector<CHAR*> listaL){
	for(int i=0;listaL.size();i++){
		cout<<i<<"->"<<listaL[i]->getCaracter()<<endl;
	}
}

void listarCadenas(vector <STRING*> listaC){
	for(int i=0;listaC.size();i++){
		cout<<i<<"->"<<listaC[i]->getCadena()<<endl;
	}
}



