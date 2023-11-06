#include<iostream>
#include<string.h>

using namespace std;

int main() {
	
	string palabra;
	int aux =0, igual=0;
	
	cout<<" ingrese el Texto el Revisar:   ";
	getline(cin>>ws, palabra);
	
	for ( int ind = palabra.length() -1; ind >= 0; ind --)
	{
		if (palabra[ind] == palabra[aux])
		{
			igual++;
			
		}
		aux++;
		
	}
	if (palabra.length()== igual) {
		cout<<" Esta Palabra es un Palidromo:  "<<endl;
	}
	else
	{
		cout<<" Esta Palabra no es un Palidromo:  "<<endl;
	}
	
	
	system("pause");
	return 0;
}