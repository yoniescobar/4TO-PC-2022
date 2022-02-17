#include <conio.h>
#include <iostream>
#define salarioBase 1000; //constante es dato que no cambia su valor durante el programa  

using namespace std;

int main(){
	
	float sueldoNeto,precioAuto,nautoVendidos; // declarar variables
	
	cout<<"\n Ingrese Cantidad de Autos Vendidos : ";
	cin>>nautoVendidos;
	cout<<"\n Ingrese Precio de Autos $: ";
	cin>>precioAuto;
	
	sueldoNeto =  (nautoVendidos*150)+ (precioAuto*0.05*nautoVendidos) + salarioBase;
	
	cout<<"\n Sueldo Neto: $: "<<sueldoNeto;

	getch();
}


