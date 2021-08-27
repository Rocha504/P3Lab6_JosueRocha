#ifndef CHAR_H
#define CHAR_H
#include "STRING.h"

class CHAR
{
	public:
		CHAR();
		CHAR(char);
		~CHAR();
		STRING operator+(CHAR);
		char getCaracter();
	private:
		char caracter;
};

#endif