#include <iostream>
using namespace std;

int sumaPares(int numero){
	if(numero == 0 or numero == 1){
		return 0;
	}else{
		if(numero % 2 != 0) numero--;
		return numero+sumaPares(numero-2);
	}
}


int main(int argc, char *argv[]) {
	int numero;
	cin >> numero;
	cout << sumaPares(numero);
	return 0;
}

