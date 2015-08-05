//============================================================================
// Name        : Ejercicio12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Informar los primeros 100 números naturales y su sumatoria
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long acum = 0;
	for (long var = 1; var <= 100; ++var) {
		cout << var << endl;
		acum = acum + var;

	}
	cout << acum;

	return 0;
}
