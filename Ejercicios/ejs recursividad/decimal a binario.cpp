#include <iostream>
using namespace std;


int decBinario(int numero){
	if(numero == 0){
		return 0;
	}else{
		int digito = numero % 2;
		return digito + 10 * decBinario(numero / 2);
	}
}


int main(int argc, char *argv[]) {
	int numero;
	cin >> numero;
	cout << decBinario(numero);
	return 0;
}

