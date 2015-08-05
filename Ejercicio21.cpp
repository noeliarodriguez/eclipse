//============================================================================
// Name        : Ejercicio21.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Dados 5 valores informar el mayor
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int mayor;
	int n, n1, n2, n3, n4, n5;
	cin >> n >> n1 >> n2 >> n3 >> n4 >> n5;

	if (n>n1 and n>n2 and n>n3 and n>n4 and n>n5){
		mayor = n;
	}else{
		if(n2>n and n2>n3 and n2>n4 and n2>n5){
			mayor = n2;
		}else{
			if (n3>n and n3>n2 and n3 > n4 and n3>n5){
				mayor = n3;
			}else{
				if (n4>n and n4>n2 and n4>n3 and n4>n5){
					mayor = n4;
				}else{
					if(n5>n and n5>n2 and n5>n3 and n5>n4){
						mayor = n5;
					}
				}
			}
		}
	}

cout << "El mayor es: " << mayor;

	return 0;
}
