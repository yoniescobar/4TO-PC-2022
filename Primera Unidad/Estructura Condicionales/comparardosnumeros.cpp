/*Escribir un programa que lea dos numeros y determine cuál de ellos
es mayor*/

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	
     	int  num1,num2;   //1. declarar variables
		
	  cout<<"Ingrese el valor del numero 1: ";  //2. Ingresar datos
	  cin>>num1;
	  cout<<"Ingrese el valor del numero 2: ";  
	  cin>>num2;
	  
	    if(num1==num2){
		   cout<<"\n Ambos numeros son iguales";
		}else if(num1>num2) {                  //anidar else if
		   cout<<"\nEl mayor es: "<<num1;
		}else{
		   cout<<"\nEl mayor es: "<<num2;
		}                                   //3. proceso
	
	
	getch();
}
