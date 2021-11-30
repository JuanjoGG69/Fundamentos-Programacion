#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double vp = 0;
	double v_inicial = 0;
	double v_final = 0;
	
	cout << "Ingrese el valor inicial: ";
	cin >> v_inicial;
	cout << endl;
	cout << "Ingrese el valor final: ";
	cin >> v_final;
	cout << endl;
	
	vp = abs(100 * ((v_final - v_inicial) / v_inicial));
	
	cout << "variacion porcentual: " << vp <<" %";
	
	return 0;
}
