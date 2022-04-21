#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int i=1,numero;
  
  	cout<<"\n Ingrese un numero entero: ";
  	cin>>numero;
  
  
     while(i<=10){
     	cout<<numero<<" X "<<i<<" = "<<(i*numero)<<endl;
     	i++;
	 }
	
}
