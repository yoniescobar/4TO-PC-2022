#include <conio.h>
#include <iostream>

using namespace std;

int main(){

    float numero,decimal;
    int entero;
    
    cout<<"\n Ingrese un numero con decimal: ";
    cin>>numero; //14.58
    
    entero = numero ;
    decimal = numero-entero;
	 
    cout<<"\n Parte entera:  "<<entero;
    cout<<"\n Parte decimal: "<<decimal;
    
    getch();

}
