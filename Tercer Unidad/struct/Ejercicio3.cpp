/* Estructura Anidad*/

#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion{    //declarar estructura 1
	char direccion[30];
	int  zona;
	char departamento[30];
};

struct empleado{          //declarar estructura 2
	char nombre[30];
	struct info_direccion dir_empleado; //anidar datos de direccion o sea declarar una variable de tipo structura 1
	double salario;
} empleado[2]; //creamos un vector para 2 empleados



int main(){
	
	int elementos=3;
	double sueldoMayor=0;
	int pos=0;
	
	 for(int i=0;i<elementos;i++){ // 0 1 
	    cout<<"Datos del Empleado No. "<<(i+1)<<endl;
	    
	 	cout<<"Digite su nombre:";              gets(empleado[i].nombre);
	 	cout<<"Digite su direccion:";           gets(empleado[i].dir_empleado.direccion);
	 	cout<<"Digite su zona:";                cin>>empleado[i].dir_empleado.zona;
	 	cin.ignore();
	 	cout<<"Digite su Departamento:";        gets(empleado[i].dir_empleado.departamento);
	 	cout<<"Digite el Salario:";             cin>>empleado[i].salario;
	 	cin.ignore();
	   cout<<endl;
	 }
	 
	 
	 cout<<endl;
	cout<<"                   Mostrando Datos de los  Empleados                    "<<endl;
	cout<<"==============================================================="<<endl;
	cout<<"\nNo.\tNombre\t\tDireccion\tZona\tDepartamento\tSalario"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	
	 for(int i=0;i<elementos;i++){ // 0 1 
	    cout<<(i+1)<<"\t"<<empleado[i].nombre<<"\t\t"<<empleado[i].dir_empleado.direccion;
		cout<<"\t\t"<<empleado[i].dir_empleado.zona<<"\t"<<empleado[i].dir_empleado.departamento;
	 	cout<<"\t\t"<<empleado[i].salario;
	 	
	 	//algoritmo para hallar el salario mayor
	 	if(empleado[i].salario>sueldoMayor){
	 		sueldoMayor = empleado[i].salario;
	 		pos++;
		 }
	 	
	 	//algoritmo para hallar el salario Menor
	 	
	 	
	   cout<<endl;
	 }
	 
	 
	cout<<"\n ----Sueldo Mayor----- "<<endl;
	cout<<"\t"<<empleado[pos].nombre<< ": Q."<<empleado[pos].salario;

	getch();
	return 0;
}
