#include <iostream>
#include <conio.h>


using namespace std;

int main(){

	  int jugadorA,jugadorB;
	
	
	cout<<"Jugador A:  Ingrese 1.piedra, 2.papel o 3.tijera: ";
	cin>>jugadorA; 
	cout<<"Jugador B:  Ingrese 1.piedra, 2.papel o 3.tijera:  ";
    cin>>jugadorB;
	
	if((jugadorA ==1)  && (jugadorB==3 ) || (jugadorA ==3)  && (jugadorB==2 ) || (jugadorA ==2)  && (jugadorB==1 )){
		
		cout<<"\n\n El jugador A -- Gano ";
	}else if((jugadorA ==1)  && (jugadorB==1 ) || (jugadorA ==2)  && (jugadorB==2 ) || (jugadorA ==3)  && (jugadorB==3 )){
	
		cout<<"\n\n Empate!!!!";
	}else{
		cout<<"\n\n El jugador B -- Gano ";
	}
	
	
	
	
	getch();

}
