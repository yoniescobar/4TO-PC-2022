#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int nElementos;
	
	cout<<"\n cuantas notas desea ingresar: ";
	cin>>nElementos; 
	
	int notas[nElementos]; //aqui estoy definiendo el tamaño del vector
	
	for(int i=0;i<nElementos;i++){ //este ciclo llena el vector
		cout<<"Nota en la posicion "<<"["<<i<<"]"<<": ";
		cin>>notas[i];
	}
	
	cout<<"\n Las notas Ingresadas Fueron "<<endl;
	
	for(int i=0;i<nElementos;i++){ //este ciclo Muestra los valores del vector
		
		cout<<notas[i]<<endl;
	}
	
	
	
	
	
	
	getch();
}
