#include <iostream>

using namespace std;

const double PRECIOBASE = 150;

int main(){
	
	double km = 0;
	double preciofinal = 0;
	
	cout <<	"Ingrese el numero de km que va a recorrer: ";
	cin >> km;
	
	preciofinal = 150 + km * 0.1;
	
	cout << "El precio final es: " << preciofinal << " euros" << endl;
	
	
	
	return 0;
}
