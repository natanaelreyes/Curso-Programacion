#include<iostream>
#include<string.h>
#include<conio.h>
#include<algorithm>

using namespace std;

int main (){ 
	string a;
	
	cout<<"ingresa el texto:  ";
	cin>>a;
	sort(a.begin(),a.end());
	cout<<"el orden de esta cadena es el siguiente:  "<<a;
		
	
	
	getch();
	return 0;





	

}