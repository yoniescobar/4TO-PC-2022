#include <iostream>
#include <conio.h>
#include <string.h> // cabecera para trabajar cadenas

using namespace std;

int main(){
	
	char frase[100];
	int longitud=0;
	
	cout<<"\n Ingrese un Frase: ";
	cin.get(frase,100,'\n');    //gets(frase);
	
	longitud = strlen(frase); //estamos contando la longitud del texto
	
	if(longitud>10){
		cout<<frase<<endl;
	}
	

	
    getch();
	return 0;
}
