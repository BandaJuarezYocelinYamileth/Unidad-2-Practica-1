#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int NUM,CUA,CUB;
	cout << "Hola! este programa 1.9 calcular el cuadrado y el cubo de un numero entero positivo" << "\n";
	
//Se pide el valor de un numero
cout << "por favor ingrese el valor de NUMERO: " <<"\n";
//Se asigna el primer valor A
 cin >> NUM;
 
 //Resolvemos la formula del problema
 CUA=NUM*NUM;
 CUB=NUM*CUA;
 //Enviamos el resultado de cua ycub a la pantalla
 cout << "El cuadrado de "<<NUM<<" es: "<<CUA<<" y el cubo es: "  <<CUB<<endl;
 return 0;
 } 
	
