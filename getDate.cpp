//============================================================================
// Name        : getDate.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <iostream>
#include <time.h>

using namespace std;

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

// programa principal que muestra como utilizar a la funcion getDate
int main()
{
   int dia, mes, anio;

   // obtengo la fecha actual
   getDate(dia,mes,anio);


   cout << "Dia: " << dia  << endl;
   cout << "Mes: " << mes << endl;
   cout << "Anio: " << anio << endl;;

   return 0;
}
