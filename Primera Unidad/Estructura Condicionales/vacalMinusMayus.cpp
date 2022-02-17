#include <conio.h>
#include <iostream>

using namespace std;

int main(){

     char letra;
	 
	 cout<<"Ingrese una letra: ";
	 cin>>letra;
	 
	 switch(letra){
	 	
	 	case 'a':
	 	case 'e':
	 	case 'i':
	 	case 'o':
	 	case 'u':
	 		cout<<"\n La letra  "<<letra<<" es vocal minuscula ";
	 		break;
	 	case 'A':
	 	case 'E':
	 	case 'I':
	 	case 'O':
	 	case 'U':
	 		cout<<"\n La letra  "<<letra<<" es vocal Mayuscula ";
	 		break;
	 		
	    break;
	    default: 
	     	cout<<"\n La letra  "<<letra<<" es consonante ";
			 	
	 }


	getch();
}
