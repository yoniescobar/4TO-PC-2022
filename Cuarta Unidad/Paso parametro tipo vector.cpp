//Paso de parametros de tipo vector

#include<conio.h>
#include<iostream>
using namespace std;

void cuadrado(int vec[], int); //vector  y tamaño
void mostrar(int vec[], int);
int main(){
	const int tam=5;
	int vector[tam] = {1,2,3,4,5}; //paso 1 llenar el vector
	
	cuadrado(vector,tam); //paso 2 obtener el cuadrado
	mostrar(vector,tam); //paso 3 para mostrar el vector de cuadrados
	
	getch();
	return 0;
	
}

void cuadrado(int vec[], int n ){
	
	//se obtiene el cuadrado
	for(int i=0;i<n;i++){
		vec[i]=vec[i]*vec[i];
	}
	
	
}

void mostrar(int vec[], int n){
	//se imprime el vector
	
	for(int i=0;i<n;i++){
		cout<<vec[i]<<"  ";
	}
}

