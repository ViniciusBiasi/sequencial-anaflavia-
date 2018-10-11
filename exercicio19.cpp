#include<math.h>
#include<iostream>
using namespace std;
int main ()
{
	float sfixo, lcd, led, plasma, tlcd, tled, tplasma, scomissao, total;
	cout<<"Digite o salário fixo do funcionário:";
	cin>>sfixo;
	cout<<"Digite o número de TV's LCD vendidas no mês:";
	cin>>lcd;
	tlcd=lcd*50;
	cout<<"Digite o número de TV's de LED vendidas no mês:";
	cin>>led;
	tled=led*60;
	cout<<"Digite o número de TV's de Plasma vendidas no mês:";
	cin>>plasma;
	tplasma=plasma*55;
	scomissao=tlcd+tled+tplasma;
	total=sfixo+scomissao;
	cout<<"O salário total do funcionário é:"<<total<<endl;
}
