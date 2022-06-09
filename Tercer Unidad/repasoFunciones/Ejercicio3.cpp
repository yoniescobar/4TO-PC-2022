#include<conio.h>    //1. cabeceras
#include<iostream>
using namespace std;

#define maxCol 1000   //2. constantes
#define maxFila 1000

void menuPrincipal();  //3. funciones
void llenarMatriz(); 
void mostrarMatriz(int matrizA[maxCol][maxFila],int nFila, int nCol);

int matriz[maxCol][maxFila];                       //4. variables globales
int nFila=0, nCol=0;

int main(){
	
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
		 	
		 }
		 
		
	}while(opcion!='5');
	

}

 void llenarMatriz(){
 	system("cls"); //limpia pantalla
 	
 	cout<<"<======= Fucion LLenar Matriz =======>"<<endl;
 	cout<<"Ingrese el numero Fila: ";
 	cin>>nFila;
    cout<<"Ingrese el numero Columna: ";
 	cin>>nCol;
 	
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

