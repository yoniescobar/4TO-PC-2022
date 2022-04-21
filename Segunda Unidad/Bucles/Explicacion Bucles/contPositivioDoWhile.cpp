#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int numero,contPositivos=0;
	
	do{
		cout<<"Digite un numero: ";
		cin>>numero;
		
		if(numero>0){
			contPositivos++;
		}
		
	}while(numero!=0); //ingrese numeros mientras no sea el 0
	
	cout<<"\n Numeros mayores que cero: "<<contPositivos;
		
	getch();
}
