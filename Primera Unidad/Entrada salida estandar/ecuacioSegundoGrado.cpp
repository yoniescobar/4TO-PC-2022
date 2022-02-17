#include <conio.h>
#include <iostream>
#include <math.h>  //para funciones matematicas

using namespace std;

int main(){
	
	   float a,b,c,x1,x2;   //1. reservar variables
	   
	                       //2. ingreso de datos
	   cout<<" Ingrese el valor  de a: ";  cin>>a;
	   cout<<" Ingrese el valor  de b: ";  cin>>b;
	   cout<<" Ingrese el valor  de c: ";  cin>>c;
	   						//3. procesos
	   	x1 = (-b + sqrt(pow(b,2)-(4*a*c))) / (2*a);
	   	x2 = (-b - sqrt(pow(b,2)-(4*a*c))) / (2*a);
	
	   cout<<"\n El resultado de la Ecuasion es: "<<endl;
	   cout<<"\n x1: "<<x1;
	   cout<<"\n x2: "<<x2;
	   
	getch();
}

