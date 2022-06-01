#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	string clave;
	
	do{
		cout<<"\n Ingrese password: ";
		getline(cin,clave);
	}while(clave.length()<8);
	
}
