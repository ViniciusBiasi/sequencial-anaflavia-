#include <math.h>
#include <iostream>
using namespace std;

int main ()

{
	
	float n, quadrado, raiz_quadrada;
	cout<<"Por favor, informe um numero inteiro positivo: ";
	cin>>n;
	
	quadrado=pow(n,2);
	raiz_quadrada= sqrt(n);
	
	cout<<"O n�mero �: "<<n;
	cout<<"O valor do numero ao quadrado �: "<<quadrado;
	cout<<"O valor da raiz quadrada do numero �: "<<raiz_quadrada<<endl;
	
	
}

