#include <iostream>
#include <conio.h>


using namespace std;

int main(){
	
	  int numero,ud,centenas,decenas,unidades,numeroOriginal;
      char sede[10];
	  char carrera[2];
      
	cout<<"Ingrese un numero entero de cuatro cifras: ";
	cin>>numero; //1985
	


	   ud = numero/1000;      // aqui obtengo 1
	   numero = numero%1000;  // aqui tengo 985 el resto
	   centenas = numero/100; // aqui tengo 9
	   numero = numero%100;   // aqui tengo 85 el resto
	   decenas = numero/10;   // aqui tengo 8 
	   numero = numero%10;     // aqui tengo 5 el resto
	   unidades = numero;
	    
		sede = char(ud+centenas);  
	   
	cout<<"\n  Sede: "<<sede<<endl;
	   
    cout<<"\n Unidades de Millar: "<<ud;
	cout<<"\n Centenas: "<<centenas ;
	cout<<"\n Decenas: "<<decenas ;
	cout<<"\n Unidades: "<<unidades;
	
	cout<<"\n\n Numero Original: "<<numeroOriginal;	//1985
    cout<<"\n Numero Alreves: "<<unidades<<decenas<<centenas<<ud;  //5891  

	getch();

}
