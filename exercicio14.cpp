#include<iostream>
#include<math.h>
 using namespace std;
    int main()

    {
        int tempohoras;
        float taxaconsumo, valorwatt, energiatotal, valortotal;

           cout<<"Digite a taxa de consumo: "<<endl;
           cin>>taxaconsumo;
           
           cout<<"Digite o tempo de horas que permanece ligado:  "<<endl;
           cin>>tempohoras;
           
           cout<< "Digite o valor do quilowatt hora: "<<endl;
           cin>>valorwatt;
         
        energiatotal = taxaconsumo * tempohoras;
        valortotal = energiatotal * valorwatt;
        
        cout<< "ENERGIA TOTAL GASTA: "<<energiatotal <<endl;
        cout<< "VALOR A SER PAGO: "<<valortotal <<endl;
        

        return 0;
    }
