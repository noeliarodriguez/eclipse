//============================================================================
// Name        : Ejercicio_fechas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dado un conjunto de nombres y fechas, informar el nombre de la persona
// mas joven y la de mayor edad. Finaliza ingresando un nombre "fin"
//============================================================================

#include <iostream>
using namespace std;
void ddmmaaaToDma(long fecha, int& d, int& m, int& a){

	//obtengo el dia
	d = fecha/1000000;

	// para obtener el mes necesito el resto de la division entera de fecha/1000000
	// que es igual a 081992
	int resto = (fecha%1000000);
	m = (resto/10000);

	// para obtener el anio necesito el resto de la division con el resto anterior, osea: 081992%10000
	a = resto%10000; // Lo que hace es ir moviendo la coma 08,1992

}

long ddmmaaaaToAaaammdd (long fecha){
	int dia,mes,anio;
	ddmmaaaToDma(fecha,dia,mes,anio);
	return anio*10000+mes*100+dia;
}

int main() {

	string nom;
	long fecha;

	cout << "ingrese nombre: " << endl;
	cin >> nom;
	cout << "ingrese fecha de nac: ";
	cin >> fecha;
	long fechaOK = ddmmaaaaToAaaammdd(fecha);

	//Los datos ingresados hasta ahora van a tomar el valor de las sig. variables
	// Hasta que ingresen mas datos
	long fechaMenor = fechaOK;
	long fechaMayor = fechaOK;
	string nombreMenor = nom;
	string nombreMayor = nom;


	while (nom!="fin"){

			if (fechaOK>fechaMayor){
				fechaMayor = fechaOK;
				nombreMayor = nom;
			}else{
				if(fechaOK<fechaMenor){
				fechaMenor = fechaOK;
				nombreMenor = nom;
				}
			cout << "Ingrese nombre: " <<endl;
			cin >> nom;
			cout << "Ingrese fecha: " <<endl;
			cin >> fecha;
			fechaOK = ddmmaaaaToAaaammdd(fecha);

		}
	}



	cout << "La persona de mayor edad se llama: " << nombreMenor << " y nacio el: " << fechaMenor<< endl;
	cout << "La persona mas joven se llama: " << nombreMayor << " y nacio el: " << fechaMayor;

	return 0;
}
