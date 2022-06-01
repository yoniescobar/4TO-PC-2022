#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int pisos=10;

	for(int i=0;i<=pisos;i++){ //filas
		for(int j=pisos;j>i;j++){
			cout<<" ";
		}
		for(int k=0;k<i+1;k++){
			cout<<"* ";
		}	
		cout<<"\n";
	}
	
}
