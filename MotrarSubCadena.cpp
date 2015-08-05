//============================================================================
// Name        : MotrarSubCadena.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string subCadena (string s , int d, int h) // cadena, desde, hasta
{

	string cadena = "";
	for (int i=d; i<h; i++){
		cadena+=s[i];
	}
	return cadena;

}


int main() {
	string saludo = "Hola como andas";
	string saludo_x = subCadena(saludo,3,6);
	cout << "[" << saludo_x << "]";
	return 0;
}
