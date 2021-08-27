#include "STRING.h"
#include "CHAR.h"
#include<iostream>
using namespace std;

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

void STRING :: operator!(){
	cout<<this->cadena;	
}

void STRING::operator<<(string cadena){
	this->cadena=cadena;
}

string STRING::getCadena(){
	return this->cadena;
}