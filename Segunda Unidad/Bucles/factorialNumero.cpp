#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	 int numero,factorial=1;
	 
	 cout<<"\n Ingrese un numero: ";
	 cin>>numero; //5
	                  //5
	 for(int i=1;i<=numero;i++){ 
	 	factorial = factorial * i; 
	 	cout<<i<<endl;
	 }

	cout<<" El factorial del Numero es: "<<factorial;
	
 getch();
}
