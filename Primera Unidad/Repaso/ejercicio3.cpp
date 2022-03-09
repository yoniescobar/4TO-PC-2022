#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	float numero,decimal;
	int entero;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	entero = numero;
	decimal = numero-entero;
	
	cout<<"\n Numero: "<<numero;
	cout<<"\n Entero: "<<entero;
	cout<<"\n Decimal: "<<decimal;

		
	getch();
}
