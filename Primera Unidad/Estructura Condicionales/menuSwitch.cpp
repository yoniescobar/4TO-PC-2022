/*Escribir un programa que haga un menu de opciones
	MENU DE AREAS
	1.- Area de un cuadrado
	2.- Area de un Rectangulo
	3.- Area de un Triangulo
	4.- Salir
	Ingrese una opcion valida: 1
*/

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	   int opcion;
	   
	   cout<<"\n\nMENU DE AREAS"<<endl;
	   cout<<"\n1. Area de un Cuadrado";
	   cout<<"\n2. Area de un Rectangulo";
	   cout<<"\n3. Area de un Triangulo";
	   cout<<"\n4. Salir";
	   
	   cout<<"\n\nIngrese Opcion Valida :";
	   cin>>opcion;
	   
	   switch(opcion){
	   	 case 1: cout<<" Bienvenido a Area de un Cuadrado";   break;
	   	 case 2: cout<<" Bienvenido a Area de un Rectangulo"; break;
	   	 case 3: cout<<" Bienvenido a Area de un Triangulo";  break;
	   	 case 4: cout<<" Opcion de Salir hasta pronto!!! ";   break;
	     default:  cout<<"\n No esta en el rango de 1- 4 vuelva a intentarlo ";   break;
	   }
     
	getch();
}
