#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	char  letra[100] = "Avenida Jesus Catillo 4-09 Zona 3 Quetzaltenago, Guatemal C. A"; 
	int    edad = 18;  // cantidades
	float  valor = 2.123456789101112;
	double raiz,potencia,raizCub,raizQuinta;
	
	raiz = sqrt(100); 
	potencia = pow(8,3);
	raizCub = pow(8,(double)1/3);  // 1/3 = 0.3333333
	raizQuinta = pow(875,(double)1/5);
	
	cout<<letra<<endl;
	cout<<edad<<endl;
	cout<<valor<<endl;
	cout<<raiz<<endl;
	cout<<potencia<<endl;
	cout<<raizCub<<endl;
	cout<<raizQuinta<<endl;
	
	
	getch();
}
