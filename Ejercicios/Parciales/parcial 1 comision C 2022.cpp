#include <iostream>
using namespace std;
// codifique completamente la funcionParcial aquí
int funcionParcial(int i, int d ){
	int esMultiplo = 0;
	for(int j = i ; j <= d ; j++){
		if(j % 2 == 0 and j % 5 ==0){
			esMultiplo++;
		}
	}
	
	return esMultiplo;
}
int main(int argc, char *argv[]) {
	// declare las variables necesarias aquí...
	int a,b,c,d;
	int menor = 0, mayor = 0;
	
	do{
		cin >> a >> b >> c >> d;
	}while(a==b or a==c or a==d or b==c or b==d or c==d);
		
		if(a > b and a > c and a > d){mayor = a;}
		else if(b > a and b > c and b > d){mayor = b;}
		else if(c > a and c > b and c > d){mayor = c;}
		else if(d > a and d > c and d > b){mayor = d;}
		
		if(a < b and a < c and a < d){menor=a;}
		else if(b < a and b < c and b < d){menor =  b;}
		else if(c < a and c < b and c < d){menor = c;}
		else if(d < a and d < b and d < c){menor = d;}
		// llamada a funciones y visualización de resultados aquí...
		cout << funcionParcial(menor,mayor) << endl;
	return 0;
}

