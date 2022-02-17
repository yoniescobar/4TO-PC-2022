/*hacer un programa que ingrese cuatro notas
y calcular el promedio*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

   int n1,n2,n3,n4,promedio=0; //1. reservar variable
   
   cout<<"Ingrese Nota 1: ";   //2. ingresar las cuatro notas
   cin>>n1;
   cout<<"Ingrese Nota 2: ";
   cin>>n2;
   cout<<"Ingrese Nota 3: ";
   cin>>n3;
   cout<<"Ingrese Nota 4: ";
   cin>>n4;
   							    //3. proceso (calculos)
    promedio = (n1+n2+n3+n4)/4;
	
    cout<<"\n+++++++++ Resultados ++++++"<<endl;  // 4. salida de datos
	cout<<"\nEl promedio es: "<<promedio<<endl;							    
   				
   

	
   getch();
}
