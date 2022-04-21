#include <iostream>
#include <conio.h>


using namespace std;

int main(){
	
	int opcion;
	
	do{  system("cls"); 
		cout<<"\n M E N U  D E  O P C I O N E S";
		cout<<"\n 1. Opcion A";
		cout<<"\n 2. Opcion B";
		cout<<"\n 3. Opcion C";
		cout<<"\n 4. Salir";
		cout<<"\n Ingrese una Opcion valida: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: system("cls");  cout<<"Bienvenidos a la Opcion A";  getch(); break;
			case 2: system("cls");  cout<<"Bienvenidos a la Opcion B";  getch(); break;
			case 3: system("cls");  cout<<"Bienvenidos a la Opcion C";  getch(); break;
			case 4: system("cls");  cout<<"Hasta Pronto";  getch(); break;
		}
		
		
	}while(opcion!=4);
	
	
	
	getch();
}
