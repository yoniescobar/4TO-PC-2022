#include <iostream>
#include <conio.h>
#include <string.h> // cabecera para trabajar cadenas

using namespace std;

int main(){
	
	char palabra1[]="Hola";
	char palabra2[]="HolA";
	
	if(strcmp(palabra1,palabra2)==0){  //strcmp  comparar 2  cadenas
		cout<<"\n Ambas cadenas son iguales";	
	}else{
		cout<<"\n Ambas cadenas NO son iguales";
	}
	
	
	
    getch();
	return 0;
}
