//============================================================================
// Name        : factorial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dado un valor numerico, calcular su factorial
// Se crea una funcion y el programa principal calcula factoriales
//============================================================================

#include <iostream>
using namespace std;

double factorial (int n){
	int i = 0; // contador
		double resultado = 1; // acumulador, hay que utilizar el tipo DOUBLE porque el int admite una cantidad limitada de digitos

		// usamos estructura interativa para la multiplicacion
		// ej: 5! = 5*4*3*2*1

		while (i<(n-1)){ // n-1 es porque multiplicar por 1 es indistinto
			resultado = resultado*(n-i); // El contador va a tomar los valores de 0,1,2,3,4 y coincide con el factorial
			i++; //en cada vuelta el contador suma 1
		}
		return resultado;
}


int main() {
	int n;
	cout << "Ingrese un numero para calcular el factorial: ";
	cin >> n;
	while (n>=0){
		double f = factorial(n);
		cout << f;
		cin >> n;
		}
	return 0;
}
