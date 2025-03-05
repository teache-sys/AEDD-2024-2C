#include <iostream>
using namespace std;
/**
ESTE CODIGO FUNCIONA Y HACE BIEN SU TAREA,
LO UNICO ES QUE TARDA MUCHO PARA BEECROWD, DANDOME 
UN "RUNTIME ERROR", EXISTEN VARIACIONES CON MERGE SORT 
PERO NO SE DAN EN LA PRACTICA
*/



void cargarArreglo(int v[100000], int tl){
	for(int i = 0 ; i < tl ; i++){
		cin >> v[i];
	}
}

void intercambio(int &n1, int &n2){
	int aux = n1;
	n1 = n2;
	n2 = aux;
}		

void ordenarPares(int pares[],int k){
	int j;
	
	for(int i = 1 ; i < k ; i++){
		j = i;
		while((j > 0) and (pares[j] < pares[j-1])){
			intercambio(pares[j],pares[j-1]);
			j = j-1;
		}
	}
}

void ordenarImpares(int impares[], int t){
	
	for(int pasada = 1; pasada < t ; pasada++){
		for(int k = 0; k < t-1; k++){
			if(impares[k] < impares[k+1]){
				intercambio(impares[k],impares[k+1]);
			}
		}
		
	}
}	
	
void unirVectores(int v[],int pares[],int impares[], int n,int k,int t){
	ordenarPares(pares,k);
	ordenarImpares(impares,t);
	
	int j = 0;
	for(int i = 0 ; i < k ; i++){
		v[j] =  pares[i];
		j++;
	}
	for(int i = 0 ; i < t ; i++){
		v[j] =  impares[i];
		j++;
	}
}
	
void mostrarArreglo(int v[100000], int tl){
	for(int i = 0 ; i < tl ; i++){
		cout << v[i] << endl;
	}
}
		
int main(int argc, char *argv[]) {
	int n, v[100000], pares[100000],impares[100000];
	cin >> n;
	int k = 0, t = 0;
	cargarArreglo(v,n);
	
	for(int i = 0 ; i < n ; i++){
		if(v[i] % 2 == 0){
			pares[k] = v[i];
			k++;
		}else{
			impares[t] = v[i];
			t++;
		}
	}
	
	unirVectores(v,pares,impares,n,k,t);
	mostrarArreglo(v,n);
	
	return 0;
}

