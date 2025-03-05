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

void ordenarNopar(int nopar[], int tlnopar){
	int min;
	for(int i = 0; i < tlnopar; i++){
		min = i;
		for(int j = i+1 ; j < tlnopar ; j++){
			if(nopar[j] < nopar[min]){
				min = j;
			}
		}
		intercambio(nopar[i],nopar[min]);
	}
}

void pares(int v[], int tl, int nopar[],int &tlnopar){
	for(int i = 0 ; i < tl ; i++){
		for(int j = i+1 ; j < tl ; j++){
			if(v[j] == v[i] and v[j] != -1){
				v[j] = -1;
				v[i] = -1;	
			}
		}
	}
	tlnopar=0;
	for(int i = 0 ; i < tl ; i++){
		if(v[i] != -1){
			nopar[tlnopar]= v[i];
			tlnopar++;
		}
	}
	ordenarNopar(nopar,tlnopar);
}

	
int main(int argc, char *argv[]) {
	int v[1000], n, nopar[1000], tlnopar;
	cin >> n;
	cargarArreglo(v,n);
	
	pares(v,n,nopar,tlnopar);
	if(tlnopar == 0){
		cout << ":D";
	}else{
		for(int i = 0 ; i < tlnopar ; i++){
			cout << nopar[i] << " ";
		}
	}
	cout << endl;
	cout << tlnopar << endl;
	cout << n-tlnopar << endl;
	return 0;
}

