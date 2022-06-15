#include<conio.h>    //1. cabeceras
#include<iostream>
#include<stdio.h>
using namespace std;

#define maxCol 1000   //2. constantes
#define maxFila 1000

void menuPrincipal();  //3. funciones
void llenarMatriz(); 
void mostrarMatriz(int matrizA[maxCol][maxFila],int nFila, int nCol);
void sumarDiagonal1(int matriz[maxCol][maxFila],int nFila, int nCol);
void sumarDiagonal2(int matriz[maxCol][maxFila],int nFila, int nCol);

int matriz[maxCol][maxFila];                       //4. variables globales
int nFila=0, nCol=0;

int main(){
	system("COLOR 8E");
    menuPrincipal();	 
  
	getch();
	return 0;
}
void menuPrincipal(){
	
	char opcion;
	
	do{ 
	     system("cls"); //limpia pantalla
	     cout<<"<======= Operaciones Con Matriz =======>"<<endl;
	     cout<<"1. llenar Matriz"<<endl;
	     cout<<"2. Mostrar Matriz"<<endl;
	     cout<<"3. Sumar Primera Diagonal"<<endl;
	     cout<<"4. Sumar Segunda Diagonal"<<endl;
	     cout<<"5. Salir"<<endl<<endl;
	     cout<<"Elija una Opcion valida:  ";   cin>>opcion;
		 
		 switch(opcion){
		 	case '1': llenarMatriz();  getch(); break;
		 	case '2': mostrarMatriz(matriz,nFila,nCol);  getch(); break;
			case '3': sumarDiagonal1(matriz,nFila,nCol);  getch(); break;
			case '4': sumarDiagonal2(matriz,nFila,nCol);  getch(); break;		 	
		 }
		 
		
	}while(opcion!='5');
	

}

 void llenarMatriz(){
 	system("cls"); //limpia pantalla
 	
 	cout<<"<======= Fucion LLenar Matriz =======>"<<endl;
 	cout<<"Ingrese el numero el tamnio de la Matriz: ";
 	cin>>nFila;
    
     nCol=nFila;
 	
 	matriz[nFila][nCol]; //redefiniendo el tamaño
 	
 	for(int i=0;i<nFila;i++){ 
 		for(int j=0;j<nCol;j++){
 			cout<<"Ingrese el valor en la posicion ["<<i<<"]["<<j<<"]: ";
 			cin>>matriz[i][j];
		 }
	 }
 	
 
 }
 
 void mostrarMatriz(int matrizA[maxCol][maxFila],int nFila, int nCol){
 	system("cls"); //limpia pantalla
 	cout<<"\n<======= Fucion Mostrar Matriz=======>"<<endl<<endl;
 		for(int i=0;i<nFila;i++){ 
 		for(int j=0;j<nCol;j++){
 			cout<<matriz[i][j]<<"\t";
		 }
		 cout<<endl;
	 }
 	
 }
void sumarDiagonal1(int matriz[maxCol][maxFila],int nFila, int nCol){
	system("cls"); //limpia pantalla
	 mostrarMatriz(matriz,nFila,nCol); 
	int sumaD1=0;
	
	 for(int i=0;i<nFila;i++){ 
 		for(int j=0;j<nCol;j++){
 			 if(i==j)
			  	sumaD1+=matriz[i][j];
		 }
	 }
	 
	 cout<<"\n La suma de la Primera Diagonal es: "<<sumaD1;
}
void sumarDiagonal2(int matriz[maxCol][maxFila],int nFila, int nCol){
	system("cls"); //limpia pantalla
	 mostrarMatriz(matriz,nFila,nCol); 
	int sumaD2=0;
	
	 for(int i=0;i<nFila;i++){ 
 		for(int j=0;j<nCol;j++){
 			 if(i+j==nFila-1) //tamaño de la matriz
			  	sumaD2+=matriz[i][j];
		 }
	 }
	 
	 cout<<"\nLa suma de la Segunda Diagonal es: "<<sumaD2;
}
