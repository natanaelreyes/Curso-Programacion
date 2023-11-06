//EJERCICO DE EXPRESIONES

#include<iostream>

using namespace std;

int main ()
{
	float a, b, c, d, resultado;
	
	cout<<"digite el valor de A:  "; 
	cin>>a;
	cout<<"digite el valor de B:  ";
	cin>>b;
	cout<<"digite el valor de C:  ";
	cin>>c;
	cout<<"digite el valor de D:  ";
	cin>>d;
		
	resultado = (a+b) / (c+d);

	
	cout.precision (2);
	cout<<"Resultado es:  "<<resultado<<endl;
	
	
	
	
	return 0;
}