#include<iostream>
#include<conio.h>

using namespace std;

int main(){


int numeros[100][100], filas, columnas;

cout<<"digite la cantidad de filas:  ";
cin>>filas;
cout<<"digite la cantidad de columnas:  ";
cin>>columnas;
 
 for (int i= 0; i<filas;i++){
 	for(int j=0;j<columnas;j++)
 	{cout<<" digire un numero ["<<i<<"]["<<j<<"]: ";
 	cin>>numeros[i][j];
	 }
 }
 

 for (int i=0;i<filas;i++){
 int suma=0;
 	for(int j=0; j<columnas;j++)
 	{ 
	 suma +=numeros [i][j];
	 cout<<numeros [i][j];
	 cout<<"la suma de la filas : "<<i<< "es"<<suma;
	 
	 }
	 
	 cout<<"\n";
 	
 }
 
 
 getch();
 return 0;
}

