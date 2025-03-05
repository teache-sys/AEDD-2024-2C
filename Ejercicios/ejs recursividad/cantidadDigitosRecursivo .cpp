#include <iostream>
using namespace std;

int cantDigitos (int numero){
	if(numero < 10){
		return 1;
	}
	if(numero == 0){
		return 0;
	}else{
		return 1+cantDigitos(numero/10);
	}
}

int main(int argc, char *argv[]) {
	int numero;
	cin >> numero;
	cout << cantDigitos (numero);
	return 0;
}

