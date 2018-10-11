#include<math.h>
#include<iostream>
using namespace std;
int main ()
{
	float centena, s1, s2, s3, dezena, unidade, m1, m2, m3, resultado;
	cout<<"Entre com o digito referente a centena:";
	cin>>centena;
	cout<<"Entre com o digito refente a dezena:";
	cin>>dezena;
	cout<<"Entre com o digito referente a unidade:";
	cin>>unidade;
	s1=centena+unidade; 
    s2=dezena+dezena; 
    s3=unidade+centena; 
    m1=s1*1;
	m2=s2*2;
	m3=s3*3; 
	resultado=m1+m2+m3; 

    cout<<"O ultimo dígito do resultado é o digito verificador:"<<resultado<<endl;
}
