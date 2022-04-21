#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int i,numero;
  
  	cout<<"\n Ingrese un numero entero: ";
  	cin>>numero;
  	
   for(i=1; i<=10;i++){
   	   cout<<numero<<" x "<<i<<" = "<<(numero*i)<<endl;
   }
	
}
