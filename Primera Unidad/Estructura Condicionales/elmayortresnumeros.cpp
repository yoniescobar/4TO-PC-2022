/*Escribir un programa que lea tres numeros y determine cuál de ellos
es mayor*/

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	
     	int  num1,num2,num3;   //1. declarar variables
		
	  cout<<"Ingrese el valor del numero 1: ";  //2. Ingresar datos
	  cin>>num1;
	  cout<<"Ingrese el valor del numero 2: ";  
	  cin>>num2;
	  cout<<"Ingrese el valor del numero 3: ";  
	  cin>>num3;
	  
	  
	    if((num1>num2) && (num1>num3)) {   // encuentra el mayor los 3 numeros              
		   cout<<"\nEl mayor es num1 : "<<num1;
		}else if((num2>num1) && (num2>num3)){
		   cout<<"\nEl mayor es num2 : "<<num2;	
		}else{
		   cout<<"\nEl mayor es num3 : "<<num3;	
		}   
		
		  if((num1<num2) && (num1<num3)) {   // encuentra el menor los 3 numeros              
		   cout<<"\nEl Menor es num1 : "<<num1;
		}else if((num2<num1) && (num2<num3)){
		   cout<<"\nEl Menor es num2 : "<<num2;	
		}else{
		   cout<<"\nEl Menor es num3 : "<<num3;	
		}                               
	
	
	getch();
}
