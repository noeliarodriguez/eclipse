//============================================================================
// Name        : Ejercicio13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dados N y M numeros naturales informar su producto por sumas
// susecivas
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,m;
	cout << "Ingrese dos valores: ";
	cin >> n >> m;

	int contador = 1;
	int suma = 0;

	while (contador<m){
		suma = suma + m;
		contador++;
	}

	cout << suma;

	return 0;
}
