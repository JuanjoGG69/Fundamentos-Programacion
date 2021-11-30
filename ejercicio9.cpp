#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main(){
	
	float radianes1 = 0;
	float radianes2 = 0;
	float grados1 = 0;
	float grados2 = 0;
	
	cout << "Ingrese el primer grado: ";
	cin >> grados1;
	cout << endl;
	cout << "Ingrese el segundo grado: ";
	cin >> grados2;
	cout << endl;
	
	radianes1 = grados1 * PI/180;
	radianes2 = grados2 * PI/180;
	
	cout << "Los radianes equivalentes al primer grado ingresado son: " << radianes1 << endl;
	cout << "Los radianes equivalentes al segundo grado ingresado son: " << radianes2 << endl;
	
	return 0; 
	
}
