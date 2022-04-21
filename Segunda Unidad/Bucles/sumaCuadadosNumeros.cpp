#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int i,sumaCuadrados=0,numeros;
	
	cout<<"\n Cuantos numeros deseas ver: ";
	cin>>numeros;
	
	cout<<"Numero\t\tcuadrado"<<endl;
	
	for(i=1;i<=numeros;i++){
		
		sumaCuadrados = sumaCuadrados+ i*i;  
		cout<<i<<"\t\t"<<i*i<<endl;
	}
		
		cout<<"\n La sumatoria de Cuadrados es: "<<sumaCuadrados;
	getch();
}
