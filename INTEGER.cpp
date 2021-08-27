#include "INTEGER.h"
#include<iostream>
using namespace std;

INTEGER::INTEGER()
{
}

INTEGER::INTEGER(int numero){
	this->numero=numero;
}

INTEGER::~INTEGER()
{
}

int INTEGER:: getNumero(){
	return this->numero;
}

void INTEGER:: setNumero(int numero){
	this->numero=numero;
};

void INTEGER:: operator+(INTEGER obj){
	 int x=obj.getNumero()+this->numero;
	 cout<<"La suma es: "<<x<<endl;
}

void INTEGER:: operator-(INTEGER obj){
	 int x=obj.getNumero()-this->numero;
	 cout<<"La resta es: "<<x<<endl;
}

void INTEGER:: operator*(INTEGER obj){
	 
	 int x=obj.getNumero()*this->numero;
	 
	 cout<<"La multiplicacion es: "<<x<<endl;
}

void INTEGER:: operator/(INTEGER obj){
	 
	 int x=obj.getNumero()/this->numero;
	 
	 cout<<"La division es: "<<x<<endl;
}


 

 
