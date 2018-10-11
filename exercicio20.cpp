#include <iostream>
#include <math.h>

using namespace std;

int main ()

{
	float tempodeviagem, velocidademedia, distancia, quantidadedelitros;
	
	cout << "Digite o tempo de viagem em Horas(.): " <<endl;
	cin  >> tempodeviagem;
	
	cout  << "Digite a velocidade média do veículo: "<<endl;
	cin   >> velocidademedia;
	
	distancia = (tempodeviagem * velocidademedia) ;
	 
	quantidadedelitros = (distancia / 12) ; 
	
	cout << "Velocidade média = "<<velocidademedia <<endl;
    cout << "Tempo gasto na viagem = "<<tempodeviagem <<endl;
    cout << "Distancia percorrida = "<<distancia <<endl;
    cout << "Qtde de litros usados = "<<quantidadedelitros <<endl;
    
	

	return 0;
}
