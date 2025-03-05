#include <iostream>
using namespace std;

void cargarArreglo(int v[1000], int tl){
	for(int i = 0 ; i < tl ; i++){
		cin >> v[i];
	}
}

int	compararMenor(int v[1000], int tl){
	int menor = v[0];
	for(int i = 1 ; i < tl ; i++){
		if(v[i] < menor){
			menor = v[i];
		}
	}	
	return menor;
}

int	posicionMenor(int v[1000], int tl, int menor){
	for(int i = 0 ; i < tl ; i++){
		if(v[i] == menor){
			return i;
		}
	}
	return 0;
}
int main(int argc, char *argv[]) {
	int v[1000];
	int tl;
	cin >> tl;
	cargarArreglo(v,tl);
	int menor=compararMenor(v,tl);
	cout << "Menor valor: " <<menor << endl;
	int posicion= posicionMenor(v,tl,menor);
	cout << "Posicao: "<<posicion << endl;
	return 0;
}

