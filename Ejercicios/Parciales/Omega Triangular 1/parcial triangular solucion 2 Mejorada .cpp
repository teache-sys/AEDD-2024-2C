#include <iostream>
using namespace std;

void cargarMatriz(int mat[][100], int d){
	for(int i = 0 ; i < d ; i++){
		for(int j = 0 ; j < d ; j++){
			cin >> mat[i][j];
		}
	}
}
int main(int argc, char *argv[]) {
	int d;
	int mat[100][100];
	cin >> d;
	bool noestaordenado = true;
	int anterior;
	cargarMatriz(mat,d);
	
	anterior = mat[1][0];
	for(int i = 2 ; i < d && noestaordenado; i++){
		for(int j = 0 ; j < i && noestaordenado; j++){
			if(anterior <= mat[i][j]){
				anterior = mat[i][j];
			}else if(anterior > mat[i][j]){
				noestaordenado = false;
			}
		}
	}		
	noestaordenado? cout << "SI": cout << "NO" << endl;
		
	return 0;
}
	
	
