#include <iostream>
#include <math.h>

using namespace std;

int main ()

{
	float tempodeviagem, velocidademedia, distancia, quantidadedelitros;
	
	cout << "Digite o tempo de viagem em Horas(.): " <<endl;
	cin  >> tempodeviagem;
	
	cout  << "Digite a velocidade m�dia do ve�culo: "<<endl;
	cin   >> velocidademedia;
	
	distancia = (tempodeviagem * velocidademedia) ;
	 
	quantidadedelitros = (distancia / 12) ; 
	
	cout << "Velocidade m�dia = "<<velocidademedia <<endl;
    cout << "Tempo gasto na viagem = "<<tempodeviagem <<endl;
    cout << "Distancia percorrida = "<<distancia <<endl;
    cout << "Qtde de litros usados = "<<quantidadedelitros <<endl;
    
	

	return 0;
}
