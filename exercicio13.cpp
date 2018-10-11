#include <iostream> 
#include <math.h>
using namespace std;
int main ()

{
    float pubt, rendt, pop, ge, arq, cad;

    cout<<"Digite o valor do  publico total: "<<endl; 
    cin>> pubt;
    
    pop=pubt*0.1;
    ge=pubt*0.5;
    arq=pubt*0.3;
    cad=pubt*0.1;
    

    rendt=(pop*1)+(ge*5)+(arq*10)+(cad*20);
	
	(pop*1),(ge*5),(arq*10),(cad*20);
	
	cout<<"Valor que corresponde a cada Ingresso abaixo "<<endl;
	cout<< "Valor do ingresso Popular: "<<pop <<endl;
	cout<< "Valor do ingresso Geral: "<<ge <<endl;
	cout<< "Valor do ingresso da Arquibancada: "<<arq <<endl;
	cout<< "Valor do ingresso das Cadeiras: "<<cad <<endl;

    cout<<"Total: "<<rendt <<endl; 
    
    return 0;
}
