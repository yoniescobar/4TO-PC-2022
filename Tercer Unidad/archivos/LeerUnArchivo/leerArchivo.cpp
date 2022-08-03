#include<conio.h>
#include<iostream>
#include<fstream> //cabecera para archivos
using namespace std;

void leerDatos();
void addDatos();  //agregar información


int main(){
	
	
	addDatos();
	
	getch();
	return 0;
}

void leerDatos(){
	
	ifstream archivo;
	string nombre;
	int i=1;
	
	archivo.open("lstEstudiante.txt",ios::in); //abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"\n No se pudo Abrir el Archivo";
		exit(1);
	}
	
	cout<<"---Datos de los Alumnos ------"<<endl<<endl;
	while(!archivo.eof()){ //mientras no sea el final del archivo..... oef
		getline(archivo,nombre);
		cout<<(i++)<<" - "<<nombre<<endl;
	}
	
	archivo.close(); //cerramos el archivo
}

void addDatos(){
   ofstream  archivo;
   char nombre[50];
   
  archivo.open("lstEstudiante.txt",ios::app); //abrimos el archivo en modo añadir datos... app para agregar datos

   cout<<"\n Ingrese el Nombre del Estudiante: ";
   gets(nombre);
  
  if(archivo.fail()){
  	cout<<"\n No se pudo abrir el archivo";
  	exit(1);
  }
	archivo<<nombre<<endl;
	
	archivo.close();
	
	leerDatos();
	
}
