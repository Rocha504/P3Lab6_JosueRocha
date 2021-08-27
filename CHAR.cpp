#include "CHAR.h"
#include<iostream>
#include <string>
using namespace std;
#include "STRING.h"

CHAR::CHAR()
{
}

CHAR::CHAR(char caracter){
	this->caracter=caracter;
};

CHAR::~CHAR()
{
}

STRING CHAR:: operator+(CHAR carac){
	
	STRING cadena;
	string aux="";
	aux+=this->caracter;
	aux+=carac.getCaracter();
	cadena.setCadena(aux);
	
	return cadena;
	
};

void CHAR :: operator!(){
	cout<<this->caracter;	
}
void CHAR::operator<<(char caracter){
	this->caracter=caracter;
};
char CHAR:: getCaracter(){
	return this->caracter;
}