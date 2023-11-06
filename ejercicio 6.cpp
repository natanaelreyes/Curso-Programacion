//mayor y menor

#include<iostream>

using namespace std;

int main () {
	int  numeros;
	cout<<" Ingrese los numeros a evaluar:   ";
	cin>> numeros;
	
	int arreglo[numeros];
	cout<<"\n ingrese los numeros que desea revisar:   ";
	
	for (int a = 0; a < numeros; a++)
	{
		cin>> arreglo[a];
		}
		int Nummenor = arreglo[0];
		int Nummayor = arreglo[0];
		for (int a = 1; a< numeros; a++)
		{
			if(arreglo[a] < arreglo[a])
			{
				Nummenor = arreglo[a];
			}
			if(arreglo[a]> Nummayor) {
				Nummayor = arreglo[a];
				}
			}
			
			
			
		
	cout<<"\n El numero menor es:  " <<Nummenor<<endl;
	cout<<"El Numero Mayor es:  "<<Nummayor<<endl;
	
	
	system("pause");
	return 0;
}