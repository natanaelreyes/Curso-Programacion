#include<iostream>


//ejercicio No. 3
using namespace std;

int main ()
{

	float notaespanol =0, notamate=0, notasociales=0, notanaturales=0, promedio=0;
	char nombreEstudiante [40];
	
	cout<<"Ingrese Nombre del Estudiante:  "; cin>>nombreEstudiante;
	cout<<"Ingrese el Nota de Lengua Espanol:  "; cin>> notaespanol;
	cout<<"Ingrese el Nota de Matematicas:  " ; cin>>notamate;
	cout<<"Ingrese el Nota de Ciencas Naturales:  " ; cin>>notanaturales;
	cout<<"Ingrese el Nota de  Cencias Sociales:   "; cin>>notasociales;
	
	
	promedio = (notaespanol + notamate + notasociales + notanaturales)/ 4;

	
	
	cout<<"\nEl Estudiante  "<<nombreEstudiante<<endl;
	cout<< "El Promedio del Estudiant es  "<<promedio<<endl;
	
	
	
	
	
	
	return 0;
}