#include <iostream>
using namespace std;

int inverso(int numero){
	if(numero < 10){
		return numero;
	}else{
		int digito = numero %10;
		cout << digito << " ";
		return inverso(numero/10);
	}
}



int main(int argc, char *argv[]) {
	int numero;
	cin  >> numero;
	cout << inverso(numero);
	return 0;
}

