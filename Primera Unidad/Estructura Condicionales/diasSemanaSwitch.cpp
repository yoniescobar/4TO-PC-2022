#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	    int dia;
	    
	    cout<<"\n Ingrese un numero de dias de la semana 1 - 7 : ";
	    cin>>dia;
	    
		switch(dia){
			case 1:   cout<<"Lunes ";      break;
			case 2:   cout<<"Martes ";     break;
			case 3:   cout<<"Miercoles ";  break;
			case 4:   cout<<"Jueves ";     break;
			case 5:   cout<<"Viernes ";    break;
			case 6:   cout<<"Sabado ";     break;
			case 7:   cout<<"Domingo ";    break;
			default:  cout<<"\n No esta en el rango de 1 - 7 "; break;
				
		}
	
	getch();
}
