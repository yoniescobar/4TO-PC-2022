#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n,x=0,y=1,z=1;
	
	cout<<"Digite el numero de Elementos: ";
	cin>>n;
	  cout<<"0 ";           
	 for(int i=1;i<n;i++){
		 z = x + y;//1 2 3 5 8 13
	 	cout<<z<<" ";// 1 2 3 5 8 13
	 	x = y; //1 1 2 3 5
	 	y = z; //1 2 3 5 8
	 }
	
	getch();
}
