#include <conio.h>   //1. declarar las cabeceras
#include <iostream>
#include <stdlib.h>  //trabajan cadenas  gets
#include <stdio.h>

using namespace std; //2. Using namespace std;

#define cantidad 2   //3. constantes

struct Auto{         //4. declar estructuras
	char placa[10];
	char color[50];
	char marca[50];
	float precio;
};
	                 //5. funciones
void mostrarEstructa(){
     Auto ve[cantidad];	//declaro un vector de Auto para 5 elementos
     
     for(int i=0;i<cantidad;i++){  //llenando de autos el vector
     	cout<<"\n ----------------Datos del Auto "<<(i+1)<<"------------------";
     	cout<<"\nPlaca: ";   gets(ve[i].placa);  
	    cout<<"Color: ";     gets(ve[i].color);
		cout<<"Marca: ";     gets(ve[i].marca);
		cout<<"Precio: ";    cin>>ve[i].precio;
		cin.ignore();
	 }
     
}

int main(){           //6. funcion main
	
	mostrarEstructa();
	
	getch();
	return 0;
}
