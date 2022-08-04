#include <iostream>
#include <stdlib.h>
#include <string.h>  
#include <fstream> 
#define n 100  //declar una constante y que se utilizar en todo el programa

using namespace std;

struct Datos{
	string nombre;
	int cantidad;
	float precio;
	 
}datos[n];

void menu();
void ingresarProducto();
void agregarProducto();
void visualizar_registro();
void visualizarProductoCaro(Datos Dat[],int );

//void visualizarProductoBarato();
int productoCaro = 0;
int productoBarato = 0;
int Productos = 0;

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
		cout<<"1. Ingresar Productos ( nombre, precio,Cantidad)"<<endl;
		cout<<"2. Agregar Productos ( nombre, precio,Cantidad)"<<endl;
		cout<<"3. Visualizar lista de Productos"<<endl;
		cout<<"4. Visualizar el Producto mas caro"<<endl;
		cout<<"5. Visualizar el producto mas barato"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Ingrese un opcion valida: "; cin>>opcion;
		
		switch(opcion){
			case 1:  system("cls"); ingresarProducto();  system("pause");  break;
			case 2:  system("cls"); agregarProducto();  system("pause");  break;
			case 3:  system("cls"); visualizar_registro();  system("pause");  break;
			case 4:  system("cls"); visualizarProductoCaro(datos,n);  system("pause");  break;
			//case 5:  system("cls"); visualizarProductoBarato();  system("pause");  break;
		}
		
	}while(opcion!=6);
}

void ingresarProducto(){
	ofstream archivo;  
	char rpt;
	int i;
	archivo.open("ProductosElectrodomesticos.txt",ios::out); //Abrimos el archivo en modo escritura
	
	if(archivo.fail()){
		cout<<"\n No se pudo crear el archivo";
		exit(1);
	}
	
	archivo<<"\t Productos Electronicos"<<endl<<endl;
	
	do{
		
		i++;
		
		fflush(stdin); 
		cout<<"Digite su Nombre: ";    getline(cin,datos[i].nombre);  
		cout<<"Digite su Cantidad: ";  cin>>datos[i].cantidad;
		cout<<"Digite su Precio: ";    cin>>datos[i].precio;
		
		
		archivo<<"Nombre: "<<datos[i].nombre<<endl;  
		archivo<<"Cantidad: "<<datos[i].cantidad<<endl;
		archivo<<"Telefono: "<<datos[i].precio<<endl<<endl;
		
		
		cout<<"\n Desea Agregar otro Contacto (s/n): ";
		cin>>rpt;   cout<<endl;
		
		Productos = i;
				
	}while(rpt=='s'|| rpt=='S' );
	
	
	archivo.close(); 
}

void agregarProducto(){
	ofstream archivo;  
	char rpt;
	int i;
	
	archivo.open("ProductosElectrodomesticos.txt",ios::app); //aqui abrimos el archivo y app es para agregar elementos
	
	if(archivo.fail()){
		cout<<"No se pudo Abrir el archivo";
		exit(1);
	}
	
	do{
		
		i++;
		
		fflush(stdin); 
		cout<<"Digite su Nombre: ";    getline(cin,datos[i].nombre);  
		cout<<"Digite su Cantidad: ";  cin>>datos[i].cantidad;
		cout<<"Digite su Precio: ";    cin>>datos[i].precio;
		
		
		archivo<<"Nombre: "<<datos[i].nombre<<endl;  
		archivo<<"Cantidad: "<<datos[i].cantidad<<endl;
		archivo<<"Telefono: "<<datos[i].precio<<endl<<endl;
		
		
		cout<<"\n Desea Agregar otro Contacto (s/n): ";
		cin>>rpt;   cout<<endl;
		
		Productos = i;
				
	}while(rpt=='s'|| rpt=='S' );
	
	archivo.close(); 
}

void visualizar_registro(){
	ifstream archivo; 
	string cadena;     
	
	archivo.open("ProductosElectrodomesticos.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"\n No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ 
		getline(archivo,cadena); 
		cout<<cadena<<endl;
	}
	archivo.close();
}
void visualizarProductoCaro(Datos Dat[],int m){
		
		double precioMayor=0;
		int pos=0;
		
	  for(int i=0;i<m;i++){
	  	
	  	if(datos[i].precio>precioMayor){
	  		precioMayor=datos[i].precio;
	  		pos++;
		  }
	  }
	  
	  cout<<"\n\n El precio Mayor es: "<<datos[pos].precio;
	  
}	

