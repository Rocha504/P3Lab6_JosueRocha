#ifndef INTEGER_H
#define INTEGER_H

class INTEGER
{
	public:
		INTEGER();
		INTEGER(int);
		~INTEGER();
		int getNumero();
		void setNumero(int);
		void operator+(INTEGER);
		void operator-(INTEGER);
		void operator*(INTEGER);
		void operator/(INTEGER);
	private:
		int numero;
		
};

#endif