#include <iostream>
#include <stdlib.h>
#include <string.h>  //gets  -- getline sirven para leer cadenas
#include <fstream> //para manipular archivos
using namespace std;

struct Datos{
	string nombre,apellido,telefono; 
}datos;

void menu();
void crear_registro();
void agregar_registro();
void visualizar_registro();

int main(){
	
	 menu();	
	system("pause");
	return 0;
}

void menu(){
	int opcion;
	
	do{ 
	    system("cls");
		cout<<"\t M E N U  P R I C I P A L"<<endl;
		cout<<"1. Crear Registro( nombre, apellido,telefono)"<<endl;
		cout<<"2. Agregar mas contactos (nombre, apellido,telefono)"<<endl;
		cout<<"3. Visualizar lista de Contactos"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Ingrese un opcion valida: "; cin>>opcion;
		
		switch(opcion){
			case 1:  system("cls"); crear_registro();  system("pause");  break;
			case 2:  system("cls"); agregar_registro();  system("pause");  break;
			case 3:  system("cls"); visualizar_registro();  system("pause");  break;
		}
		
	}while(opcion!=4);
}

void crear_registro(){
	ofstream archivo;  
	char rpt;
	
	archivo.open("AgendaTelefonica.txt",ios::out); //Abrimos el archivo en modo escritura
	
	if(archivo.fail()){
		cout<<"\n No se pudo crear el archivo";
		exit(1);
	}
	
	archivo<<"\t Agenda Telefonica"<<endl<<endl;
	
	do{
		fflush(stdin); //limpiar el buffer de memoria
		cout<<"Digite su Nombre: ";    getline(cin,datos.nombre);  //ingresando datos al variable
		cout<<"Digite su Apellido: ";  getline(cin,datos.apellido);
		cout<<"Digite su Telefono: ";  getline(cin,datos.telefono);
		
		archivo<<"Nombre: "<<datos.nombre<<endl;  //almacenar datos en mi archivo
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		
		cout<<"\n Desea Agregar otro Contacto (s/n): ";
		cin>>rpt;   cout<<endl;
		
	}while(rpt=='s'|| rpt=='S' );
	
	
	archivo.close(); //cerrar el archivo
}

void agregar_registro(){
	ofstream archivo;  
	char rpt;
	
	archivo.open("AgendaTelefonica.txt",ios::app); //aqui abrimos el archivo y app es para agregar elementos
	
	if(archivo.fail()){
		cout<<"No se pudo Abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin); //limpiar el buffer de memoria
		cout<<"Digite su Nombre: ";    getline(cin,datos.nombre);  //ingresando datos al variable
		cout<<"Digite su Apellido: ";  getline(cin,datos.apellido);
		cout<<"Digite su Telefono: ";  getline(cin,datos.telefono);
		
		archivo<<"\n Nombre: "<<datos.nombre<<endl;  //almacenar datos en mi archivo
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		
		cout<<"\n Desea Agregar otro Contacto (s/n): ";
		cin>>rpt;   cout<<endl;
		
	}while(rpt=='s'|| rpt=='S' );
	
	archivo.close(); //cerrar el archivo
}

void visualizar_registro(){
	ifstream archivo; //crear una varible de archivo de tipo lectura
	string cadena;     
	
	archivo.open("AgendaTelefonica.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"\n No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea el final del archivo
		getline(archivo,cadena); //lo que tiene el Archivo paselo a Texto
		cout<<cadena<<endl;
	}
	archivo.close();
}
	

