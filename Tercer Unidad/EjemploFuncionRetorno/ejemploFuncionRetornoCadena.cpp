#include<conio.h>
#include<iostream> 
using namespace std;

string convertirRomano(int n);

int main(){
	int numero;

	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	cout<<convertirRomano(numero);//8
	
	
}

string convertirRomano(int n) //8 = VIII
{
	//aqui se hacen todos los calculos..... 
	
		string n1 = "I";
		string n2 = "V";
		string n3 = "X";
		string res;
		
		res = n1+n2+n3;
		
		return res;
}
