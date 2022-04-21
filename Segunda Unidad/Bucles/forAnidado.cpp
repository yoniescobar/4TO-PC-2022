#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int fila;
	
	 cout<<"Ingrese la altura del Triangulo: "; cin>>fila;
	    
		for(int i=1;i<=fila;i++){ //controla filas
	    	 for(int j=1;j<=i;j++){ //for interno
			 	cout<<"*";
			 }
			 cout<<"\n";
		}

	 getch();
}
