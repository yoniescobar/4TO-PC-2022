#include <conio.h>
#include <iostream>
#include <math.h>   //esta cabecera sirve para funciones matematicas. raiz o potencia

using namespace std;

int main(){
	
	float x,y,resultado;
	
	
	cout<<"\n Ingrese valor de x: "; cin>>x;
	cout<<"\n Ingrese valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\n El resultado es: "<<resultado;
	
	

	getch();
}
