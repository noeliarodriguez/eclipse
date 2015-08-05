//============================================================================
// Name        : FechaToDigitos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
// 17/03/1992 => 17031992




// Devuelve Dia / mes / año  =>> diaMesAño (todo junto)
long dmaToddmmaaaa(int d,int m, int a){
	return d*1000000+m*10000+a;
}


// Usamos & para devolver los datos por referencia, entonces los datos que ingresa los utiliza
// en la funcion y los devuelve una vez operado
//  17031992 => 17/03/1992
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

//Devuelve Dia / Mes / año =>> añoMesDia (todo junto)
// De esta manera se pueden comparar fechas

long ddmmaaaaToAaaammdd (long fecha){
	int dia,mes,anio;
	ddmmaaaToDma(fecha,dia,mes,anio);
	return anio*10000+mes*100+dia;
}

int main() {

	// Este es otro programa

/*
	int d,m,a;
	cout << "Ingrese su fecha de nacimiento separado por espacios: " << endl;
	cin >> d >> m >> a;
	long r = dmaToddmmaaaa(d,m,a);
	cout << "Todo junto: " << r << endl;

	//limpiamos las variables
	d = 0;
	m = 0;
	a = 0;

	ddmmaaaToDma(r,d,m,a);
	cout << "Dia: " << d << " Mes: "<< m << " Año: "<< a <<endl;
*/
	cout << "Ingrese fecha 1 (dd,mm,aaaa): ";
	int d1,m1,a1;
	cin >> d1 >> m1 >> a1;
	cout << "Ingrese fecha 2 (dd,mm,aaaa): ";
	int d2,m2,a2;
	cin >> d2 >> m2 >> a2;

	// Devolver fecha unida mediante composicion de funciones
	long f1 = ddmmaaaaToAaaammdd(dmaToddmmaaaa(d1,m1,a1));
	long f2= ddmmaaaaToAaaammdd(dmaToddmmaaaa(d2,m2,a2));
	// Comparamos las fechas
	if (f1>f2){
		cout << f1<<" es posterior que " << f2;
	}
	else {
		cout << f2 << " es posterior que " << f1;
		}

	return 0;
}
