//============================================================================
// Name        : Ejercicio18.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dado un valor M determinar y emitir un listado con
// los M primeros múltiplos de 3 que no lo sean de 5, dentro del conjunto
//de los números naturales.
//============================================================================

#include <iostream>
using namespace std;

bool mul_tres (int n){
		if (n%3){
			return false;
		}else{
			return true;
		}
	}
int main() {
	int num;
	cout << "Ingrese un valor: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	           {
	               if(mul_tres(i)){
	            	   if ((i%5)!=0){
	                	 cout << i << endl;
	            	   }

	                }

	           }
	return 0;
}



