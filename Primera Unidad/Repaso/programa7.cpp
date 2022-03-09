/* Imprimir si numero es par, impar o neutro*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"\n Ingrese un Digito: ";
	cin>>numero;
	
	if(numero%2==0){
		cout<<"\n El numero es Par: "<<numero;
	}else{
		cout<<"\n El numero es Impar: "<<numero;
	}
		
	getch();
}
