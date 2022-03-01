#include <conio.h>
#include <iostream>

using namespace std;

int main() {
	//1. Declarar variables
	char nombreCliente[30];
	int tipoCliente, cantidad;
	float precioUnit,subtotal,descuento=0,netoPagar;
	
	//2. Ingresar los datos requeridos
	cout<<"Ingrese el nombre del Cliente: ";
	cin>>nombreCliente;
	cout<<"Tipo Cliente(1,2,3): ";
	cin>>tipoCliente;
	cout<<"Cantidad de Libros Q. ";
	cin>>cantidad;
	cout<<"Precio Unitario: ";
	cin>>precioUnit;
     
     //3. procesos realizar los calculos
     subtotal = cantidad * precioUnit;
     
      //se obtiene el descuento con el if           
     if(tipoCliente ==1){
     	descuento = subtotal * 0.30;
	 }else if(tipoCliente ==2){
	 	descuento = subtotal * 0.20;
	 }else if(tipoCliente == 3){
	 	descuento = subtotal * 0.10;
	 }else{
	 	descuento = 0;
	 }
	 
	 //se calcula el valor Neto del producto
     netoPagar = subtotal - descuento;
     
     //mostrar datos
     cout<<"\n\n========== Factura ===========";
     cout<<"\n Nombre del Cliente: "<<nombreCliente;
     cout<<"\n Subtotal Q. "<<subtotal;
     cout<<"\n Descuento Q. "<<descuento;
     cout<<"\n Total a Pagar Q. "<<netoPagar;
     cout<<"\n\n ¡Gracias por preferirno...";
	
	getch();
}
