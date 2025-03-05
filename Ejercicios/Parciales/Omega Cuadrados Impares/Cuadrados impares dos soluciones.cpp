#include <iostream>
using namespace std;
#define tf 100

int main(int argc, char *argv[]) {
	int t;
	int arr[tf];
	cin >> t;
	int matriz[tf][tf];
	//ingreso de datos de matriz
	for(int i = 0 ; i < t ; i++){
		for(int j = 0; j < t; j++){
			cin >> matriz [i][j];
		}
	}
	cout << endl;
	// termino de ingreso
	int z = 0;
	bool impar;
	for(int i = 0 ; i < t ; i++){
		impar = true; 
		for(int j = 0; j < t; j++){
			if(i == j and j < t-1){
				for(int p = i; p <= i+1;p++){
					for(int q=j; q <= j+1; q++){
						if(matriz[p][q] % 2 == 0){
							impar = false;
						}
					}
				}
				if(impar == true){
					z++;
				}
			}
		}
	}
	
	
	if(z % 2 == 0){
		for(int q = 0; q < t; q++){
			arr[q] = matriz[t-1][q];
		}
		for(int i = 0 ; i < t ; i++){
			matriz[t-1][i]=matriz[0][i];
		}
		for(int j = 0 ; j < t ; j++){
			matriz[0][j] = arr[j];
		}
	}
	if(z % 2 != 0){
		for(int q = 0; q < t; q++){
			arr[q] = matriz[q][t-1];
		}
		for(int i = 0 ; i < t ; i++){
			matriz[i][t-1]=matriz[i][0];
		}
		for(int j = 0 ; j < t ; j++){
			matriz[j][0] = arr[j];
		}
	}
	for(int i = 0; i < t ; i++){
		for(int j = 0; j < t; j++){
			cout << matriz [i][j] << " " ;
		}
		cout << endl;
	}
	return 0;
}
/// 2da solucion ///
/*#include <iostream>
using namespace std;

void cargarMatriz(int matriz[][30], int t){
	for(int i = 0 ; i < t ; i++){
		for(int j = 0 ; j < t ; j++){
			cin >> matriz[i][j];
		}
	}
}

int recorrerDiagonalPrincipal(int mat[][30], int t){
	int z = 0;
	for(int i = 0 ; i < t ; i++){
		for(int j = 0 ; j < t ; j++){
			if(i == j and  i != t-1){
				if(mat[i][j] % 2 != 0 and mat[i][j+1] % 2 != 0
					and mat[i+1][j] % 2 != 0 and mat[i+1][j+1] % 2 != 0){
					z++;
				}
			}
		}
	}
	return z;
}

void intercambio(int &a, int &b){
	int aux = b;
	b = a;
	a = aux;
}
	
void cambiarFilaoColumna(int mat[][30], int t, int z){
	
	if(z %2 == 0){
		for(int j = 0 ; j < t ; j++){
			intercambio(mat[0][j],mat[t-1][j]);
		}
	}else{
		for(int j = 0 ; j < t ; j++){
			intercambio(mat[j][0],mat[j][t-1]);
		}
	}
}	
	
void mostrarMatriz(int mat[][30], int t){
	for(int i = 0 ; i < t ; i++){
		for(int j = 0 ; j < t ; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}
int main(int argc, char *argv[]) {
	int t, matriz[30][30]; 	
	
	cin >> t;
	cargarMatriz(matriz,t);
	
	int z=recorrerDiagonalPrincipal(matriz,t);
	
	cambiarFilaoColumna(matriz,t,z);
	
	mostrarMatriz(matriz,t);
	
	return 0;
}*/
