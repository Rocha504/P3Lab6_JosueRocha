#include "CHAR.h"
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

char CHAR:: getCaracter(){
	return this->caracter;
}