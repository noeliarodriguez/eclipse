//============================================================================
// Name        : Ejercicio14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dados 50 números enteros, informar el promedio de los
// mayores que 100 y la suma de los menores que –10
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	int numeros[50];
	double prom100;
	int suma;
		for(int i = 0; i < 50; i++)
		{
			numeros[i] = (rand()%150)-25;
			cout << numeros[i] <<endl;
			if (numeros[i]>100){
				prom100++;
			}

			if (numeros[i]<(-10)){
				suma = suma + numeros[i];
			}
		}
		cout << "Cantidad de numeros mayores que 100 es: " << prom100 << endl;
		cout << "El promedio de los mayores que 100 es: " << prom100/50 << endl;
		cout << "La suma de los menores que -10 es: " << suma;

	return 0;
}
