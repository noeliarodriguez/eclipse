//============================================================================
// Name        : prueba.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese dos valores:" << endl;
		int a,b;
		cin >> a;
		cin >> b;
		int contador = 0;
		int suma = 0;

		while ( contador < a) {
			suma = suma+b;
			contador++;
		}

		cout << a << "X" << b << "=" << suma << endl;
	return 0;
}
 