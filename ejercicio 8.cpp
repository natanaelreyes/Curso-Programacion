//binomio de newtom
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main () {
	
	float a, b, binomio;
	cout<<"digite el valor e A:  ";
	cin>>a;
	cout<<"ingrese el valor de B:  ";
	cin>>b;
	
	binomio = pow(a,2) + pow(b,2)+ (2*a*b);
	cout<<" El Resultado es:  "<<binomio<<endl;
	
	
	
	
	system("pause");
	return 0;
	
}