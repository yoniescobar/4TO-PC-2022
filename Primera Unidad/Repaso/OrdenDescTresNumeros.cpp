#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int a,b,c;
	cout<<"\n Usuario Ingrese 3 numeros distintos!!!\n\n";
	
	cout<<"Ingrese el valor a: ";
	cin>>a;
	cout<<"Ingrese el valor b: ";
	cin>>b;
	cout<<"Ingrese el valor c: ";
	cin>>c;
	
	if((a!=b) && (b!=c )){ //valida que sean distinto los numeros
		
		if((a>b) && (b>c)){
			cout<<"\n Orden Desc: "<<a<<" - "<<b<<" - "<<c;
		}
		else if((a>c) && (c>b)){
			cout<<"\n Orden Desc: "<<a<<" - "<<c<<" - "<<b;
		}
		else if((b>c) && (c>a)){
			cout<<"\n Orden Desc: "<<b<<" - "<<c<<" - "<<a;
		}
		else if((b>a) && (a>c)){
			cout<<"\n Orden Desc: "<<b<<" - "<<a<<" - "<<c;
		}
		else if((c>a) && (a>b)){
			cout<<"\n Orden Desc: "<<c<<" - "<<a<<" - "<<b;
		}
		else{
			cout<<"\n Orden Desc: "<<c<<" - "<<b<<" - "<<a;
		}
	
		
	}else{ // cierra la validacion de numeros distinto los numeros
		cout<<"\nDebe ingresar numeros ditintos!!!";
	}
	

	

getch();

}
