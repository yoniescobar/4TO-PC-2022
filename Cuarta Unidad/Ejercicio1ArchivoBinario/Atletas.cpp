/* Crear un archivo binario donde almacene un registro que contenga
las pulsaciones de un atleta en un determinada hora, el programa debe tener un
menú con las siguientes opciones.

	M E N U
	1. Comenzar a digitar las pulsaciones
	2. Añadir mas pulsaciones
	3. Mostrar las pulsaciones registradas
	4. salir

*/
#include <iostream>
#include <conio.h>
#include <stdlib.h> //para cadenas
#include <fstream>  //crear archivos 
using namespace std;

struct Registro{
	char  nombre[50];  
	float hora;
	float pulsaciones;
}pulso;

void menu();
void escribir();
void addPulsaciones();
void mostrarPulsaciones();

int main(){
	menu();
	getch();
	return 0;
}

void menu(){
	char opcion;
	
	do{
		 system("cls");
		cout<<"\t.:. MENU .:. "<<endl;
		cout<<"1. Comenzar a digitar las pulsaciones"<<endl;
		cout<<"2. Anadir mas pulsaciones"<<endl;
		cout<<"3. Mostrar las pulsaciones registradas"<<endl;
		cout<<"4. salir"<<endl;
		cout<<"Digite un opcion valida: "; cin>>opcion;
		
		switch(opcion){
			case '1':  system("cls"); escribir(); getch(); break;
			case '2':  system("cls"); addPulsaciones(); getch(); break;  
			case '3':  system("cls"); mostrarPulsaciones(); getch(); break; 
	
		}
		
	}while(opcion!='4');
	
}

void escribir(){
	
	ofstream archivo;   //escritura Out 
	archivo.open("registroPulsaciones.dat",ios::out | ios::binary);
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	cin.ignore();
	cout<<"\n Digite el nombre: ";    cin.getline(pulso.nombre,50,'\n');  
	cout<<"\n Digite la hora:  "; cin>>pulso.hora;	
	cout<<"\n Digite la cantidad de pulsaciones:  "; cin>>pulso.pulsaciones;
	
	
	//metodo para escribir los datos de la estructura en el archivo binario
	archivo.write((char *)&pulso,sizeof(Registro));
	
	archivo.close();
}
void addPulsaciones(){
	
	
	ofstream archivo;   //escritura Out  
	archivo.open("registroPulsaciones.dat",ios::app | ios::binary); //agregamos app: para agregar registros al archivo
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
    cin.ignore();
    cout<<"\n Digite el nombre: ";    cin.getline(pulso.nombre,50,'\n');  
	cout<<"\n Digite la hora:  "; cin>>pulso.hora;	
	cout<<"\n Digite la cantidad de pulsaciones:  "; cin>>pulso.pulsaciones;
	
	
	//metodo para escribir los datos de la estructura en el archivo binario
	archivo.write((char *)&pulso,sizeof(Registro));
	
	archivo.close();
	
}
void mostrarPulsaciones(){
	
	ifstream archivo;   //escritura in  Lectura
	archivo.open("registroPulsaciones.dat",ios::in | ios::binary); //agregamos app: para agregar registros al archivo
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	
	//recorremos todos los registros de los atletas
	
	while(!archivo.eof()){//mientras no haya finalizado de recorre mi archivo
		//metodo para leer los datos de la estructura en el archivo binario
	archivo.read((char *)&pulso,sizeof(Registro));
		
		//condicional para no repetir el ultimo dato
		if(!archivo.eof()){
			cout<<"----------------------------------------------"<<endl;	
			cout<<"Hora: "<<pulso.nombre<<endl;
			cout<<"Hora: "<<pulso.hora<<endl;
			cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl;			
		}

	}
	
	archivo.close();
}
