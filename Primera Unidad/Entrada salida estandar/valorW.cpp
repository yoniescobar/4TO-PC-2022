#include <conio.h>
#include <iostream>  //cabeceras
#include <math.h>
#define pi 3.1416                   //constante
#define e  2.7182
using namespace std;

int main(){
	
	float w,z;
     
	 cout<<"\n Ingrese el valor de w: ";
	 cin>>w;
	
	 z = 1/(sqrt(2*pi)) * (pow(e,((-w*2)/2)));
	 
	 cout<<"\n El valor de z: "<<z;
	
	
	getch();
}
