#include <iostream>
#include <conio.h>

using namespace std;

int main() {

  struct{
  int dpi;
  string nombre;
  string direccion;
  bool   genero;

  } P1,P2 ;


  cout<<"------Datos de la Primera Persona-----"<<endl;
  P1.dpi = 12345;
  P1.nombre = "Yoni Edilzar";
  P1.direccion= "Xela";
  P1.genero = 1;

  cout <<"Dpi: "<<P1.dpi<<"\n";
  cout <<"Nombre: "<<P1.nombre<<"\n";
  cout <<"Direccion: "<<P1.direccion<<"\n";
  cout <<"Gnenero: "<<P1.genero<<"\n";
  
  
  cout<<"\n\n------Datos de la Segunda Persona-----"<<endl;
  P2.dpi = 678910;
  P2.nombre = "Jenni Lopez";
  P2.direccion= "EEUU";
  P2.genero = 0;

  cout <<"Dpi: "<<P2.dpi<<" "<<P2.nombre<<" "<<P2.direccion<<" "<<P2.genero<<"\n";
  

   getch();
  return 0;
  
}
