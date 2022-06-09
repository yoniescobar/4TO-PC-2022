#include<conio.h>
#include<iostream>
using namespace std;

//declarar funciones
void saludar();
void saludarAlumno(string nombre);
int  encontrarMayor(int n1, int n2,int n3);
int  encontrarMenor(int ,int ,int );
int  encontrarLongitudFrase(string frase);

int main(){
	
	int largo=0;
	string cad;
	
	saludar();
	saludarAlumno("Allison Daniela"); //enviando parametros
    
    cout<<"\n\nEl mayor es: "<<encontrarMayor(24,28,27);
    cout<<"\n\nEl menor es: "<<encontrarMenor(24,28,27);
	
	cout<<"\n\n Ingrese una Frase: ";
    getline(cin,cad);
	
	largo = encontrarLongitudFrase(cad);
	cout<<"\n\n El largo de la cadena es: "<<largo;
	
	getch();
	return 0;
}

void saludar(){
	cout<<" Hola Futuros Programadores"<<endl;
	cout<<"Bienvenidos a la III unidad"<<endl<<endl;
}

void saludarAlumno(string nombre){
	cout<<"\n Eres un Crack!!..."<<nombre;
}
int encontrarMayor(int n1, int n2,int n3){ //24,28,27
	 int mayor=0;
	 
	 if(n1>n2 && n1>n3){
	 	mayor=n1;
	 }else if(n2>n1 && n2>n3){
	 	mayor=n2;
	 }else{
	 	mayor=n3;
	 }
	 
	 return mayor;
}
int  encontrarMenor(int a,int b ,int c ){ //funcionando
	  int menor=0;
	 
	 if(a<b && a<c){
	 	menor=a;
	 }else if(b<a && b<c){
	 	menor=b;
	 }else{
	 	menor=c;
	 }
	 
	 return menor;
	
}

int  encontrarLongitudFrase(string frase){ // Guatemala es mi pais
	
	int longitud = frase.length(); //devuelve 20 de logitud
}

