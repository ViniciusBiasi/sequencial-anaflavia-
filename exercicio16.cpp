#include <iostream>
#include <math.h>

using namespace std;

int main(){

	float a,b,c,d;
	float arit, har, geo, qua;


	cout<<"insira a";
	cin>>a;
	cout<<"insira b";
	cin>>b;
	cout<<"insira c";
	cin>>c;
	cout<<"insira d";
	cin>>d;
	
	arit=(a+b+c+d)/4;
	har=4/(1/a+1/b+1/c+1/d);
	geo=pow((a+b+c+d),1/4.0);
	qua=pow((pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2))/4,1/2.0);
	
	
	cout<< "Aritimetica: " <<arit<< " Harmonica: " <<har<<  " Geometrica: " <<geo<< " Quadratica: "<<qua<< endl;
	
}
