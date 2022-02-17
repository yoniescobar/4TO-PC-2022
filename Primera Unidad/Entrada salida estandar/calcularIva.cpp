#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	float precio,iva,precioTotal;     //1. declarar variables
	
	cout<<"\n Ingrese el precio del Producto: ";  //2. Ingreso de datos
	cin>>precio;
	
					//3. proceso
	iva = precio * 0.12;
	precioTotal = precio + iva;
	
	cout<<"\n El iva de producto es: "<<iva;    //4. salida
	cout<<"\n El el precio con iva es: "<<precioTotal;
	
	
	getch();
}
