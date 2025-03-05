#include <iostream>
using namespace std;

void cargarArreglo(int v[10000], int tl){
	for(int i = 0 ; i < tl ; i++){
		cin >> v[i];
	}
}
	
void intercambio(int &n1, int &n2){
	int aux = n1;
	n1 = n2;
	n2 = aux;
}	
void ordenarArreglo(int v[10000], int tl){
	int min;
	for(int i = 0 ;  i < tl ; i++){
		min = i;
		for(int j = i+1 ;  j < tl ; j++){
			if(v[j] < v[min]) min = j;
		}
		intercambio(v[i],v[min]);
	}
	
}
	
int busqueda(int v[10000], int tl, int buscado){
	int centro, inicio, fin;
	inicio = 0;
	fin = tl - 1;
	int posicion = - 1;
	while(inicio <= fin){
		centro = (inicio + fin) / 2;
		
		if(v[centro] == buscado){
			posicion = centro;
			fin = centro - 1;
		}else{
			if(v[centro] > buscado){
				fin = centro - 1; 
			}else{
				inicio = centro + 1;
			}
		}
	}
	
	return posicion;
}



int main(int argc, char *argv[]) {
	int cantDeC, q, pregunta, posicion, t = 1;
	int v[10000];
	while(cin >> cantDeC >> q,cantDeC != 0 and q != 0){
		cout << "CASE# " << t << ":"<<endl;
		cargarArreglo(v,cantDeC);
		ordenarArreglo(v,cantDeC);
		
		
		for(int i = 0 ; i < q ; i++){
			cin >> pregunta;
			posicion = busqueda(v,cantDeC,pregunta);
			if(posicion == -1){
				cout << pregunta << " not found" << endl;
			}else{
				cout << pregunta << " found at " << posicion+1 << endl;
			}
		}
		t++;
		
		
		
	}
	
	
	
	return 0;
}

