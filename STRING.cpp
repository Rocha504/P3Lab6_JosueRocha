#include "STRING.h"
#include "CHAR.h"

STRING::STRING()
{
}
STRING::STRING(char x,char y){
	this->cadena=y;
	this->cadena+=x;
}
STRING::STRING(string cadena){
	this->cadena=cadena;
};

void STRING::setCadena(string cadena){
	this->cadena=cadena;
}

STRING::~STRING()
{
}
string STRING::getCadena(){
	return this->cadena;
}