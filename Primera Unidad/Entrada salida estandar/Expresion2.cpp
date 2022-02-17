#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	float a,b,c,d,e,f,res;
	
	
	cout<<"Ingrese valor a: "; cin>>a;
	cout<<"Ingrese valor b: "; cin>>b;
	cout<<"Ingrese valor c: "; cin>>c;
	cout<<"Ingrese valor d: "; cin>>d;
	cout<<"Ingrese valor e: "; cin>>e;
	cout<<"Ingrese valor f: "; cin>>f;
	
	res = (a+(b/c))/(d+(e/f));
	
	
	cout<<"\n El resultado es: "<<res;
		
	getch();
}
