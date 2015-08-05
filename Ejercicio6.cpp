//============================================================================
// Name        : Ejercicio6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dadas dos fechas informar cual es la más reciente. Determine
// cuales serían los datos de entrada  y las leyendas a informar de acuerdo
// al proceso solicitado.
//============================================================================

#include <iostream>
using namespace std;
#include <time.h>



// Devuelve Dia / mes / año  =>> diaMesAño (todo junto)
long dmaToddmmaaaa(int d,int m, int a){
	return d*1000000+m*10000+a;
}

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

int main() {
	int d,d1,m,m1,a,a1;
	cout << "ingrese una fecha (dd/mm/aaaa): ";
	cin >> d >> m >> a;
	cout << "ingrese otra fecha (dd/mm/aaaa): ";
	cin >> d1 >> m1 >> a1;

	//Convierto los atributos en fecha TodoJunto
	long f1 = dmaToddmmaaaa(d,m,a);
	long f2 = dmaToddmmaaaa(d1,m1,a1);

	// fecha actual
	int dia,mes,anio;
	getDate(dia,mes,anio);
	long hoy = dmaToddmmaaaa(dia,mes,anio);

	//para comparar las fechas, las paso a dias totales
	long f1_dias = ddmmaaaToDma(f1,d,m,a);
	long f2_dias = ddmmaaaToDma(f2,d1,m1,a1);
	long hoy_dias = ddmmaaaToDma(hoy,dia,mes,anio);


	//resto las fechas y comparo
	int rest1 = hoy_dias-f1_dias;
	int rest2 = hoy_dias-f2_dias;

	if (rest1>rest2){
		cout << "La fecha " << f2 << "es mas cercana a hoy " << hoy << endl;
		}else if(rest2>rest1){
			cout << "La fecha " << f1 << "es mas cercana a hoy " << hoy;
		}

	return 0;
}
