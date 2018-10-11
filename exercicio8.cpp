#include <iostream>
using namespace std;
int main(){
	
	int sec;
	float h, min;
	
	cout<<"Insira o número de segundos de duração do evento da fábrica: ";
	cin>>sec;
	
	min=(sec/60) - (sec%60);
	h=min/60;
		
	
	cout<<"A duração foi de: "<<h<<" horas,  " <<min<<" minutos e " <<sec<< " segundos.";
	
	
	
	
}
