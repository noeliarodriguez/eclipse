//============================================================================
// Name        : FuncionReemplazar_Caracteres.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void reemplazar (string& s, char v, char n){ // v de viejo y n de nuevo

		// Se utiliza & porque es por referencia, se reempleza la misma cadena
	int i = 0;
	while(s[i] != '\0'){
		if (s[i] == v){

			s[i] = n;
		}
		i++;
	}
	return;
}

// Echo con for

/**
 * for (int i=0; s[i]!='\0';i++){
 * if ................
 *
 */

int main() {

	string saludo = "Hola, como estas?";
	reemplazar(saludo, 'o', 'e');
	cout << saludo << endl;
	return 0;
}
