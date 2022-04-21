#include <iostream>
#include <conio.h>
#include <stdlib.h> //estas dos nuevas librerias sirven para generar numeros aleatorios
#include <time.h>

using namespace std;

int main(){

    int dato,numero,intentos=0;
     
     srand(time(NULL)); //generar un numero aleatorio;  0.143
     
     dato = 1 + rand()%(100); //aqui lo esto convirtiendo a entero 14
     
    
     do{
     	cout<<"Ingrese un numero: "; cin>>numero;
     	
		 if(numero>dato){
     		cout<<"\nIngrese un numero menor\n";	
		 }else if(numero<dato){
		 		cout<<"\nIngrese un numero Mayor\n ";
		 } 	
     	 intentos++;
     	     
	 }while(dato!=numero);
     
     cout<<"\n Felicidades Haz adivinado el numero en el intento: "<<intentos;
     
 
 getch();
}
