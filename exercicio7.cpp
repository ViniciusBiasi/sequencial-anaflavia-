#include <cmath>
#include <iostream>
using namespace std;

int main()

{
        float a, m, d;
 
cout<<"Entre com a sua idade somente em anos: ";
cin>>a;

cout<<"Entre com a sua idade somente em meses: ";
cin>>m;

cout<<"Entre com sua idade somente em dias: ";
cin>>d;

   d=(d+(a*365)+(m*30));
   
   cout<<"Sua idade em dias é " <<d;

return 0;   

}

