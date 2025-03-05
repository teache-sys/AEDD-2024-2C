#include <iostream>
using namespace std;

int semillasDesperdiciadas(int matriz[100][100], char a, int numero, int fila, int columna){
	// tengo q retornar la cantidad de semillas perdidas
	int semillasP = 0;
	if(a == 'F'){
		for(int j = 1; j <= columna; j++){
			matriz[numero][j]++;
		}
	}else if (a == 'C'){
		for(int i = 1; i <= fila; i++){
			matriz[i][numero]++;
		}
	}
	for(int i = 1; i <= fila; i++){
		for(int j = 1; j <= columna; j++){
			if(matriz[i][j] != 1){
				semillasP += matriz[i][j];
			}
			
		}
	}
	return semillasP;

}


int main(int argc, char *argv[]) {
	int fila, columna; cin >> fila >> columna;
	int pasada; cin >> pasada;
	
	int matriz[100][100]={0};
	
	int s = 0;
	char a;
	int numero;
	
	for(int i = 1; i <= pasada; i++){
		cin >> a >> numero;
		s = semillasDesperdiciadas(matriz,a,numero,fila,columna);
		for(int i = 1; i <= fila; i++){
			for(int j = 1; j <= columna; j++){
				cout << matriz[i][j];
			}
			cout << endl;
		}
	}
	cout << s << endl;
	
	return 0;
}

