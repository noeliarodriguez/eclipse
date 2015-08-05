//============================================================================
// Name        : Ejercicio17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Se ingresa un conjunto de valores reales, cada uno de los
//cuales representan el sueldo de un empleado, excepto el último valor que
//es cero e indica el fin del conjunto. Se pide desarrollar un programa que
//determine e informe:
//a)	Cuántos empleados ganan menos $3.520.
//b)	Cuántos ganan  $3.520 o más pero menos de $5.780.
//c)	Cuántos ganan $5.780 o más pero menos de $15.999.
//d)	Cuántos ganan $15.999 o más.

//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	int acum;
	int acum1;
	int acum2;
	int acum3 = 0;

	cout << "Ingrese el sueldo del empleado: ";
	cin >> a;
	while (a>0){
	if (a < 3520){
			acum++;
		}
		if ((a >= 3520) and (a < 5780)){
			acum1++;
		}
		if ((a >= 5780) and (a < 15999)){
			acum2++;
		}
		if (a >= 15999){
			acum3++;
		}
		cout << "Ingrese el sueldo del empleado: ";
		cin >> a;
	}

	cout << "Empleados que ganan menos de 3520: " << acum <<endl;
	cout << "Empleados que ganan 3520 o mas pero menos de 5780: " << acum1<<endl;
	cout << "Empleados que ganan 5780 o mas pero menos de 15999: " << acum2<<endl;
	cout << "Empleados que ganan 15999 o mas: " << acum3;
	return 0;
}
