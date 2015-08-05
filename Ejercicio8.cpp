//============================================================================
// Name        : Ejercicio8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dado un triángulo representado por sus lados L1, L2, L3,
// determinar e imprimir una leyenda según sea: equilátero, isósceles o escálenos.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int l1,l2,l3;
	int triang = 0;
	int isoc = 0;
	int equi = 0;
	int esca = 0;

	cout << "Ingrese 3 lados de un triangulo: " << endl;
	cin >> l1 >> l2 >>l3;

	while ((l1>0) and (l2>0) and (l3>0)){
	if (l1+l2>=l3 and l2+l3>=l1 and l1+l3>=l2){
		triang++;
		if ((l1==l2) and (l2==l3)){
				equi++;
			}else{
				if ((l1 != l2) and (l2!=l3) and (l1!=l3)){
				esca++;
				}else{
				isoc++;
				}
			}
	}else{
		cout << "Datos incorrectos" << endl;
	}

	cout << "Ingrese 3 lados de un triangulo: " << endl;
	cin >> l1 >> l2 >> l3;

	}

	cout << "Cantidad de triangulos ingresados: " << triang <<endl;
	cout << "Cantidad de equilateros: " << equi <<endl;
	cout << "cantidad de isoceles: " << isoc << endl;
	cout << "Cantidad de escalenos: " << esca <<endl;
	return 0;
}
