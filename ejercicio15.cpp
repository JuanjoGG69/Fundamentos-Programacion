#include <iostream>

using namespace std;

int main(){
	
	int caja_dcha = 0;
	int caja_izda = 0;
	int aux = 0;
	
	cout << "Introduce el valor de la caja de la derecha: ";
	cin >> caja_dcha;
	cout << endl;
	
	cout << "Introduce el valor de la caja de la izquierda: ";
	cin >> caja_izda;
	cout << endl;
	
	aux = caja_izda;
	caja_izda = caja_dcha;
	caja_dcha = aux;
	
	cout << "La caja de la derecha contiene el valor: " << caja_dcha << endl;
	cout << "La caja de la izquierda contiene el valor: " << caja_izda << endl;
	
	
}
