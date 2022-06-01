#include <iostream>
#include <conio.h>
using namespace std;
const int n=4;

int main(){
	int  vectorA[n]={12,21,15,21};
	char vectorB[n]={'A','B','C','D'};
	int mayor = vectorA[0];
	
	for(int i=0;i<n;i++){
		if(vectorA[i]>mayor){
			mayor = vectorA[i]; //21
		}
	}
	
	cout<<"Mayor: "<<mayor<<endl;
	cout<<"Los elementos son: "<<endl;
	int pos=0;
	for(int i=0;i<n;i++){
		if(mayor==vectorA[i]){  //21==21  pos=1  primero   21==21 pos 3
			pos=i;
			cout<<"Pos => "<<pos<<" Valor=> "<<vectorB[i]<<endl;
		}
	}
	
}
