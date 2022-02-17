/* Hacer un programa que lea de la entrada estandar los siguietnes datos de una persona
  edad:  entero
  sexo: char
  altura: real
*/

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	 int edad;
	 char sexo[10];
	 float altura;
	 
	 cout<<"\n Ingrese su edad: ";   cin>>edad;
	 cout<<"\n Ingrese su Sexo: ";   cin>>sexo;
	 cout<<"\n Ingrese altura: ";    cin>>altura;
	 
	 cout<<"\n\n+++++++++++ Tus Datos son +++++++++++++++";
	 cout<<"\nEdad: "<<edad;
	 cout<<"\nSexo: "<<sexo;
	 cout<<"\nAltura: "<<altura;

	
	getch();
}
