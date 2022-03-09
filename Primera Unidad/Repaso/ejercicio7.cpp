/*  Ingrese un letra e identifique si vocal o consonante */


#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	char letra;
	
	cout<<" Ingrese un letra: ";
	cin>>letra;
	
	/*
	if((letra=='a') || (letra=='A') || (letra =='e') || (letra== 'E') || (letra =='i')|| (letra =='I')|| (letra =='o')|| (letra =='O')|| (letra =='u')|| (letra =='U')  ){
		cout<<"\n Es vocal";
	}else{
		cout<<"\n Es una consonante";
	}
	*/
	
	switch(letra){
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		         cout<<"\n Es una Vocal minuscula: ";
				 break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':		 			
				cout<<"\n Es una Vocal Mayuscula ";
				 break;
		default: 
				cout<<"\n Es una Consonante...!!";
		
	}
	
	
	
	
	
}
