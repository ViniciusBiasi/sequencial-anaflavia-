#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float cod1, quant1, valor1, cod2, quant2, valor2, ipi, total;
    
     cout<<"informe o c�digo da 1:    ";
     cin>>cod1;
     
  
     
    cout<<"A quantidade de pe�as vendidas da 1:   ";
    cin>>quant1;
    
  
     
     
    cout<<"O valor Unit�rio da pe�a 1:   ";
    cin>>valor1;
	

	 
	 
	cout<<"Informe o c�digo da 2:    ";
    cin>>cod2;
     

      
      
    cout<<"A quantidade de pe�as vendidas da 2:   ";
    cin>>quant2;
    

     
     
    cout<<"O valor Unit�rio da pe�a 2:   ";
    cin>>valor2;
    
	
	cout<<"Informe o percentual de desconto IPI:  ";
    cin>>ipi;		

	total = (valor1*quant1 + valor2*quant2)*(ipi/100+1);
	
	 cout<<"O valor total a ser pago �: "<<total; 
	 
return 0;

}
