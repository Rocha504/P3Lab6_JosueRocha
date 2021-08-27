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

void listarLetras( vector<CHAR*> listaL){
	for(int i=0;listaL.size();i++){
		cout<<i<<"->"<<listaL[i]->getCaracter()<<endl;
	}
}

void listarCadenas(vector <STRING*> listaC){
	for(int i=0;listaC.size();i++){
		cout<<i<<"->"<<listaC[i]->getCadena()<<endl;
	}
}



