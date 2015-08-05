//============================================================================
// Name        : Ejercicio22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dados N valores informar el mayor, el menor y en que
// posición del conjunto fueron ingresados.
//============================================================================

#include <iostream>
using namespace std;

int Menor (int x,int y,int z){
	int menor = 0;
	if (x<y and x<z){
		 menor = x;
	}else if(y<x and y>z){
		menor = y;
	}else if(z<y and z<x){
		 menor = z;
	}

	return menor;
}

int Mayor (int x, int y, int z){
	int mayor = 0;
	if (x>y and x>z){
			mayor = x;
		}else if(y>x and y>z){
			 mayor = y;
		}else if(z>y and z>x){
			 mayor = z;
		}

	return mayor;
}

int main() {
	int n,n2,n3;


	cout << "ingrese un valor";
	cin >> n

	>> n2 >> n3;

	int mayor = Mayor(n,n2,n3);
	int menor = Menor (n,n2,n3);

	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor;

	return 0;
}
