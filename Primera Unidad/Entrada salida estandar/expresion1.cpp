#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	float a,b,c,d,res;
	
	cout<<"\n Ingrese 4 numeros enteros: "<<endl;
	cout<<"Ingrese valor a: ";
	cin>>a;
	cout<<"Ingrese valor b: ";
	cin>>b;
	cout<<"Ingrese valor c: ";
	cin>>c;
	cout<<"Ingrese valor d: ";
	cin>>d;
	
	res = (a+b)/(c+d);
	
	cout<<"\n El resultado es: "<<res;
		
	getch();
}
