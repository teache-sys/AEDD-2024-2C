#include <iostream>
#include <iomanip>
using namespace std;

bool cantDigPares (int numero){
	int digito,cont=0;
	if(numero == 0 and cont == 0){
		return false;
	}
	digito = numero %10;
	if(digito %2 == 0){
		cont++;
		return true;
	}
	return cantDigPares(numero/10);
	
}
	
	int main(int argc, char *argv[]) {
		int numero;
		cin >> numero;
		cout << boolalpha<<cantDigPares (numero);
		return 0;
	}
	
	
	
