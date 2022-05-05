#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	int vecA[5];
	int vecB[5];
	int vecC[10];
	
	cout<<"\n LLenar el vector A "<<endl;
	for(int i=0;i<5;i++){
		cin>>vecA[i];
	}
	cout<<"\n LLenar el vector B "<<endl;
	for(int i=0;i<5;i++){
		cin>>vecB[i];
	}
	
    // recuperar la info de VecA
    for(int i=0;i<5;i++){
    	vecC[i] = vecA[i]; //0 1 2 3 4
	}
	
	 // recuperar la info de VecA
    for(int i=5;i<10;i++){
    	vecC[i] = vecB[i-5]; //5 6 7 8 9
	}
    
    cout<<"\n Mostrando la unido de Vector A y Vector B"<<endl;
    for(int i=0;i<10;i++){
    	cout<<vecC[i]<<" ";
	}
	
	
	
	getch();
}
