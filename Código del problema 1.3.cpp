#include  "iostream"
#include "iostream"
using namespace  std;

int main ()
{
	//Problema 1.3 Escribe un programa tal que dado como datos el nombre del dinosaurio
	//su peso y su longitud expresado estos ultimos en libras y pies respectivamente
	//escriba el nombre del dinosaurio, su peso expresadoen kilogramos y la longitud en metros
	
	//Declaraci�n de variables
	string NOMBRE;
	float PESOLIBRAS, LONGITUDENPIES;
	float PESOENKILOS, LONGITUDENMETROS;
	//eNTRADA DE DATOS
	
	cout<<"Escribe el nombre del dinosaurio    " << "\n";
	cin >> NOMBRE;
	
	cout<< "Escribe el peso del dinosaurio en libras " << "\n";
	cin>> PESOLIBRAS;
	
	cout<<"Escribe la longitud del dinosaurio en pies " << "\n";
	cin>>LONGITUDENPIES;
	
	
	//CALCULO
	PESOENKILOS=PESOLIBRAS*1000;
	LONGITUDENMETROS=LONGITUDENPIES*0.3047;
	
	
	//SE IMPRIMEN LOS RESULTADOS
	cout<<"El peso en kilos del dinosaurio "<<NOMBRE<< "es "<<PESOENKILOS<<" y la longitud en metros es "<<LONGITUDENMETROS<<"\n";
}

