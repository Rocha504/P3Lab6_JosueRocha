#ifndef STRING_H
#include <string>
using namespace std;
#define STRING_H

class STRING
{
	public:
		STRING();
		STRING(char,char);
		STRING(string);
		~STRING();
		string getCadena();
	private:
		string cadena;
};

#endif