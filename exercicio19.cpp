#include<math.h>
#include<iostream>
using namespace std;
int main ()
{
	float sfixo, lcd, led, plasma, tlcd, tled, tplasma, scomissao, total;
	cout<<"Digite o sal�rio fixo do funcion�rio:";
	cin>>sfixo;
	cout<<"Digite o n�mero de TV's LCD vendidas no m�s:";
	cin>>lcd;
	tlcd=lcd*50;
	cout<<"Digite o n�mero de TV's de LED vendidas no m�s:";
	cin>>led;
	tled=led*60;
	cout<<"Digite o n�mero de TV's de Plasma vendidas no m�s:";
	cin>>plasma;
	tplasma=plasma*55;
	scomissao=tlcd+tled+tplasma;
	total=sfixo+scomissao;
	cout<<"O sal�rio total do funcion�rio �:"<<total<<endl;
}
