#include <iostream>
using namespace std;

void cargarArreglo(int v[], int tl, int &suma){
	for(int i = 0 ; i < tl ; i++){
		cin >> v[i];
		suma += v[i];
	}
}

int caramelos(int v[],int tl,int prom){
	int aux=0;
	for(int i = 0 ; i < tl ; i++){
		if(v[i] > prom){
			aux += v[i]-prom;
			
		}
	}
	return aux;
}

int main(int argc, char *argv[]) {
	int n, v[10000], suma = 0;
	cin >> n;
	
	cargarArreglo(v,n, suma);
	int prom = suma / n;
	
	int aux = caramelos(v,n,prom);
	cout << aux << endl;
	
	return 0;
}

