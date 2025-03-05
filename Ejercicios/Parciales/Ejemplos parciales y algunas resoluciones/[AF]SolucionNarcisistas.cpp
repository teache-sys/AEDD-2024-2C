#include <iostream>
#include <cmath>
using namespace std;

int cantidadDigitos(int numero) {
	if (numero < 10) return 1;
	return 1 + cantidadDigitos(numero / 10);
}

int sumaExponentes(int numero, int cantidadDigitos) {
	int potencia = pow(numero % 10, cantidadDigitos);
	if (numero < 10) return potencia;
	return potencia + sumaExponentes(numero / 10, cantidadDigitos);
}

bool esNarcisista(int numero) {
	return sumaExponentes(numero, cantidadDigitos(numero)) == numero;
}

int main(int argc, char *argv[]) {
	
	int t, numeroChequear, cantidadNarcisistas = 0;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> numeroChequear;
		if (esNarcisista(numeroChequear)) {
			cantidadNarcisistas++;
			cout << "Narcisista" << endl;
		}
		else cout << "No" << endl;
	}
	
	cout << "Total = " << cantidadNarcisistas << endl;
	return 0;
}

