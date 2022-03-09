#include <iostream>
#include <conio.h>


using namespace std;

int main(){
	
	  int numero,ud,centenas,decenas,unidades,numeroOriginal;

	cout<<"Ingrese un numero entero de cuatro cifras: ";
	cin>>numero; //1985                         // EL MAXIMO: 3999 


	   ud = numero/1000;      // aqui obtengo 1
	   numero = numero%1000;  // aqui tengo 985 el resto
	   centenas = numero/100; // aqui tengo 9
	   numero = numero%100;   // aqui tengo 85 el resto
	   decenas = numero/10;   // aqui tengo 8 
	   numero = numero%10;     // aqui tengo 5 el resto
	   unidades = numero;
	   
	   switch(ud){
	    case 1: cout<<"M"; break;
	    case 2: cout<<"MM"; break;
	    case 3: cout<<"MMM"; break;
	    	
	   }
	   
	   switch(centenas){
	   	case 1: cout<<"C"; break;
	   	case 2: cout<<"CC"; break;
	   	case 3: cout<<"CCC"; break;
	   	case 4: cout<<"CD"; break;
	   	case 5: cout<<"D"; break;
	   	case 6: cout<<"DC"; break;
	   	case 7: cout<<"DCC"; break;
	   	case 8: cout<<"DCCC"; break;
	   	case 9: cout<<"CM"; break;
	   	
	   }
	   
	    switch(decenas){
	   	case 1: cout<<"X"; break;
	   	case 2: cout<<"XX"; break;
	   	case 3: cout<<"XXX"; break;
	   	case 4: cout<<"XL"; break;
	   	case 5: cout<<"L"; break;
	   	case 6: cout<<"LX"; break;
	   	case 7: cout<<"LXX"; break;
	   	case 8: cout<<"LXXX"; break;
	   	case 9: cout<<"XC"; break;
	   	
	   }
	   
	   switch(unidades){
	   	case 1: cout<<"I"; break;
	   	case 2: cout<<"II"; break;
	   	case 3: cout<<"III"; break;
	   	case 4: cout<<"IV"; break;
	   	case 5: cout<<"V"; break;
	   	case 6: cout<<"VI"; break;
	   	case 7: cout<<"VII"; break;
	   	case 8: cout<<"VIII"; break;
	   	case 9: cout<<"IX"; break;
	   }
	   
	   

}
