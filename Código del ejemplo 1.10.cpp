#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	float Altura,Base;
	float SUPERFICIE, PERIMETRO;
	//Mensaje de bienvenida
	cout<< "HOLA! Este programa 1.10 calcula la superficie y el perimetro de un rectangulo" << "\n";
	//Se declaran los numeros que se sumaran (pueden ser decimales)
	
	//Se piden el primer numero
	cout << "por favor ingrese el valor de la base: " << "\n";
	//Se asigna el primer valor a Base
	cin >> Base;
	//Se pide el segundo numero
	cout << "por favor ingrese el valor de la altura: " << "\n";
	//Se asigna el segundo valor a altura
	cin >> Altura;
	
	SUPERFICIE= Base*Altura;
	PERIMETRO=2*(Base+Altura);
	
	//Se muestra el resultado
	printf ("\n la superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf ("\n El perimetro del rectangulo es %5.2f \n", PERIMETRO);
	
	return 0;
}
