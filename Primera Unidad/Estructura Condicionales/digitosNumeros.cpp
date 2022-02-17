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
	
	if((numero>=0)&&(numero<=9)){
		cout<<" El numero esta compuesto por 1 digito";
	}
	
		if((numero>=10)&&(numero<=99)){
		cout<<" El numero esta compuesto por 2 digito";
	}
	
		if((numero>=100)&&(numero<=999)){
		cout<<" El numero esta compuesto por 3 digito";
	}
	
		if((numero>=1000)&&(numero<=9999)){
		cout<<" El numero esta compuesto por 4 digito";
	}else{
		cout<<" El numero esta compuesto por Mas de 4 digito";
	}
	
	getch();	
	
}
