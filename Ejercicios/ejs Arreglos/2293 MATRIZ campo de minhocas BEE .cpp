#include <iostream>
using namespace std;
#define tf 100



void cargarMatriz(int matriz[][tf], int filas, int columnas){
	for(int i=0; i < filas; i++ ){
		for(int j=0; j < columnas ; j++){
			cin >> matriz[i][j];
		}
	}
}
	
int recorrerFilas(int matriz[][tf], int filas, int columnas){
	int sumador, mayorSumaColumnas = 0;
	for(int i = 0 ; i < filas ; i++){
		sumador = 0;
		for(int j = 0 ; j < columnas ; j++){
			sumador += matriz[i][j];
		}
		if(sumador > mayorSumaColumnas){
			mayorSumaColumnas = sumador;
		}
	}
	return mayorSumaColumnas;
}

int recorrerColumnas(int matriz[][tf], int filas, int columnas){
	int sumador, mayorSumaFilas = 0;
	for(int i = 0 ; i < columnas ; i ++){
		sumador = 0;
		for(int j = 0 ; j < filas ; j++){
			sumador += matriz[j][i];
		}
		if(sumador > mayorSumaFilas){
			mayorSumaFilas = sumador;
		}
	}
	return mayorSumaFilas;
}
	
	
	
int main(int argc, char *argv[]) {
	int filas, columnas;
	cin >> filas >> columnas;
	int matriz[tf][tf];
	cargarMatriz(matriz,filas,columnas);
	int mayorColumna =  recorrerColumnas(matriz,filas,columnas);
	int mayorFila =  recorrerFilas(matriz,filas,columnas);
	if(mayorColumna > mayorFila){
		cout << mayorColumna << endl;
	}else{
		cout << mayorFila << endl;
	}
	
	
	return 0;
}

