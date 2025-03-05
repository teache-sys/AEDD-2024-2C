#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	string arrChica[100], arrRta[100];
	string chica;
	string respuesta;
	for(int i = 0; i < n ; i++){
		cin >> chica;
		cin >> respuesta;
		arrChica[i] = chica;
		arrRta[i] = respuesta;
	}
	string interesada;
	cin >> interesada;
	for(int i = 0; i < n ; i++){
		if(arrChica[i] == interesada){
			cout << arrRta[i] << endl;
		}
	}

	return 0;
}

