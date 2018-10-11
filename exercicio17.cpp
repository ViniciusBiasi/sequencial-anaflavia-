#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float nota1, nota2, nota3, calculo;
 
    cout << "Entre com a nota 1:";
    cin >> nota1;
    
  
    cout << "Entre com a nota 2: ";
    cin >> nota2; 
    
   
    cout << "Entre com a nota 3: ";
    cin >> nota3;
    
   
        calculo = (( nota1 * 2 ) + (nota2 * 3) + (nota3 * 5)) /10;
     cout<< "A media ponderada é: " <<calculo;
    


    return 0;	

}
