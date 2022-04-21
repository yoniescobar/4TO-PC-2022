#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n1,n2;
	
	cout<<"Ingrese un numero 1: ";  cin>>n1; //10
	cout<<"Ingrese un numero 2: ";  cin>>n2; //5
	
	if(n1>n2){ //evaluar quien es el mayor
		for(int i=n2;i<=n1;i++){
			cout<<i<<"  ";
		}
	}else if(n2>n1){
		for(int i=n1;i<=n2;i++){
			cout<<i<<"  ";
		}
	}else{
		cout<<"Los numeros son iguales debe ingresar 2 numeros distintos";
	}	
	
	 getch();
}
