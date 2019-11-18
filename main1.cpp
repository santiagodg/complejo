#include <iostream>
#include "Complejo.h"
using namespace std;

int main()
{
	int iReal;
	int iImaginario;
	bool bTerminar;
	char cOpcion;

	Complejo c1, c2, c3;
	c1.setReal(4);
	c1.setImaginario(3);
	c3 = c1.suma(c2);
	c3.toString();

	bTerminar = false;
	do
	{
		cout << "MENU" << endl;
		cout << "a) Muestra complejo" << endl;
		cout << "b) Suma al complejo" << endl;
		cout << "c) Resta al complejo" << endl;
		cout << "d) Get Real" << endl;
		cout << "e) Get Imaginario" << endl;
		cout << "f) Set Real" << endl;
		cout << "g) Set Imaginario" << endl;
		cout << "h) Suma con objeto" << endl;
		cout << "i) Resta con objeto" << endl;
		cout << "j) Terminar" << endl;
		cout << ">>> ";
		cin >> cOpcion;

		switch (cOpcion)
		{
			case 'a':
				c1.toString();
				break;
			case 'b':
				cout << "Ingresa el valor real a sumar: ";
				cin >> iReal;
				cout << "Ingresa el valor imaginario a sumar: ";
				cin >> iImaginario;
				c1.sumaAlComplejo(iReal, iImaginario);
				break;
			case 'c':
				cout << "Ingresa el valor real a restar: ";
				cin >> iReal;
				cout << "Ingresa el valor imaginario a restar: ";
				cin >> iImaginario;
				c1.restaAlComplejo(iReal, iImaginario);
				break;
			case 'd':
				cout << "Real: ";
				cout << c1.getReal() << endl;
				break;
			case 'e':
				cout << "Imaginario: ";
				cout << c1.getImaginario() << endl;
				break;
			case 'f':
				cout << "Ingresa el valor real: ";
				cin >> iReal;
				c1.setReal(iReal);
				break;
			case 'g':
				cout << "Ingresa el valor imaginario: ";
				cin >> iImaginario;
				c1.setImaginario(iImaginario);
				break;
			case 'h':
				cout << "Ingresa el valor real de c2: ";
				cin >> iReal;
				c2.setReal(iReal);
				cout << "Ingresa el valor imaginario de c2: ";
				cin >> iImaginario;
				c2.setImaginario(iImaginario);
				c1.suma(c2);
				break;
			case 'i':
				cout << "Ingresa el valor real de c2: ";
				cin >> iReal;
				c2.setReal(iReal);
				cout << "Ingresa el valor imaginario de c2: ";
				cin >> iImaginario;
				c2.setImaginario(iImaginario);
				c1.resta(c2);
				break;
			case 'j':
				bTerminar = true;
				break;
		}
	}
	while (!bTerminar);

	return 0;
}