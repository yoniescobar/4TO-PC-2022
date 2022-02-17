#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	int saldoInicial = 1000;
	int opcion;
	float retirar,depositar,saldoActual;
	
	cout<<"\n  CAJERO 5B "<<endl;
	cout<<"\n  1. Depositar Dinero";
	cout<<"\n  2. Retirar Dinero";
	cout<<"\n  3. Salir";
	cout<<"\n\n Ingrese un apcion valida: ";
	cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"\n Monto a depositar Q. ";
				cin>>depositar;
				saldoActual = saldoInicial + depositar;
				cout<<"\n Saldo Actual Q. "<<saldoActual;
				break;
				
		case 2: cout<<"\n Monto a retirar Q. ";
				cin>>retirar;
				    
				if(retirar>saldoInicial){
          			 cout<<"\n---Saldo Insuficiente!!";
       				}
					else{
          			       saldoActual = saldoInicial - retirar;
             	       	   cout<<"\n Saldo Actual Q. "<<saldoActual;
             	     	}
        		break;
        		
		case 3: cout<<"\n Hasta Pronto!!!";
		        break;
		        
		    default :
		    	cout<<"\n No esta en el rango [1 al 3] intente nuevamente!!!";
	   
	}
				

	getch();
}
