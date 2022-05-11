#include <conio.h>
#include <iostream>
#include <stdlib.h> //sirve para limpiar pantalla
using namespace std;

int main(){
	
	int opcion;
	int matrizA[100][100],n;
	
	do{
		system ("CLS"); //limpia la pantalla
		cout<<"\n	M E N U  P R I N C I P A L";
		cout<<"\n 1. -Matriz  Forma A";
		cout<<"\n 2. -Matriz  Forma B";
		cout<<"\n 3. -Matriz  Forma C";
		cout<<"\n 4. -Matriz  Forma D";
		cout<<"\n 5. -Salir de la Aplicacion";
		cout<<"\n\n Digite un Opcion valida: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: system ("CLS"); //limpia la pantalla  
					cout<<"\n Forma A"<<endl;
					cout<<"Digite el tamanio de la Matriz: ";
					cin>>n;
					  // aqui se escribe el algoritmo para llenar la matriz y mostra la matriz
					
					getch();
					break;
			case 2: system ("CLS"); //limpia la pantalla  
					cout<<"\n Forma B"<<endl;
					cout<<"Digite el tamanio de la Matriz: ";
					cin>>n;
					  // aqui se escribe el algoritmo para llenar la matriz y mostra la matriz
					
					getch();
					break;
		   case 3: system ("CLS"); //limpia la pantalla  
					cout<<"\n Forma C"<<endl;
					cout<<"Digite el tamanio de la Matriz: ";
					cin>>n;
					  // aqui se escribe el algoritmo para llenar la matriz y mostra la matriz
					
					getch();
					break;
		 case 4: system ("CLS"); //limpia la pantalla  
					cout<<"\n Forma D"<<endl;
					cout<<"Digite el tamanio de la Matriz: ";
					cin>>n;
					  // aqui se escribe el algoritmo para llenar la matriz y mostra la matriz
		  			
					  getch();
		  			break;
		  case 5: system ("CLS"); //limpia la pantalla  
		  			cout<<"\n Hasta la vista Baby....!";
		  	    	break;	
		  			default: cout<<"\n La Opcion no es Valida.. Intente Nuevamente...";
		  			
					getch();
					break;	
					
		}
		
	}while(opcion!=5);
	
	
	
	getch();
}
