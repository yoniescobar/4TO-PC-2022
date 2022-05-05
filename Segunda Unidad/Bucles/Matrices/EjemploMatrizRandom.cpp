#include <conio.h>
#include <iostream>
#include<stdlib.h> //necesitamos estas dos librerias para usar random
#include<time.h>
using namespace std;

int main(){
	
	int matrizA[100][100],fila,col,num,suma=0;
	int sumFila[100],sumCol[100],setFila,setCol;
	
	cout<<"Digite tamanio del vector: ";
	cin>>fila;
	
	col=fila;
	
	//llenando el MatrizA con numeros aleatorios
		srand(time(NULL));
	
	for(int i=0;i<fila;i++){//-----> llenar la matriz y sumar
		for(int j=0;j<col;j++){ //recorre columnas
		   matrizA[i][j]= 1 +rand()%(10+1 - 1); //llenar con los datos de rango 1 - 100
		   suma = suma + matrizA[i][j];
		}
	}
	
	
		for(int i=0;i<fila;i++){//sumar las filas por filas
		   setFila=0; 
			for(int j=0;j<col;j++){ //recorre columnas
			  setFila= setFila + matrizA[i][j];
			}
		   sumFila[i]=setFila;
	     }
	     
	     
	     for(int i=0;i<col;i++){//sumar las columnas
		   setCol=0; 
			for(int j=0;j<fila;j++){ 
			  setCol= setCol + matrizA[j][i];
			}
		   sumCol[i]=setCol;
	     }
	     
	     
	      for(int i=0;i<col;i++){//sumar diagonales D1 y D2
			for(int j=0;j<fila;j++){ 
			  setCol= setCol + matrizA[j][i];
			}
	     }
	     
	     
	
	
	cout<<"\n ============ Mostrando la Matriz A==========="<<endl<<endl;
		for(int i=0;i<fila;i++){//rrecorre filas
			for(int j=0;j<col;j++){ //recorre columnas
		   		cout<<matrizA[i][j]<<"\t";
		}
		cout<<endl;
	}


   cout<<"\n ============= Resultados ====================="<<endl;
   cout<<"Suma: "<<suma<<endl<<endl;
    cout<<"\n ============= Suma Filas ====================="<<endl;
   for(int i=0;i<fila;i++){ //mostrar el vector de sumFilas 
      cout<<"Fila ["<<i<<"]: "<<sumFila[i]<<endl;
   
   }
    cout<<"\n ============= Suma Col ====================="<<endl;
	for(int i=0;i<col;i++){ //mostrar el vector de sumFilas 
      cout<<"Fila ["<<i<<"]: "<<sumCol[i]<<endl;
   
   }
	getch();
}
