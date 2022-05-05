#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	int nElementos;
	
	cout<<"\Ingrese la longitud de los vectores a sumar: ";
	cin>>nElementos;
	
	int vecA[nElementos];
	int vecB[nElementos];
	int suma[nElementos];
	
	cout<<"\n Ingresando valores al vector A "<<endl;
	for(int i=0;i<nElementos;i++){
		cout<<"Ingrese componente ["<<(i+1)<<"]: ";
		cin>>vecA[i];
	}
	
	cout<<"\n Ingresando valores al vector B "<<endl;
	for(int i=0;i<nElementos;i++){
		cout<<"Ingrese componente ["<<(i+1)<<"]: ";
		cin>>vecB[i];
	}
	
	cout<<"\n la Suma de los vecotes es: "<<endl;
	 for(int i=0;i<nElementos;i++){
	       suma[i] = vecA[i] + vecB[i];
	       cout<<" ["<<suma[i]<<"]  ";
		    
	 }
	 
	
	
	
	getch();
}
