#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int anio;
	
	cout<<"\n Ingrese anio: ";
	cin>>anio;
	
	if((anio % 4==0)&&(anio % 100!=0) || (anio%400==0)){
		cout<<"\n El anio  "<<anio<<" Es Biciesto!!";
	}else{
		cout<<"\n El anio  "<<anio<<" NO Biciesto!!";
	}
 

getch();

}
