#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	float temperatura, mayor=0, menor=1000,suma=0,promedio=0; //referencia
    int x=1;
     
	for(int i=0;i<24;i=i+4){ //estamos leyendo temperatura a cada 4 horas
	   cout<<"Digite la temperatura de la hora "<<x++<<": ";
	   cin>>temperatura;
	   	     
	   	if(temperatura>mayor){ //calculamos la temperatura mayor
	   		mayor = temperatura; 
		   }
		        
		 if(temperatura<menor){ //calculamos la temperatura menor
		 	menor = temperatura; 
		 }  
		      
		 suma = suma + temperatura;     //calculamos suma
	}
	
	promedio = suma /6;
	
	cout<<"\n\n Temperatura Menor: "<<menor<<" Grados";
	cout<<"\n Temperatura Mayor: "<<mayor<<" Grados";
	cout<<"\n Temperatura Promedio: "<<promedio<<" Grados";

	getch();
}
