#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main ()
{
	char cadena[100];
	
	cout<<"Digite el Texto al comparar:  ";
	cin.getline(cadena,100,'\n');
	
	
	if(cadena == strrev(cadena))
	{
		cout<<"el Texto es Palindromo  "; 
		
	}
	else {
		cout<<"El Texto no es Palindromo" ;
	}
	
	
	
	

	
	getch();
	return 0;
}