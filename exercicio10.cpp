#include <iostream>
#include <math.h>

using namespace std;

int main() {
		
		float numfuncionario,sal,horas,numfilho,saltotal,salfilho;
		float salhora;
		
		cout<<"Digita o numero do funcionário: ";
		cin>>numfuncionario;
	
		cout<<"Quantas horas ele trabalhou?";
		cin>>horas;
				
		cout<<"Quanto recebe? ";
		cin>>sal;
	
		cout<<"Quantos filhos tem? ";
		cin>>numfilho;
	
	
		salhora=horas*sal;
	
		salfilho=salhora*numfilho;
	
		saltotal=salhora+salfilho+salhora;
	
		cout<<" O numero do funcionario é :" <<numfuncionario<< " O salario total dle é: " <<saltotal<< endl;
	



}
