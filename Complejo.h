#include <iostream>
using namespace std;

class Complejo
{
	private:
		// Atributo
		int iReal;
		int iImaginario;

	public:
		// Constructor
		Complejo();
		Complejo(int, int);

		// Método
		void sumaAlComplejo(int, int);
		void restaAlComplejo(int, int);
		void toString();
		Complejo suma(Complejo);
		Complejo resta(Complejo);

		// Getter
		int getReal();
		int getImaginario();

		// Setter
		void setReal(int);
		void setImaginario(int);
};

Complejo::Complejo()
{
	iReal = 1;
	iImaginario = 1;
}

Complejo::Complejo(int iRe, int iIma)
{
	iReal = iRe;
	iImaginario = iIma;
}

void Complejo::sumaAlComplejo(int iRe, int iIma)
{
	iReal += iRe;
	iImaginario += iIma;
}

void Complejo::restaAlComplejo(int iRe, int iIma)
{
	iReal -= iRe;
	iImaginario -= iIma;
}

void Complejo::toString()
{
	cout << iReal;
	cout << " ";
	if (iImaginario >= 0)
	{
		cout << "+ ";
	}
	cout << iImaginario;
	cout << "i" << endl;
}

Complejo Complejo::suma(Complejo c1)
{
	int iR, iI;
	iR = iReal + c1.getReal();
	iI = iImaginario + c1.getImaginaria();
	Complejo cResultado(iR, iI);
	return cResultado;
}

Complejo Complejo::resta(Complejo c1)
{
	int iR, iI;
	iR = iReal - c1.getReal();
	iI = iImaginario - c1.getImaginaria();
	Complejo cResultado(iR, iI);
	return cResultado;
}

int Complejo::getReal()
{
	return iReal;
}

int Complejo::getImaginario()
{
	return iImaginario;
}

void Complejo::setReal(int iRe)
{
	iReal = iRe;
}

void Complejo::setImaginario(int iIma)
{
	iImaginario = iIma;
}