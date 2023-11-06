//ejercicio 4
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main ()
{
	char matricula[20], color[20], modelo[20], tipo[20], chasis[20], marca[20], descripcion[20];
	int ano;
	
	cout<<"Ingrese la Marca del Vehiculo: ";
	cin.getline(marca,20,'\n');
	cout<<"Ingrese la Modelo del Vehiculo: ";
	cin.getline(modelo,20,'\n');
	cout<<"Ingrese la Tipo del Vehiculo: ";
	cin.getline(tipo,20,'\n');
	cout<<"Ingrese la Chasis del Vehiculo: ";
	cin.getline(chasis,20,'\n');
	cout<<"Ingrese la Descripcion del Vehiculo: ";
	cin.getline(descripcion,20,'\n');
	cout<<"Ingrese la Matricula del Vehiculo: ";
	cin.getline(matricula,20,'\n');
	cout<<"Ingrese la Color del Vehiculo: ";
	cin.getline(color,20,'\n');
	cout<<"Ingrese el A:o del Vehiculo"  ;
	cin>>ano;
	
	
	cout<<"\nMARCA:   "<<marca<<endl;
	cout<<"MODELO  "<<modelo<<endl;
	cout<<"A;O  :   "<<ano<<endl;
	cout<<"TIPO :   "<<tipo<<endl;
	cout<<"CHASIS:   "<<chasis<<endl;
	cout<<"DESCRIPCION:   "<<descripcion<<endl;
	cout<<"MATRICULA:   "<<matricula<<endl;
	cout<<"COLOR:   "<<color<<endl;
	
	
	
	return 0;
	
}