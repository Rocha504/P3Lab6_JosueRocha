#include "INTEGER.h"

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