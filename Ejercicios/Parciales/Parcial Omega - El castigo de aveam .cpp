#include <iostream>
using namespace std;

void verificarTipos(int m[][100], int fila, int columna,int arrTipos[],int &tlTipos,int arrCont[]){
	bool esta = false;
	for(int i = 0; i < fila ; i++){
		for(int j=0; j < columna; j++){
			esta = false;
			for(int t = 0; t < tlTipos;t++){
				if(arrTipos[t] == m[i][j]){ // si ya esta el tipo, incremento solo el contador, si no lo meto
					esta = true;
					arrCont[t]++; 
					
				}
			}
			if(!esta){ // si no esta lo agrego, y cuento uno
				arrTipos[tlTipos] = m[i][j];
				arrCont[tlTipos]++; 
				tlTipos++;
			}
		}
	}
}

void intercambio(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

void ordenar(int arrTipos[],int tlTipos,int arrCont[]){
	for(int pasada = 1; pasada < tlTipos ; pasada++){
		for(int i = 0; i < tlTipos - pasada ; i++){
			if(arrTipos[i] > arrTipos[i+1]){
				intercambio(arrCont[i], arrCont[i+1]);
				intercambio(arrTipos[i], arrTipos[i+1]);
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int fila, columna;
	cin >> fila >> columna;
	int m[100][100], arrTipos[100];
	for(int i = 0; i < fila ; i++){
		for(int j=0; j < columna; j++){
			cin >> m[i][j];
		}
	}
	int tlTipos = 0, arrCont[2500]={0};
	verificarTipos(m,fila,columna,arrTipos,tlTipos,arrCont);
	ordenar(arrTipos,tlTipos,arrCont);
		
	for (int i = 0; i < tlTipos; i++) {
		cout << arrCont[i] << " " ;
	}
	
	
	return 0;
}

