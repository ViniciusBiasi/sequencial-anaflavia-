#include<iostream>
#include<math.h>

using namespace std;

int main()
{
 
    float vf, qf, va, qa, ve, qe, imp, pc, pv, aux;
    
   cout<< "Digite o custo de fabrica��o do p�o fran��s: " <<endl;
   cin>> pc;
   
   cout<< "Digite a quantidade de quilos de farinha: "<<endl; 
   cin>> qf;
   
   cout<< "Digite o valor do quilo de farinha:  "<<endl;
   cin>> vf;
   
   cout << "Digite a quantidade de litros de �gua:   "<<endl;
   cin>> qa;
   
    cout << "Digite o valor do litro de �gua: "<<endl; 
    cin >> va;
    
    cout << "Digite a quantidade de quilowatts hora de energia:  "<<endl;
    cin >> qe;
    
    cout << "Digite o valor do quilowatts hora: "<<endl; 
    cin >> ve;
    
    cout << "Digite o percentual % do imposto: " ;
    cin >> imp;
    
	aux=(qf*vf)+(qa*va)+(qe*ve); 
	pc=(aux*(imp/100))+aux; 
	pv=(pc*30/100)+pc;
	
	cout << "O VALOR PRECO DE CUSTO �: "<<pc; 
	cout << "O VALOR DO PRECO DE VENDA �: "<<pv;
	
	return 0;
}

