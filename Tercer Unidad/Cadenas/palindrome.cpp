#include <iostream>
#include <conio.h>
#include <string.h> // cabecera para trabajar cadenas

using namespace std;

int main(){

   char cadena1[50],cadena2[50];
				
   cout<<"\n Ingrese una palabra: ";
   gets(cadena1);
   
   strcpy(cadena2,cadena1); //copiar cadena1 a cadena 2
   strrev(cadena2); //palabra alreves
	
	if(strcmp(cadena1,cadena2)==0){  //strcmp  comparar 2  cadenas
		cout<<"\n Es una palabra Palindrome";	
	}else{
		cout<<"\n No es una Palabra Palindrome";
	}
	
	
		   getch();
	return 0;
}
