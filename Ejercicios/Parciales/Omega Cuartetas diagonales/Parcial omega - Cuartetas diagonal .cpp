#include <iostream>
using namespace std;

void cargarMatriz(int mat[][20], int d){
	for(int i = 0 ; i < d ; i++){
		for(int j = 0 ; j < d ; j++){
			cin >> mat[i][j];
		}
	}
}
int main(int argc, char *argv[]) {
	int d;
	int matriz[20][20], v[20];
	cin >> d;
	bool esimpar;
	int z = 0;
	cargarMatriz(matriz,d);
	
	
	
	for(int i = 0 ; i < d-1 ; i++){
		for(int j = 0 ; j < d-1 ; j++){
			esimpar = true;
			
			if(i == j){
				if(matriz[i][j] %2 ==0){esimpar = false;}
				if(matriz[i][j+1] %2 ==0){esimpar = false;}
				if(matriz[i+1][j] %2 ==0){esimpar = false;}
				if(matriz[i+1][j+1] %2 ==0){esimpar = false;}
				
				if(esimpar) z++;
				
			}
		}
	}
	
	if(z % 2 == 0){
		
		for(int j = 0 ; j < d ; j++){
			v[j] = matriz[0][j];
		}
		for(int t = 0 ; t < d ; t++){
			matriz[0][t] = matriz[d-1][t];
		}
		for(int q = 0 ; q < d ; q++){
			matriz[d-1][q] = v[q];
		}
	}else {	
		
		for(int j = 0 ; j < d ; j++){
			v[j] = matriz[j][0];
		}
		for(int t = 0 ; t < d ; t++){
			matriz[t][0] = matriz[t][d-1];
		}
		for(int q = 0 ; q < d ; q++){
			matriz[q][d-1] = v[q];
		}
	}
	
	
	for(int i = 0 ; i < d ; i++){
		for(int j = 0 ; j < d ; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
	
	
	
