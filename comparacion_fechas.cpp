//============================================================================
// Name        : comparacion_fechas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dadas dos fechas, comparar cual es la mas cercana
// a la fecha de hoy
//============================================================================

#include <iostream>
using namespace std;
#include <time.h>

// funcion que asigna la fecha actual en los parametros dia, mes y anio
void getDate(int& dia, int& mes, int& anio)
{
   // fecha actual expresada en segundos
   time_t timestamp;
   time(&timestamp);

   // separo la fecha actual (expresada en segundos) en atributos
   struct tm* fechaActual = localtime(&timestamp);
   dia = fechaActual->tm_mday;
   mes = fechaActual->tm_mon+1;
   anio = fechaActual->tm_year+1900;
}
// Devuelve Dia / mes / año  =>> diaMesAño (todo junto)
// Luego multiplicamos x30 y x360 para obtener la fecha en total de dias
// Obviamos que hay anios biciestos y meses con 28 dias, por eso multiplicamos por 360 y no por 365

long dmaToddmmaaaa(int d,int m, int a){
	return d*1000000+m*10000+a;
}

// Usamos & para devolver los datos por referencia, entonces los datos que ingresa los utiliza
// en la funcion y los devuelve una vez operado
//  17031992 => 17/03/1992
long ddmmaaaToDma(long fecha, int& d, int& m, int& a){

	//obtengo el dia
	d = fecha/1000000;

	// para obtener el mes necesito el resto de la division entera de fecha/1000000
	// que es igual a 081992
	int resto = (fecha%1000000);
	m = (resto/10000);

	// para obtener el anio necesito el resto de la division con el resto anterior, osea: 081992%10000
	a = (resto%10000); // Lo que hace es ir moviendo la coma 08,1992

	return d+m*30+a*360;
}


int main() {
	cout << "Ingrese una fecha separada por espacios (dd/mm/aaaa): " << endl;
	int d,m,a;
	cin >> d >> m >> a;
	cout << "Ingrese otra fecha: ";
	int d1,m1,a1;
	cin >> d1 >> m1 >> a1;



 // Primero paso las fechas separadas a fechas todo junto

	long fecha1 = dmaToddmmaaaa(d, m, a);
	long fecha2 = dmaToddmmaaaa(d1, m1, a1);

// Despues esas fechas juntas las paso a dias
	long fecha1_dias = ddmmaaaToDma(fecha1, d, m, a);
	long fecha2_dias = ddmmaaaToDma(fecha2, d1, m1, a1);

// fecha actual
	int dia,mes,anio;
	getDate(dia, mes, anio);
// la fecha actual la paso a una fecha toda junta
	long fecha_hoyJunto = dmaToddmmaaaa(dia, mes, anio);
// esa fecha la paso a dias
	long fecha_hoyDias = ddmmaaaToDma(fecha_hoyJunto, dia, mes, anio);

// resto la fecha actual menos cada fecha ingresada
	int rest1 = fecha_hoyDias-fecha1_dias;
	int rest2 = fecha_hoyDias-fecha2_dias;


	cout << fecha1 << " = " << fecha1_dias << " dias " <<endl;
	cout << fecha2 << " = " << fecha2_dias << " dias " <<endl;

// Comparo las restas para saber que fecha esta mas cerca
	if (rest1>rest2){
		cout << fecha2_dias << " es mas cercana a la fecha actual";
	}
	else{
		cout << fecha1_dias << " es mas cercana a la fecha actual";
	}


	return 0;

}
