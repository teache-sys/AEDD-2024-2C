#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	double matriz[9][9];
	int arregloContador[10]={0},p=0;
	bool ok;
	int instancia,contador=0;
	cin >> instancia;
	
	
	while(contador < instancia){
		ok = true;
		
	
		for(int i=0; i < 9; i++){
			for(int j=0; j < 9; j++){
				cin >> matriz[i][j];
			}
		}
		int k, t=0;
		
		while(t < 9 and ok == true){
			k=0;
			while(k < 9 and ok == true){
				
				for(int i=1; i <= 9 ; i++){
					arregloContador[i]=0;
				}
				
				for(int i=t; i < t+3 ; i++){ // recorro la submatriz
					for(int j=k; j < k+3; j++){
						p=matriz[i][j];
						if(p < 1 || p > 9) {
							ok = false;
						}
						arregloContador[p]++; // sumo uno en cada posicion
					}
				}
				//recorro el arregloContador
				for(int h=1 ; h<=9; h++){
					if(arregloContador[h]!= 1) {
						ok = false;
					}
				}
				k+=3;
			}
			t+=3;
		}
		
		// ahora tengo q recorrer las filas y las columnas
		//y ver si estan los nums del 1 al 9 sin repetir
		for(int i = 0; i < 9 && ok ; i++){
			
			for(int j = 1; j <= 9; j++){
				arregloContador[j] = 0;
			}
			
			for(int j = 0; j < 9; j++){
				p = matriz[i][j] ;
				if(p < 1 || p > 9) { 
					ok = false;
				}
				arregloContador[p]++;
			}
			for(int h = 1; h <= 9; h++){
				if(arregloContador[h] != 1){
					ok = false;
				}
			}
		}
		
		for(int j = 0; j < 9 && ok ; j++){
			
			for(int i = 1; i <= 9; i++){
				arregloContador[i] = 0;
			}
			
			for(int i = 0; i < 9; i++){
				p = matriz[i][j] ;
				arregloContador[p]++;
				if(p < 1 || p > 9) { 
					ok = false;
				}
			}
			for(int h = 1; h <= 9; h++){
				if(arregloContador[h] != 1){
					ok = false;
				}
			}
		}
		
		cout << "Instancia " << contador+1<<endl;
		ok ? cout << "SIM" <<endl : cout << "NAO"<<endl;
		cout << endl;
		contador++;
	}
	
	
	
	return 0;
}


/* 2DA SOLUCION */

/*
#include <iostream>
#include <iomanip>
using namespace std;

void cargarMatriz (int matriz[][9]){
	for(int i=0; i < 9; i++){
		for(int j=0; j < 9; j++){
			cin >> matriz[i][j];
		}
	}
}

bool verificarSubMatriz(int k, int t, int matriz[][9],int arregloContador[10]){
	while(t < 9){
		k=0;
		while(k < 9){
			
			for(int i=1; i <= 9 ; i++){
				arregloContador[i]=0;
			}
			
			for(int i=t; i < t+3 ; i++){ // recorro la submatriz
				for(int j=k; j < k+3; j++){
					int p=matriz[i][j];
					if(p < 1 || p > 9) {
						return false;
					}
					arregloContador[p]++; 
				}
			}
			//recorro el arregloContador
			for(int h=1 ; h<=9; h++){
				if(arregloContador[h]!= 1) {
					return false;
				}
			}
			k+=3;
		}
		t+=3;
	}
	return true;
}
	
bool veficarFilas(int arregloContador[10], int matriz[][9], int i){
		
		for(int j = 1; j <= 9; j++){
			arregloContador[j] = 0;
		}
		
		for(int j = 0; j < 9; j++){
			int p = matriz[i][j] ;
			if(p < 1 || p > 9) { 
				return false;
			}
			arregloContador[p]++;
		}
		for(int h = 1; h <= 9; h++){
			if(arregloContador[h] != 1){
				return false;
			}
		}
	return true;
}

bool verificarColumnas(int arregloContador[10], int matriz[][9], int j){
	for(int i = 1; i <= 9; i++){
		arregloContador[i] = 0;
	}
			
	for(int i = 0; i < 9; i++){
		int p = matriz[i][j];
		if(p < 1 || p > 9) { 
			return false;
		}
		arregloContador[p]++;
	}	
	for(int h = 1; h <= 9; h++){
		if(arregloContador[h] != 1){
			return false;
		}
	}
	return true;
}
int main(int argc, char *argv[]) {
	int matriz[9][9];
	int arregloContador[10]={0};
	int instancia,contador=0;
	cin >> instancia;
	
	
	while(contador < instancia){
		
		
		
		cargarMatriz(matriz);
		int k=0, t=0;
		
		bool b= true ;
		b = verificarSubMatriz(k , t, matriz,arregloContador);
		
		for(int i = 0; i < 9 && b; i++){
			if(b){
				b= veficarFilas(arregloContador,matriz,i);
			}
		}
		
		for(int j = 0; j < 9 && b; j++){
			if(b){
				b = verificarColumnas(arregloContador,matriz,j);
			}
		}
		// ahora tengo q recorrer las filas y las columnas
		//y ver si estan los nums del 1 al 9 sin repetir
		
		cout << "Instancia " << contador+1<<endl;
		b ? cout << "SIM" <<endl : cout << "NAO"<<endl;
		cout << endl;
		contador++;
	}
	
	
	
	return 0;
}



*/

