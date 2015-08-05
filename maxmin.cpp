//============================================================================
// Name        : prueba.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Ingresar 3 valores distintos y determinar cual es el menor, medio y mayor
//============================================================================

#include <iostream>
using namespace std;

// declaro las funciones que van a determinar el maximo y minimo entre dos valores
int maximo (int a, int b){
	resultado = a;
	if (b>a){
		resultado = b;
	}
	return resultado;
}

int minimo (int a, int b){
	resultado = a;
	if (b<a){
		resultado = b;
	}
	return resultado;
}



int main() {
	cout << "Ingrese tres valores distintos: ";
	int a,b,c;
	cin >> a >> b >> c;
	int menor,medio,mayor;
	if (a>b & a>c){
		mayor = a;
		medio = maximo (b,c);
		menor = minimo (b,c);
	}else if(b>c & b>a){
		mayor = b;
		medio = maximo (a,c);
		menor = minimo (a,c);
	}else{
		mayor = c;
		medio = maximo (a,b);
		menor = minimo (a,b);
	}
}
 