//paso de parametros de tipo matriz
#include<conio.h>
#include<iostream>
using namespace std;


void llenarMatriz();
void mostrarMatriz(int m[3][3],int nFila, int nCol );

int main(){
	
	 
     llenarMatriz();
   
	getch();
	return 0;
}

void llenarMatriz(){
	const int NFILA = 3;
	const int NCOL =3;
	int matrizA[NFILA][NCOL]={ 
	                            {1,2,3},
								{4,5,6},
								{4,5,6}	
	
	                          };
	                          
	                          
	mostrarMatriz(matrizA,NFILA,NCOL); // desde la funcion llenarMatriz llamo a mostrar Matriz.
}

void mostrarMatriz(int m[3][3],int nFila, int nCol ){
	
	cout<<"\n Los valores de la Matriz son: "<<endl<<endl;
	
	for(int i=0;i<nFila;i++){ //filas
		for(int j=0;j<nCol;j++){//columnas
		
			cout<<m[i][j]<<"  ";
		}
		cout<<endl; //salto de linea
	}
}


