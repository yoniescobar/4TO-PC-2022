#include <iostream>
#include <conio.h>
#include <string.h> // cabecera para trabajar cadenas

using namespace std;

int main(){
	
	
	char palabra[]= "Yoni";
	char palabra2[]= {'y','o','n','i'};
	char direccion[50];
	
	cout<<"Ingrese su direccion: ";
    cin.getline(direccion,50,'\n');   //gets(nombre) forma leer cadena;
	
	cout<<direccion<<endl;
	
	
	
	getch();
	return 0;
	
}
