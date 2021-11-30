#include <iostream>

using namespace std;

int main(){
	
	int var1 = 0;
	int var2 = 0;
	bool es_divisible = false;
	
	cout << "Ingrese el valor de los dos numeros: ";
	cin >> var1 >> var2;
	cout << endl;
	
	if(var1 % var2 == 0 || var2 % var1 == 0)
		es_divisible = true;
	
	if(es_divisible)
		cout << "Uno de los numeros es divisible";
	else
		cout << "Ninguno de los numeros es divisible";
}
