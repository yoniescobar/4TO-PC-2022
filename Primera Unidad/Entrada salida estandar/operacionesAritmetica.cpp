#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	system("color E");
	int n1,n2,suma=0,resta=0,producto=0,division=0;  //1. reservar variables
	
	cout<<"Ingrese un numero: ";   // 2. ingresar datos  
	cin>>n1;
	cout<<"Ingrese un numero: ";
	cin>>n2;
	                               //3. hacer calculos (procesos)
	suma = n1 + n2;
	resta = n1 - n2;
	producto = n1 * n2;
	division = n1 / n2;
	                               //4. mostra los resultados         
	cout<<"\n======== Resultados ============="<<endl;
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La producto es: "<<producto<<endl;
	cout<<"La division es: "<<division<<endl;
	cout<<"\n======== Programdor by Escobar =============";	
	
   getch();
}
