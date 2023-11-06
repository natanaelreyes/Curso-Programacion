#include<iostream>


//ejercicio No. 2
using namespace std;

int main ()
{

	int n1, n2, Suma=0, Resta=0, Multiplicacion=0, Division=0;

	
	cout<<"Ingrese Primero Numero  "; cin>>n1;
	cout<<"Ingrese Segundo Numero  "; cin>> n2;
	
	Suma = n1 + n2;
	Resta  = n1 - n2;
	Multiplicacion = n1 * n2;
	Division = n1/n2;
	
	
	cout<<"\nEl Resultado de la Suma es:  "<<Suma<<endl;
	cout<< "El Resultado de la Resta es  "<<Resta<<endl;
	cout<< "El Resultado de la Multiplicacion es  "<<Multiplicacion<<endl;
	cout<< "El Resultado de la Divison es  "<<Division<<endl;
	
	
	
	
	
	
	
	return 0;
}