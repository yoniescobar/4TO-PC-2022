#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int dia,mes,anio;
	
	cout<<"\n Digite el dia: ";
	cin>>dia;
	cout<<"\n Digite el mes: ";
	cin>>mes;
	cout<<"\n Digite el anio: ";
	cin>>anio;
	
	if((dia>=1)&&(dia<=30)){
			if((mes>=1)&&(mes<=12)){
				if(anio!=0){
					cout<<"\n La fecha es Valida!!";
				}else{
					cout<<"\n La fecha no es valida Error!!..anio";
				}
			}else{
				cout<<"\n La fecha no es valida Error!!..mes";
			}	
	}else{
		cout<<"\n La fecha no es valida Error!!..dia";
	}
	
	
	getch();

}
