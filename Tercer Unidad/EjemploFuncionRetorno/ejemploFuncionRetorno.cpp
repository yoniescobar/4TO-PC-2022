#include<conio.h>
#include<iostream> 
using namespace std;

int convertirBinario(int n);

int main(){
	int numero;
	int numCubo;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	numCubo = convertirBinario(numero);//2
	
	cout<<"El cubo del numero es: "<<numCubo;
}

int convertirBinario(int n) //cubo  2*2*2 = 8
{
		int cubo = n*n*n;
		
		
		return cubo;
}
