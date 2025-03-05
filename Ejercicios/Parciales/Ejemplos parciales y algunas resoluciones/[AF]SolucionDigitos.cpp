#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void arreglaDigitos(int & numero, int & cantidadDigitos, bool sumoPares) {
	if (sumoPares) {
		if (cantidadDigitos % 2 == 0) {
			numero /= 10;
			cantidadDigitos--;
		}
	}
	else
		if (cantidadDigitos % 2 != 0) {
			numero /= 10;
			cantidadDigitos--;
	}
}

int cantidadDigitos(int numero) {
	if (numero < 10) return 1;
	return 1 + cantidadDigitos(numero / 10);
}

int sumaDigitos(int numero, int cantidadDigitos, bool sumoPares) {
	int suma = 0;
	arreglaDigitos(numero, cantidadDigitos, sumoPares);
	
	for (int i = 0; i < cantidadDigitos; i += 2) {
		suma += numero % 10;
		numero /= 100;
	}
	
	return suma;
	
}

int main(int argc, char *argv[]) {
	int n;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int numero;
		cin >> numero;
		
		int digitos = cantidadDigitos(numero);
		cout << sumaDigitos(numero, digitos, true) << " " << sumaDigitos(numero, digitos, false) << endl;
		
		int primerDigito = numero / (int) pow(10, digitos - 1);
		int ultimoDigito = numero % 10;
		
		cout <<  primerDigito * ultimoDigito << endl;
	}
	return 0;
}
