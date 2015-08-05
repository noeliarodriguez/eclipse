//============================================================================
// Name        : Ejercicio15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Se realiza una inspección en una fábrica de pinturas, y
//se detectaron 20 infracciones. De cada infracción se tomó nota de los siguientes datos:
//-	Tipo de Infracción (1, 2, 3, ó 4)
//-	Motivo de la infracción
//-	Valor de la multa
//-	Gravedad de la infracción (‘L’,‘M’, ‘G’)
//Se pide informar al final del proceso:
//	Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
//	La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad  “G” sean mayor a 3

//============================================================================

#include <iostream>
using namespace std;

int main() {
	int fabrica;
	int multa;
	int infraccion;
	int cant_infr;

	cout << "** Fabrica Ferremat: 1234 " << endl;
	cout << "** Fabrica Popeye: 4321" <<endl;
	cout << "** Fabrica Rolo: 2314 " << endl;
	cout << "** Fabrica Cacho: 4411 " << endl;
	cout << "ingrese el cuit de su fabrica (4 digitos): " << endl;
	cin >> fabrica;

	cout << "Infraccion 1: tipo L" << endl;
	cout << "Infraccion 2: tipo M " << endl;
	cout << "Infraccion 3: tipo G " << endl;
	cout << "Infraccion 4: tipo G" << endl;
	cout << "ingrese que numero de infraccion cometio: " << endl;
	cin >> infraccion;

	while ((infraccion >= 1) and (infraccion<=4)){

		switch (infraccion) {
					case 1:
						multa = 300;
						break;
					case 2:
						multa = 400;
						break;
					case 3:
						multa = 700;
						break;
					case 4:
						multa = 1200;
						break;
				}

	int m = multa;
	cout << "Cuantas veces cometio esta infraccion?: ";
	cin >> cant_infr;
	multa = m + (multa*cant_infr);

	cout << "Infraccion 1: tipo L" << endl << "Infraccion 2: tipo M " << endl << "Infraccion 3: tipo G " << endl;
	cout << "Infraccion 4: tipo G" << endl;
	cout << "ingrese que numero de infraccion cometio: " << endl;
	cin >> infraccion;


	}

	if ((infraccion = 3) and (cant_infr >= 3)){
		cout << "Fabrica clausurada " << endl << " Multa total: $" << multa;
	}else if ((infraccion = 4) and (cant_infr >=3)){
		cout << "Fabrica clausurada " << endl << " Multa total: $" << multa;
	}else{
	cout << "La fabrica " << fabrica << " tiene una multa de $" << multa;
	}

	return 0;
}
