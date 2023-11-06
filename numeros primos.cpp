//crear un programa que verifica s un numero es primo o no c++
#include<iostream>
#include<math.h>

using namespace std;


	bool primo( int numero ) {
		
	if (numero <=1){
	return false;
	
	}	
	
	if  (numero ==2)
	{
		return  false;
	}
	
	if (numero % 2 ==00)
	{
		return false;
	}
	int raiz = sqrt(numero);
	for ( int a =3; a <= raiz;
	a +=2)
	{
		if ( numero % a == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {
 int numero;
	cout<<"Ingrese el Un numero: "<<endl;
	cin>>numero;
	if	(primo(numero)){
		cout<<numero<<"  es un numero primo. \n";
	}
	else {
		cout<<numero<<"  no es un numero primo. \n";
		
	}
	

	
	return 0;
}