#include <iostream>
#include <conio.h>
#include <string.h> // cabecera para trabajar cadenas

using namespace std;

int main(){
	
	char frase1[50],frase2[50];
	
	cout<<"\n Ingrese un Frase: ";
	cin.getline(frase1,50,'\n');
	
	
	strcpy(frase2,frase1); //copiar cadena1 a cadena 2
	
	cout<<frase2<<endl;
	
	getch();
	return 0;
}
