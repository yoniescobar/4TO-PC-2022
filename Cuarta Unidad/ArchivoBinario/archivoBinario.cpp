#include <iostream>
#include <conio.h>
#include <stdlib.h> //para cadenas
#include <fstream>  //crear archivos 
using namespace std;

void escribir();
void leer();
struct Registro{
	char nombre[20];
	char apellido[20];
}persona;

int main(){
	escribir();
    leer();
	getch();
	return 0;
}

void escribir(){
	
	ofstream archivo;   //escritura Out 
	archivo.open("pruebaBianrio.dat",ios::out | ios::binary);
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	

	
	cout<<"Ingrese los datos solicitado: "<<endl;
	cout<<"Digite un nombre: "; cin.getline(persona.nombre,20,'\n');
	cout<<"Digite un apellido: "; cin.getline(persona.apellido,20,'\n');	
	
	//metodo para escribir los datos de la estructura en el archivo binario
	archivo.write((char *)&persona,sizeof(Registro));
	
	archivo.close();
}

void leer(){
	ifstream archivo;   //lectura InPut 
	archivo.open("pruebaBianrio.dat",ios::out | ios::binary);
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	

	
	//metodo para lectura de los datos de la estructura en el archivo binario
	archivo.read((char *)&persona,sizeof(Registro));
	cout<<"\n\n MOSTRANDO LOS DATOS LEIDOS DESDE EL ARCHIVO"<<endl;
	cout<<"Nombre: "<<persona.nombre<<endl;
	cout<<"Apellido: "<<persona.apellido<<endl;
	
	
	archivo.close();
}
