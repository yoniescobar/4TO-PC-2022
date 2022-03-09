#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){

	int numero;
	
	
	cout<<"\n Digite un numero: ";
	cin>>numero;
	
	if(numero<10){
		cout<<"\nEl numero tiene 1 digito";
	}else if(numero<100){
		cout<<"\nEl numero tiene 2 digito";
	}else if(numero<1000){
		cout<<"\nEl numero tiene 3 digito";
	}else if(numero<10000){
		cout<<"\nEl numero tiene 4 digito";
	}else if(numero<100000){
		cout<<"\nEl numero tiene 5 digito";
	}else{
		cout<<"\nEl numero tiene mas 5 digito";
	}

	getch();

}
