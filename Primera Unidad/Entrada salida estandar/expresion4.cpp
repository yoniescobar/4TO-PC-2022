#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float a,b,res;
	
	cout<<"Ingrese el valor a: ";
	cin>>a;
	cout<<"Ingrese el valor b: ";
	cin>>b;
	
	res = pow(pow((a+b),2),2);
	
	cout<<"\n\n La respuesta de es: "<<res;
	
	getch();
}


