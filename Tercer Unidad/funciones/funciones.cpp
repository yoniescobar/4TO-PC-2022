#include <conio.h>
#include <iostream>

using namespace std;

int sumarNumeros(int x, int y){
    int suma = x+y;
	return suma;	
}

int restarNumeros(int val1, int val2){
    int resta = val1-val2;
	return resta;	
}
int productoNumeros(int a, int b){
    int mul = a*b;
	return mul;	
}

void mostrarDatosPersonales(string nom, string ape, int edad, float estatura){
	
	cout<<"\n\n -------------DATOS PERSONALES DEL ALUMNO(A)--------------\n\n";
	cout<<"Nombres   : "<<nom<<endl;
	cout<<"Apellidos : "<<ape<<endl;
	cout<<"Edad      : "<<edad<<endl;
	cout<<"Estatura  : "<<estatura<<endl;

}



int main(){
	
	int n1=100, n2=20;
	
	//cout<<"\n La suma  de "<<n1<<" + "<<n2<<" es: "<<sumarNumeros(n1,n2); //retorne la suma
    //cout<<"\n La resta de "<<n1<<" - "<<n2<<" es: "<<restarNumeros(n1,n2); //retorne la resta	
	//cout<<"\n El Producto de "<<n1<<" * "<<n2<<" es: "<<productoNumeros(n1,n2); //retorne la multiplicacion
	
	mostrarDatosPersonales("Amy Geovana","Maldonado Reyes",16,1.47); //no retorna nada
    mostrarDatosPersonales("Francisco ","Sop Guzman",15,1.50); //no retorna nada	
	mostrarDatosPersonales("Narely Yesel ","Velaquez Reyes",15,1.50); //no retorna nada	
	
	getch();
	return 0;
}
