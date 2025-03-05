#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cin >> numero;
	int aux =numero;
	for(int i = 1 ; i <= numero ; i++){
		for(int j = 1 ; j < aux ; j++){
			cout << " " ;
			
		}
		for(int k = 1; k <= 2*i-1; k++){ // siempre fue el doble de i menos uno lo que daba 
										// restandole uno a 2*i obteniamos la cantidad q 
			cout << "*";				// necesitabamos. Habia q encontrar la relacion.
		}
		
		aux--;
		cout << endl;
	}
	
	
	
	return 0;
}

