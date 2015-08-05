//============================================================================
// Name        : funciones.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// crear una funcion en donde permute los valores. Esto se hace recibiendo los valores
// por referencia con el signo &


void permutar (int& x, int& y){
	// variable auxiliar para guardar el valor de x
	// de esta manera, no pisa el valor de y
	int aux = x;
	x = y;
	y = aux;

}
int main() {
	cout << "Ingresar 2 valores: ";
	int a,b;
	cin >> a >> b;
	permutar(a,b);
	cout << "a=" << a << ", b="<< b;
	return 0;
}
