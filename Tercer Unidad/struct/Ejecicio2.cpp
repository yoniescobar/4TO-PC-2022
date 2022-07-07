#include <conio.h>   //1. declarar las cabeceras
#include <iostream>
#include <stdlib.h>  //trabajan cadenas  gets
#include <stdio.h>

using namespace std; //2. Using namespace std;

#define limite 100   //3. constantes

struct Auto{         //4. declar estructuras
	char placa[10];
	char color[50];
	char marca[50];
	float precio;
};
	                 //5. funciones


void llenarStructura();
void mostrarEstructa(Auto ve[]);
int cant;
Auto ve[limite];	//declaro un vector de Auto para 5 elementos

int main(){           //6. funcion main
	
	llenarStructura();
    mostrarEstructa(ve);//enviando la estructura de arreglo de datos
	
	getch();
	return 0;
}

void llenarStructura(){
     
     cout<<"\n Cuantos Autos desea Ingresar: ";
     cin>>cant;
     
     for(int i=0;i<cant;i++){  //llenando de autos el vector
     	cin.ignore();
		cout<<"\n ----------------Datos del Auto "<<(i+1)<<"------------------";
     	cout<<"\nPlaca: ";   gets(ve[i].placa);  
	    cout<<"Color: ";     gets(ve[i].color);
		cout<<"Marca: ";     gets(ve[i].marca);
		cout<<"Precio: ";    cin>>ve[i].precio;
	
	 }
	
}
void mostrarEstructa(Auto ve[]){
	cout<<endl;
	cout<<"                   Mostrando Datos del Auto                    "<<endl;
	cout<<"==============================================================="<<endl;
	cout<<"\nNo.\tPlaca\t\tColor\tMarca\tPrecio"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	
	 for(int i=0;i<cant;i++){  
     cout<<(i+1)<<": "<<"\t"<<ve[i].placa<<"\t\t"<<ve[i].color<<"\t"<<ve[i].marca<<"\t"<<ve[i].precio<<endl;    
	 cout<<"--------------------------------------------------------------"<<endl;	
	 }
}
