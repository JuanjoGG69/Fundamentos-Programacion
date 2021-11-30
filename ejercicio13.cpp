#include <iostream>

using namespace std;

const int SEG_HOR = 3600;
const int SEG_MIN = 60;

int main(){
	
	//horas
	int hor1 = 0;
	int hor2 = 0;
	
	//minutos
	int min1 = 0;
	int min2 = 0;
	
	//segundos
	int seg1 = 0;
	int seg2 = 0;
	
	//variables que contienen cuantos segundos son las horas, minutos y segundos anteriores
	int all_seg1 = 0;
	int all_seg2 = 0;
	
	cout << "Introduce el numero de horas, minutos y segundos inicial: ";
	cin >> hor1 >> min1 >> seg1;
	cout << endl;
	
	cout << "Introduce el numero de horas, minutos y segundos final: ";
	cin >> hor2 >> min2 >> seg2;
	
	//pasamos todos a segundos
	all_seg1 = hor1*SEG_HOR + min1*SEG_MIN + seg1;
	all_seg2 = hor2*SEG_HOR + min2*SEG_MIN +seg2;
	
	//mostramos el resultado
	cout << endl;
	cout << "La diferencia de segundos es: " << all_seg2 - all_seg1 <<" s";
	
	
}
