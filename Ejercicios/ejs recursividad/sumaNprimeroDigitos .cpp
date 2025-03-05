#include <iostream>
using namespace std;

int suma(int numero){
	if(numero == 0){
		return 0;
	}
	else{
		return numero+suma(numero-1);
	}
}

int main(int argc, char *argv[]) {
	int numero;
	cin >> numero;
	cout << suma (numero);
	return 0;
}

