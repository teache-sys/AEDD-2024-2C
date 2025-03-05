#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
	int n, arregloContador[2001]= {0};
	int numero;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> numero;
		arregloContador[numero]++;
	}
	
	for(int i = 1 ; i <= 2000; i++){
		if(arregloContador[i] > 0){
			cout << i << " aparece "<< arregloContador[i]<<" vez(es)"<< endl;
		}
	}
	return 0;
}

