#include<iostream>
#include<math.h>
    
    using namespace std; 
    
    int main()
    
    
    {
        float diariapromo, mediapromo, mediasempromo, diarianormal, lucroouprej;
        
        cout<<"QUAL O VALOR DA DIARIA NORMAL:  ";
        cin>>diarianormal;
        
        cout<<"O VALOR DA DIARIA NO PERIODO DA PROMOCAO:  "<<diariapromo <<endl;
        cout<<"O VALOR MEDIO ARRECADADO SEM A PROMOCAO:  "<<mediasempromo <<endl;
        cout<<"O VALOR MEDIO ARRECADADO COM A PROMOCAO:   "<<mediapromo <<endl;
        cout<< "LUCRO OU PREJUIZO: " <<lucroouprej <<endl;
       
             
        diariapromo = 0.22 * diarianormal;
        mediasempromo = ( 42 * 0.4) * 8 * diarianormal;
        mediapromo = (42 * 0.7) * 8 * diariapromo;
        lucroouprej = mediapromo - mediasempromo;
        
        
        return 0;
    }
