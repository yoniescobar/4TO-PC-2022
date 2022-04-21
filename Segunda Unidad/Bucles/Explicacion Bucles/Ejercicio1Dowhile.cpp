#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int i=1,numero;
  
  	cout<<"\n Ingrese un numero entero: ";
  	cin>>numero;
  	
    do{
    	cout<<numero<<" X "<<i<<" = "<<(numero*i)<<endl;
    	i++;
	}while(i<=10);
	
}
