#include <iostream>
#include <string>
using namespace std;

struct secuencia{
	string nombre;
	string autor;
	int datos[1000];
};

struct informacion{
	secuencia secuencias[500];
	int nroSecuencia;
};

void itemD(informacion p, int primos[3]){
	int cont;
	for(int i = 0; i < 1000; i++){
		int nPrimo = p.secuencias[0].datos[i]; 
		cont = 0;
		for(int j = 1; j < 500; j++){
			// si en las secuencias restantes se repite 3 veces o mas
			for(int i = 0; i < 1000; i++){ // recorro cada dato de una secuencia
				if(nPrimo == p.secuencia[j].datos[i]){
					cont++;
				}
			}
		}
		//una vez recorrida todas las secuencias
		// chequeo si es >= 3
		int t = 0;
		if(cont >= 3){
			primos[t] = nPrimo;
			t++;
		}
		
	}
	

}


int main(int argc, char *argv[]) {
	
	
	return 0;
}

