#include  "iostream"
#include <stdio.h>
using namespace std;

int main ()
{
	int A,B;
	float RES;
	//Mensaje de bienvenida
	cout << "Este programa 1.7 Escribe el resultado de la expresión " << "\n";
	
	//Se declaran los números que sumarán (pueden ser decimales)
	
	//Se pide el primer número
	cout << "Por favor ingrese el valor de A:" << "\n";
	//Se asigna el primer valor a A
	cin >> A;
	//Se asigna el segundo número
	cout << "Por favor ingrese el valor de B:" <<"\n";
	//Se asigna el segundo valor a B
	cin >> B;
	
	RES=((A+B)*(A+B))/3.0;
	
	///Se muestra el resultado.
	printf ("\n El resultado de la expresión es %5.4f \n", RES);
	cout << "El resultado de la expresion es" << RES << "\n";
	
	return 0;
}
