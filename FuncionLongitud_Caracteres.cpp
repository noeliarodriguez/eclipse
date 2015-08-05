//============================================================================
// Name        : FuncionLongitud_Caracteres.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int longitud (string x){
//	int i = 0;
//
//	while (x[i] != '\0'){
//		i++;
//	}
//	return i;


	//Tambien se puede hacer con for, y queda mas compacto
	// Es necesario declarar la variable i afuera del for

int i;
for (i=0;x[i]!='\0';i++);
return i;
}


int main() {

	string saludo = "Hola como andas?";
	int longi = longitud(saludo);
	cout << longi;
	return 0;
}
