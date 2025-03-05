#include <iostream>
using namespace std;

int factorial (int numero){
	if(numero == 1){
		return 1;
	}else{
		return numero*factorial(numero-1);
	}
}


int main(int argc, char *argv[]) {
	int numero;
	cin >> numero;
	cout << factorial (numero);
	
	return 0;
}

