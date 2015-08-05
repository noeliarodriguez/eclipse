//============================================================================
// Name        : FuncionGenerarCadena.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string generar(int x, char y){
	string cadena="";
	for (int i=0; i<x; i++){
		cadena+=y; // significa cadena = cadena + y
	}
	return cadena;
}

int main() {

	cout << generar (20,'C');
	return 0;
}
