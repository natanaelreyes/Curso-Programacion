#include<iostream>
#include<conio.h>



//ejercicio No. 2
using namespace std;

int main ()
{
	int numero1, numero2, suma=0, resta=0, division=0, multiplicacion =0;
	
	cout<<"Ingrese el primero Numero "; cin>>numero1;
	cout<<"Ingrese el Segundo Numero "; cin>> numero2;
	
	suma= numero1 + numero2;
	resta = numero1 - numero2;
	division = numero1 / numero2;
	multiplicacion = numero1 *numero2;
	
	cout<< "El resultado de la Suma es  "<<suma<<endl;
	cout<<"el Resultado de la Resta es"<< resta<<endl;
	cout<<"el Resultado de la Division es " <<division<<endl;
	cout<<"El resultado de la multiplicacion es "<<multiplicacion<<endl;
	
	
	
	
	getch();
	return 0;
}