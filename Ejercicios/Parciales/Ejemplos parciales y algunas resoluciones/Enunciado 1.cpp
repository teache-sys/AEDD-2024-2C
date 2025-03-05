#include <iostream>
#include <cmath>
using namespace std;

int cantDig(int numero);

int main(int argc, char *argv[]) {
	int T,cant_digitos,numero,numero_orig,suma,total=0;
	
	cin >> T;
	
	for (int i=1;i<=T;i++){
		cin >> numero;
		
		cant_digitos = cantDig(numero);
	
		suma=0;
		numero_orig=numero;
		while(numero>0){
			suma += pow(numero%10,cant_digitos); 
			numero/=10;
		}
		if(suma==numero_orig){
			total++;
			cout << "Narcisista" << endl;
		}
		else cout << "No" << endl;
	}
	cout << "Total = " << total;
	return 0;
}
int cantDig(int numero){
	int cantidad=0;
	while(numero>0){
		numero/=10;
		cantidad++;
	}
	return cantidad;
}
