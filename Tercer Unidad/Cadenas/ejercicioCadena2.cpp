#include <iostream>
#include <conio.h>
#include <string.h> // cabecera para trabajar cadenas

using namespace std;

int main(){
	
	 char palabra[]= "zona 2"; //comillas para cadena 
	 char seccion = 'a'; //apostrofe sirve para una sola letra
	 int longitud = 0;
	 
	 longitud = strlen(palabra); //strlen cuenta las letras que tiene mi texto
	 
	 
	 cout<<"Longitud de texto: "<<longitud<<endl;

	
	getch();
	return 0;
}
