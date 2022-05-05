//imprimir un arreglo en orden inverso

#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	int nElementos;
	
	cout<<"Numero de Elementos: ";
	cin>>nElementos;
	
	int vecA[nElementos]; //estamos definiendo el tamaño del vector
	
	cout<<"\nLlenando el VecA"<<endl<<endl;
	
	for(int i=0;i<nElementos;i++){
		cout<<(i+1)<<"- Digite numero: ";
		cin>>vecA[i];
	}
	
	cout<<"\nMostrando el VecA de Forma Inversa"<<endl<<endl;
	for(int i=nElementos-1;i>=0;i--){
		cout<<vecA[i]<<endl;
	}
	
	
	getch();
}
