//============================================================================
// Name        : Ejercicio1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dado un número real que representa el importe de una compra
// informar las posibles formas de pago
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese un valor: "<<endl;
	double valor;
	cin >> valor;
	double doscuotas = (valor/2)*1.05;
	double seiscuotas = (valor/6)*1.40;

	cout << "1 cuota de $ " << valor <<endl;
	cout << "2 cuotas de $ " << doscuotas << " total $ " << doscuotas*2 << "(5% de recargo)"<<endl;
	cout << "3 cuotas de $ " << seiscuotas << " total $ " << seiscuotas*6 << "(40% de recargo)" << endl;

	return 0;
}
