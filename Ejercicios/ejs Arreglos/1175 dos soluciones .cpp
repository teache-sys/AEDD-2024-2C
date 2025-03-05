#include <iostream>
#include <algorithm>
using namespace std;

void cargarArreglo(int v[20]){
	for(int i = 0 ; i < 20 ;i++){
		cin >> v[i];
	}
}

//solucion 1
void invertir1(int v[20]){
	int copia[21];
	for(int i = 0 ; i < 20 ; i++){
		copia[20-1-i]= v[i];
	} //una vez que termina, el arreglo esta invertido en copia
	for(int i = 0 ; i < 20 ; i++){
		v[i]=copia[i];
	}// le asigna los valores a v[] pero ya de manera invertida
	
}
//solucion 2
void invertir2(int v[20]){
	int izq = 0, der=20-1;
	while(izq <= der){
		swap(v[izq],v[der]);
		izq++;
		der--;
	}
}

int main(int argc, char *argv[]) {
	int v[20];
	cargarArreglo(v);
	//invertir1(v);
	invertir2(v);
	for(int i=0; i<20 ; i++){
		cout << "N["<<i<<"] = "<< v[i] << endl;
	}
	return 0;
}

