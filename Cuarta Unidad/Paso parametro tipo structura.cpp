//Paso de parametros de tipo Struct

#include<conio.h>
#include<iostream>
using namespace std;

struct Persona{
	string nombre;
	int edad;
} p1;

void pedirDatos();
void mostrarDatos(Persona);

int main(){
	
	pedirDatos(); //1. solicitar datos
	mostrarDatos(p1); //2. mostrar Datos
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite su nombre: "; getline(cin,p1.nombre);
	cout<<"Digite su Edad: ";   cin>>p1.edad;
	
}
void mostrarDatos(Persona pe){
	cout<<"\n\n Nombre: "<<pe.nombre<<endl;
	cout<<"\n  Edad: "<<pe.edad<<endl;
	
}
