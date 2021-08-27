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

STRING* CHAR:: operator+(char carac){
	
	STRING* cadena;
	cadena=new STRING(this->caracter,carac);
	
	return cadena;
	
};

char CHAR:: getCaracter(){
	return this->caracter;
}