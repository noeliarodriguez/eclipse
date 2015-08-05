//============================================================================
// Name        : Ejercicio9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dados un mes y el año correspondiente informar cuantos días tiene ese mes.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int mes;
	int anio;
	int dias;

	cout << "ingrese un mes y un anio: ";
	cin >> mes >> anio;
	bool bisiesto = (anio/4) % 1 == 0; //Para saber si el resultado es entero o decimal

	switch (mes) {
			case 1:
				dias = 31;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 2:
				if (bisiesto){
						dias = 29;
						cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";

				}else{
				dias = 28;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				}
				break;
			case 3:
				dias = 31;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 4:
				dias = 30;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 5:
				dias = 31;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 6:
				dias = 30;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 7:
				dias = 31;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 8:
				dias = 31;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 9:
				dias = 30;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 10:
				dias = 31;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 11:
				dias = 30;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias";
				break;
			case 12:
				dias = 31;
				cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias" <<endl;
				break;
			default:
				cout << "Usted ha ingresado un dato incorrecto "<<endl;
				break;
		}



	return 0;
}
