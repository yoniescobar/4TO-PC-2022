#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	int fila,col;  
	
	cout<<"Digite el numero de Filas: ";
	cin>>fila;
	cout<<"Digite el numero de Columnas: ";
	cin>>col;
	
	int numeros[fila][col]; //definiendo el tamño de la matriz
	
	//llenando los valores de la matriz
	for(int i=0;i<fila;i++) //recorriendo fila
	{
		for(int j=0;j<col;j++){ //recoririendo columnas
			cout<<"-Digite el numero en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"\n Mostrando los valores de la Matriz "<<endl;
	for(int i=0;i<fila;i++){ //recorre fila
		cout<<"--------------------------------"<<endl;
		for(int j=0;j<col;j++){//recorre columnas
			cout<<numeros[i][j]<<"\t";
		}
		cout<<endl; //salto de linea
	}
	
	
	

	getch();
}
