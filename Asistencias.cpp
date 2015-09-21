
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include <string.h>
#include <string>
#include <fstream>

using namespace std;

struct Asist{
	int dia;
	int fentrada;
	int fsalida;
};

int hsTra (int sal, int ent){
	long hor;
	if((sal%100)<(ent%100)){
		hor = (sal - ent) - 40;
	}else{
		hor = (sal - ent);
	}
	return hor;
} //La razon es porque los minutos no pueden ser igual o superar los 60
//(porque las 0860 serian en realidad las 0900). De esta forma si tengo un
//empleado que entro a las 8:01 y salio a las 9:00 seria:
//0900-0801 = 99
//99 - 40 = 59
//el empleado trabajo 59 minutos


int totalhs (int total, int mas)
{
	if(((total%100)+(mas%100)) > 59)
	{
		total += mas + 40;
	}
	else
	{
		total += mas;
	}
	return total;
}

long promediohs (long totalhsxmes, long dias){

float prom_decimal = ((totalhsxmes/100) + (float(totalhsxmes%100))/60)/dias;
long media = (prom_decimal - int(prom_decimal/1))*60 + int(prom_decimal/1)*100;

return media;
}


FILE *asisten;
FILE *datos;

int main(){
	Asist Asistencia;
	int mes,dias;

	string numemp;  //1700

	cout << "Ingrese numero de mes y cantidad de dias que tiene:";    cin >> mes >> dias;
	cout << "Ingrese numero de empleado:";    cin >> numemp;


	numemp+=".dat";


	datos = fopen ("datos.txt", "w");

	bool flag = false;
	int dias_m8[30] = {0};
	int cantH;
	int totalhsxmes = 0;
	fprintf(datos, "%s",   "Inasistencias \r\n");
	fprintf(datos, "%s",   "============= \r\n");

	int inasistencias = 0;
	for(int i=1; i<=dias; i++){
		int j = i;
		asisten = fopen(numemp.c_str(),"rb");
		fread(&Asistencia, sizeof(Asist),1,asisten);

		while (!feof(asisten)){
			if(i==1){
				cantH = hsTra (Asistencia.fsalida,Asistencia.fentrada);
				if (cantH < 800){
					dias_m8[j-1] = Asistencia.dia;
					j++;
				}
				totalhsxmes = totalhs(totalhsxmes, cantH);

			}

			if(Asistencia.dia == i){
				flag = false;
				break;
			}else{
				flag = true;

			}

			fread(&Asistencia, sizeof(Asist),1,asisten);

		}
		// Muestro inasistencias
		if(flag){
			fprintf(datos,"%s %d \r\n", "Dia: ", i);
			inasistencias++;
		}

	}
	fprintf(datos,"%s","\r\n");
	fprintf(datos, "%s",   "Menos de 8 hs \r\n");
	fprintf(datos, "%s",   "============== \r\n");

	// Muestro dias que trabajo menos de 8 hs
	for(int i=0;i<30;i++)
		if(dias_m8[i] != 0) fprintf(datos,"%s %d %s", "Dia:", dias_m8[i], "\r\n\r\n");

	// Dias trabajados
	int diasT = dias-inasistencias;
	// Cantidad de horas trabajados en el mes
	fprintf(datos,"%s","Cantidad horas trabajadas \r\n");
	fprintf(datos, "%s","======================== \r\n");
	fprintf(datos,"%d",totalhsxmes/100);
	fprintf(datos,"%s",",");
	fprintf(datos,"%d %s",totalhsxmes%100, "hs\r\n\r\n");


	// Promedio de horas trabajadas por dia
	int promedio = promediohs(totalhsxmes,diasT);

	fprintf(datos,"%s","Promedio de horas trabajadas en el mes \r\n");
	fprintf(datos, "%s","===================================== \r\n");


	fprintf(datos,"%d",promedio/100);
	fprintf(datos,"%s",",");
	fprintf(datos,"%d %s",promedio%100, "hs");


	fclose(asisten);
	fclose(datos);



	return 0;
}
