/*
	Escriba un programa que solicite una edad e indique en la salida estandar
    si la edad ingresada esta en el rango de [18 - 25]:
*/

#include <conio.h>
#include <iostream>

using namespace std;

int main(){

      int edad;
      
      cout<<"Ingrese edad: ";
      cin>>edad; 
      
      if((edad>=18)&&(edad<=25)){
      	  cout<<"\nSu edad esta en el rango de [18-25]";
	  }else{
	  	 cout<<"\nSu edad NO esta en el rango establecido!!";
	  }

    getch();
    
}
