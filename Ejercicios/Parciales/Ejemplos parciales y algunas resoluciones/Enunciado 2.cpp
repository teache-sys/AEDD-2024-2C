#include <iostream>
using namespace std;

int cantDig(int numero);

int main(int argc, char *argv[]) {
	int N,X,cant_digitos,digito,ult_dig,sumapar,sumaimpar,posicion;
	
	cin >> N;
	
	for (int i=1;i<=N;i++){
		cin >> X;
		
		cant_digitos = cantDig(X);
		
		posicion=cant_digitos;
		sumapar=0,sumaimpar=0;
		ult_dig=X%10;
		while(X>0 and posicion>0){
			digito=X%10;
			if(posicion%2==0)
				sumapar += digito;
			else 
				sumaimpar += digito;
			X/=10;
			posicion--;
		}
		cout << sumaimpar << " " << sumapar << endl;
		cout << ult_dig * digito << endl;
	}
	
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
