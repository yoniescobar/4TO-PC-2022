#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int n;
	
	cout<<"Digite un numero: ";
	cin>>n; //20
	
	for(int i=2;n>1;i++){
		
		while(n%i==0){
			cout<<i<<" "; //2 2 5
			n = n /i; //1
		}
		
	}
	
	
	 getch();
}
