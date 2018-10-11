#include <iostream>
using namespace std;

float f_custo; //!<  Custo de Fábrica.
float c_custo; //!<  Custo ao Consumidor.

int main()
{
	

	cout << "Entre com o Custo de Fábrica: ";
	cin >> f_custo;

	c_custo = (f_custo * .12) + (f_custo * .3) + f_custo;

	cout << "Custo ao consumidor  " << c_custo << endl;

	return 0;
}

