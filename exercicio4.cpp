#include <cmath>
#include <iostream>
using namespace std;

int main()

{
        float x1,x2,D,y1,y2;
        
        cout<<"Qual  a distancia entre x1: ";
        cin>>x1;
        
        cout<<"Qual � a dist�ncia entre x2: ";
        cin>>x2;
        
        cout<<"Qual � a dist�ncia entre y1: ";
        cin>>y1;
        
        cout<<"Qual � a dist�ncia entre y2: ";
        cin>>y2;
        
	
	D=sqrtf (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	
	cout<<"A dist�ncia entre a e b "<<D;
	
			return 0;
			
}
	
	
	
	

