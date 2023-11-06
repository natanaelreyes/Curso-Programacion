#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	float sbruto, sneto, irs, ars, afp, infotep, descuentos;
	
	cout<<"Digite su Sueldo Bruto : ";
	cin>>sbruto;
	
	if (sbruto <=20000){
		
		afp = sbruto *1;
		ars = sbruto *0.013;
		irs = 0;
		infotep = sbruto *0.001;
	}	
	if (sbruto >=20001 <50000){
		
		afp = sbruto *0.08;
		ars = sbruto *0.011;
		
		infotep = sbruto *0.001;
		
		if (sbruto <34500){
			irs = sbruto* 0.015;
		}
	}
	if (sbruto <=50001)
	{
		afp = sbruto *0.01;
		ars = sbruto *0.0101;
		irs = sbruto* 0.035;
		infotep = sbruto *0.001;
			
	}
	descuentos = afp + ars + irs + infotep;
	sneto = sbruto -  descuentos;
	
	cout<<"\nSueldo Bruto : "<<sbruto<<endl;
	cout<<"Descuentos  "<<endl;
	cout<<"AFP  "  <<afp<<endl;
	cout<<"ARS  "  <<ars<<endl;
	cout<<"IRS  "  <<irs<<endl;
	cout<<"INFOTEP  "  <<infotep<<endl;
	cout<<"Su Suelo neto es :  "<<sneto<<endl;
	
	
	
	
	
	
	
	
	getch();
	return 0;
}