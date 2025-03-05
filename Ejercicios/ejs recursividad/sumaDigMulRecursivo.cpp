#include <iostream>
using namespace std;

int sumaDigMul(int numero, int multiplo){
	int digito, suma =0;
	if(numero == 0){
		return 0;
	}else{
		digito = numero % 10;
		if(digito % multiplo == 0){
			suma+=digito;
		}
		return suma+sumaDigMul(numero/10, multiplo);
	}
}


int main(int argc, char *argv[]) {
	int numero, multiplo;
	cin >> numero >> multiplo;
	cout << sumaDigMul(numero, multiplo);
	return 0;
}

