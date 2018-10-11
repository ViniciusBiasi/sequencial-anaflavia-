#include <iostream>
using namespace std;
int main()
{
	float tempC,tempF,QTchuva;
	
	cout<<"Qual a temperatura em Farenheit?";
	cin>>tempF;
	
	cout<<"Qual a quantidade de chuva em polegadas?";
	cin>>QTchuva;
	
	QTchuva=QTchuva*25.4;
	tempC=((tempF)/(9/5.0) )-32;
	
	
	cout<<"A quantidade de chuva é : ";
	cout<<QTchuva;
	cout<<" milímetros;";
	cout<<" A temperatura em celcious é:";
	cout<<tempC;
	cout<<" graus";

}
