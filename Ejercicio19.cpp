//============================================================================
// Name        : Ejercicio19.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dado un conjunto de valores enteros, calcular e informar
//a) cuántos valores cero hubo, b) promedio de valores positivos, c) sumatoria de valores negativos.
//Resolver el ejercicio para los siguientes lotes de datos:
//1)	167 valores enteros
//2)	N valores, donde el valor de N debe ser leído previamente
//3)	El conjunto de valores termina con un valor igual al anterior
//4)	Se dan N valores, pero el proceso deberá finalizar si se procesan
//todos los valores o si  la cantidad de ceros supera a cuatro
//5)	Se dan N valores, pero el proceso deberá finalizar si se cumple
//alguna de las condiciones de 4) o si el promedio de positivos resulta mayor que seis.

//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	int negat = 0;
	double posit = 0;
	int ceros = 0;

	cout << "Ingrese un valor: " << endl;
	cin >> n;


	for (int i = 0; i <= 6; i++){

		if (n==0){
			ceros++;
		}
		if (n<0){
			negat = negat + n;
		}
		if (n>0){
			posit = (posit+1)/167;
		}
		cout << "Ingrese un valor: " << endl;
		cin >> n;
		}

		cout << "Programa fin" << endl;
		cout << "Cantidad de ceros ingresados: " << ceros << endl;
		cout << "Promedio de positivos: " << posit << endl;
		cout << "Sumatoria de negativos: " << negat << endl;



	return 0;
}
