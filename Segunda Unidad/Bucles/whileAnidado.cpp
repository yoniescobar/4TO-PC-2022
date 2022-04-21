#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int n,x=1,y;
	
	cout<<"Ingrese el valor de n: ";
	cin>>n; //4

	while(x<=n){
		y=1;
		while(y<=x){
			cout<<y;
			y++;
		}
	    cout<<endl;
	    x++;
	}
	
	

	
	 getch();
}
