/* Imprimir si un es positivo, negativo o neutro*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	int numero = 0;
	
	if(numero>0){
		cout<<"\n El numero es positivo: "<<numero;
	}else if(numero<0){
		cout<<"\n El numero es Negativo: "<<numero;
	}else{
		cout<<"\n El numero es Neutro: "<<numero;
	}
		
	getch();
}
