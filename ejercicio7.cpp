#include <iostream>

using namespace std;

int main(){
	
	int x, y, z;
	int aux1, aux2;
	
	cout << "Ingrese las variables x, y, z: ";
	cin >> x >> y >> z;
	
	aux1 = x;
	aux2 = y;
	
	x = z;
	y = aux1;
	z = aux2;
	
	cout << endl;
	cout << x << " ";
	cout << y << " ";
	cout << z << " ";
	
	
}
