/*Hacer un programa que ingrese numeros enteros positivos o negativo hasta que 
se intruzca un 0, en ese momento el programa debe terminar y mostrar en la salida */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero,contarPositivo=0,contarNegativo=0;
	int sumaPositivo=0,sumaNegativo=0;
	
	cout<<"Ingrese numero : ";
	cin>>numero; 
	
	while(numero!=0){
			if(numero>0){
			   contarPositivo++;
			   sumaPositivo=sumaPositivo+numero;	
			}
		
			if(numero<0){
			   contarNegativo++;
			   sumaNegativo=sumaNegativo+numero;	
			}
				cout<<"Ingrese otro numero : ";
	  			cin>>numero; //seguir ingresando más numeros
	}
	
	cout<<"\n Cantidad Positivos: "<<contarPositivo;
	cout<<"\n Cantidad Negativos: "<<contarNegativo;
	cout<<"\n Suma Positivos: "<<sumaPositivo;
	cout<<"\n Suma Negativos: "<<sumaNegativo;
	
	
	
 
	getch();
}

