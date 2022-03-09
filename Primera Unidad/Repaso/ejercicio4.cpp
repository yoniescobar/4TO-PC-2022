/*Intercambiar dos numeros*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	int a,b,aux;
	
	cout<<"Ingrese valor A: ";
	cin>>a;
	cout<<"Ingrese valor B: ";
	cin>>b;
	
	//proceso
	aux = a;
	a = b;   
	b = aux;
	
    cout<<"\n Valor de A: "<<a;
    cout<<"\n Valor de B: "<<b;
    
	
	getch();
}
