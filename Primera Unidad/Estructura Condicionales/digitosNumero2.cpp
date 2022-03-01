/*
  Hacer un programa que ingrese un numero entero  y que indique de cuantos digitos 
  esta compuesto el numero que ingreso:
  ejemplo:  150
             esta compuesto por 3 digitos
*/

#include <conio.h>
#include <iostream>

using namespace std;

int main(){

	int numero;
	
	cout<<"\n Ingrese un numero entero: ";
	cin>>numero;
	
	if(numero<10){
		cout<<" El numero esta compuesto por 1 digito";
	}else if(numero<100){
		cout<<" El numero esta compuesto por 2 digito";
	}else if(numero<1000){
		cout<<" El numero esta compuesto por 3 digito";
	}else if(numero<10000){
		cout<<" El numero esta compuesto por 4 digito";
	}else if(numero<100000){
		cout<<" El numero esta compuesto por 5 digito";
	}else{
			cout<<" El numero esta compuesto por MAS DE >5 digito";
	}
	
	getch();	
	
}
