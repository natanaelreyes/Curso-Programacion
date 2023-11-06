//ejercicio 1 palabras resevadas

#include<iostream>

using namespace std;

int main ()
{
	char marca[20], matricula [20], color[20], modelo[20], version[20], chasis[20], tipo[20];
	int kilometraje, year;
	
	cout<<"Ingrese la Marca del Vehiculo: "; cin>>marca;
	cout<<"Ingrese el Modelo del Vehiculo: "; cin>>modelo;
	cout<<"Ingrese Year del Vehiculo: ";cin>>year;
	cout<<"Ingrese el color: "; cin>>color;
	cout<<"Ingrese la Version: "; cin>>version;
	cout<<"ingrese el Numero de Chasis: ";cin>>chasis;
	cout<<"Tipo: "; cin>>tipo;
	cout<<"Kilometraje de Entrada: "; cin>>kilometraje;
	
	
	cout<<"\nMarca:  - "<<marca<<endl;
	cout<<"Modelo:  - "<<modelo<<endl;
	cout<<"Color  - "<<color<<endl;
	cout<<"Version  - "<<version<<endl;
	cout<<"Chasis  - "<<chasis<<endl;
	cout<<"Tipo  - "<<tipo<<endl;
	cout<<"Kilometraje  - "<<kilometraje<<endl;
	
	
	
	
	
	
	return 0;
}