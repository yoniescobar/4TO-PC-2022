#include<conio.h>
#include<iostream>
using namespace std;

int main(){
	
	int n=9;
	
	/*caso 6 
	for(int i=0;i<n;i++){ //define las filas de piramide
		for(int j=i;j>=0;j--){ //espacios
			cout<<" ";
		}
		for(int k=n-i;k>=1;k-- ){
			cout<<n-i<<" ";
		}
		cout<<endl;
	}
	*/
	
	//caso 5
	for(int i=1;i<=n;i++){ //define las filas de piramide
		for(int j=i;j<=n;j++){ //espacios
			cout<<" ";
		}
		for(int k=1;k<=i;k++ ){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
	
	getch();
}
