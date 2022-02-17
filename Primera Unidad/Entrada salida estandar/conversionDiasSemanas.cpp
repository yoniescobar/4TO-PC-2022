#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int totalhoras,semanas,dias,horas;  //1. declarar variables
	
	cout<<"Ingrese el Total de Horas: ";  //2. ingresar datos 
	cin>>totalhoras;
	
										//3. calculos
	semanas = totalhoras/168;
	dias    = (totalhoras%168)/24;      //---->160
	horas   =  totalhoras % 24;
	
	cout<<"\n Semanas: "<<semanas;
	cout<<"\n Dias: "<<dias;
	cout<<"\n Horas: "<<horas;
	
	getch();
	
	}
