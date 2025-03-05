#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x, y, contFeliz = 0,ultimaCifra, resultado =0, numeroCuadrado;
	cin >> x >> y;
	int suma;
	for(int i = x ; i <= y; i++ ){
		int resultado=i;
		while(resultado >= 10){
			suma = 0;
			while(resultado > 0){
				ultimaCifra = resultado%10;
				numeroCuadrado = ultimaCifra*ultimaCifra;
				suma+= numeroCuadrado;
				resultado/=10;
			}
			resultado = suma;
		}
		if(resultado == 7 or resultado == 1){
			cout << i << endl;
			contFeliz++;
		}
	}
	if(contFeliz == 0){
		cout << "Sin numeros"<< endl;
	}
	return 0;
}

