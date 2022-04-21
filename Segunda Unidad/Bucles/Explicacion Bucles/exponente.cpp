#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int base,exponente,resultado=1;
	
	cout<<"Digite la Base: ";       cin>>base;
	cout<<"Digite el Exponente: ";  cin>>exponente;
	
	for(int i=1;i<=exponente;i++){
		
		resultado = resultado * base;
	}
	
	cout<<"Resultado de base: "<<base<<" exponente: "<<exponente<<" = "<<resultado;
	
	 getch();
}
