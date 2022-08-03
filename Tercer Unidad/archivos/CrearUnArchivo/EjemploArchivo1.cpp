#include <conio.h>
#include <iostream>
#include <fstream> //cabecra para trabajar con archivos

using namespace std;

int main(){
	
	ofstream  fichero("ejemplo.txt");  //creando el archivo y estamos abriendo
	
	if(!fichero){
		cout<<"Error al abrir el fichero.txt\n";
	}
	
	for(int i=1;i<=10;i++){
		cout<<i<<endl;
		fichero<<i<<endl;
	}

     fichero.close();
     
	getch();
	return 0;
}
