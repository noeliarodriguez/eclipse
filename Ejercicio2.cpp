//============================================================================
// Name        : Ejercicio2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dada una terna de números naturales que representan al día,
// al mes y al año de una determinada fecha informarla como un solo número
// natural de 8 dígitos (AAAAMMDD).
//============================================================================

#include <iostream>
using namespace std;


long fechaOK (int& dia, int& mes, int& anio){
	long fecha = anio*10000+mes*100+dia;
	return fecha;
}

int main() {
	cout << "Ingrese una fecha (dd/mm/aaaa): ";
	int d,m,a;
	cin >> d >> m >> a;
	long fecha = fechaOK(d,m,a);
	cout << "Fecha expresada en numero de 8 digitos: " << fecha;
	return 0;
}
