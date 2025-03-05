#include <iostream>
using namespace std;
// codifique completamente la funcionC aquí
void funcionC( int x, int y ){
	int menor, mayor, contador = 0;
	int suma = 0;
		if(x < y){
			menor = x;
			mayor = y;
		}else{
			mayor = y;
			menor = x;
		}
	
		for(int i = menor ; i <= mayor ; i++){
			if(i % 2 == 0){
				suma = suma * i;
			}
		}
		cout << "la suma es: " << suma << endl;
		while(suma > 0){
			suma/=10;
			contador++;
		}
		cout << "La cantidad de digitos que tiene esa suma :" << contador << endl;
	
	
	
	
	
}
int main(int argc, char *argv[]) {
	// declare las variables necesarias aquí...
	int x, y;
		do{
			cin >> x >> y;
		} while((x %2 != 0 and y %2 == 0) or (y %2 != 0 and x %2 == 0));
		// codifique el ingreso de datos del problema aquí...
		// llamada a la función y visualización de resultados aquí...
		funcionC(x,y);
	return 0;
}

