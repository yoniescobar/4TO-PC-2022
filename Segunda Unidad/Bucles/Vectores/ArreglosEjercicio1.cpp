#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n,suma=0,mayor=0,menor=9999999; //se asigna este valor de referencia
	int posMayor=0,posMenor=0,media=0;
	
	cout<<"Digete el tamanio del vector: ";
	cin>>n;
	
	int numeros[n]; //estamos definiendo el tamaño del vector
	
	for(int i=0;i<n;i++){ //aqui estoy llenando el vector
		cout<<"Ingrese numero "<<(i+1)<<": ";
		cin>>numeros[i];
		suma = suma + numeros[i];
		    
		if(numeros[i]>mayor){ //calculando el mayor de los numeros en el vector
			mayor = numeros[i]; //80
			posMayor++;
			
		}
		if(numeros[i]<menor){ //calculando el menor de los numeros en el vector
			menor = numeros[i]; //20
			posMenor++;
		}
		
	}
	//calcular el promedio
	media = suma /n; 
	
	
	cout<<"\n El mayor es: "<<mayor<<" posicion: "<<"["<<posMayor<<"]";
	cout<<"\n El Menor es: "<<menor<<" posicion: "<<"["<<posMenor<<"]";
	cout<<"\n La suma es : "<<suma;
	cout<<"\n El Promedio es: "<<media;
	
	getch();
}
