#include <iostream>

using namespace std;

int main(){
	
	bool l_letra = false;
	char letra;
	
	bool l_edad = false;
	int edad = 0;
	
	bool l_adivine = false;
	int adivine  = 0;
	
	bool l_anio = false;
	int anio = 0;
	
	bool l_velocidad = false;
	int velocidad = 0;
	
	bool l_vocal = 0;
	char vocal;
	
	cout << "Ingrese la letra, edad, adivine, anio, velocidad, vocal: ";
	cin >> letra >> edad >> adivine >> anio >> velocidad >> vocal;
	
	if(letra >= 97 && letra <= 122)
		l_letra = true;
		
	if(edad < 18 || edad > 65)
		l_edad = true;
		
	if(adivine >= 1 && adivine <= 100)
		l_adivine = true;
		
	if((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
		l_anio = true;
		
	if(velocidad >= 100)
		l_velocidad = true;
		
	if(vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u')
		l_vocal = true;
	
	cout << endl;
	cout << l_letra << " " << l_edad << " " << l_adivine << " " << l_anio << " " << l_velocidad << " " << l_vocal;
	
	
	
}
