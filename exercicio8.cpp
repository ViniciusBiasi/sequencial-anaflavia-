#include <iostream>
using namespace std;
int main(){
	
	int sec;
	float h, min;
	
	cout<<"Insira o n�mero de segundos de dura��o do evento da f�brica: ";
	cin>>sec;
	
	min=(sec/60) - (sec%60);
	h=min/60;
		
	
	cout<<"A dura��o foi de: "<<h<<" horas,  " <<min<<" minutos e " <<sec<< " segundos.";
	
	
	
	
}
