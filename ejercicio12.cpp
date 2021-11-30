#include <iostream>

using namespace std;

int main(){
	
	double descuentopuntos = 0;
	double descuentokm = 0;
	
	double billete = 0;
	
	cout << "Inserte el precio de su billete: ";
	cin >> billete;
	cout << endl;
	
	descuentopuntos = billete * 0.96;
	descuentokm = billete * 0.98;
	
	cout << descuentopuntos << " " << descuentokm;
	
}
