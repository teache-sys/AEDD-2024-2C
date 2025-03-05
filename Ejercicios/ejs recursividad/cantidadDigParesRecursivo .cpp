#include <iostream>
using namespace std;

int cantDigPares (int numero){
	int digito,cont=0;
	if(numero == 0){
		return 0;
	}
	digito = numero %10;
	if(digito %2 == 0){
		cont++;
	}
	return cont+cantDigPares(numero/10);
	
}
	
	int main(int argc, char *argv[]) {
		int numero;
		cin >> numero;
		cout << cantDigPares (numero);
		return 0;
	}
	
	
