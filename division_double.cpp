//============================================================================
// Name        : division_double.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//Casteamos la variable a para que el operador / entienda que el resultado debe ser double

	cout << "Ingrese dos valores: ";
	int a,b;
	cin >> a >> b;
	if (b!=0){
		double r = (double)a/b;  // Casteando la division obtengo el resultado REAL y no ENTERO
		cout << a <<"/"<< b << " = " << r;
	}


	return 0;
}
