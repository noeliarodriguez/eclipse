//============================================================================
// Name        : Ejercicio16.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Ingresar e informar valores, mientras que el valor ingresado
// no sea negativo. Informar la cantidad de valores ingresados
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	int acum = 0;
	cout << "Ingrese un valor: ";
	cin >> n;
	while (n>0){
		acum++;
		cout << "ingrese un valor: ";
		cin >> n;
	}
	cout << "Cantidad de datos ingresados: " << acum;
	return 0;
}
