#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	int numeros[3][3] = {
	                     {1,2,3},
						 {4,5,6},
						 {7,8,9}
						 };
	
	for(int i=0;i<3;i++){ //el primer ciclo for recorre filas
		cout<<"----------------------"<<endl;
		for(int j=0;j<3;j++){ //segundo ciclo for recorre columnas
			cout<<numeros[i][j]<<"\t";
		}
		cout<<endl; //salto de linea
	}
	
	
	getch();
}
