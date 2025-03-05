#include <iostream>
using namespace std;
const int SIZE = 5;
int main(int argc, char *argv[]) {
	float numeros[] = {0.1,0.2,0.3,0.4,0.5};
	
	float * pnum;
	
	for(int i = 0; i < SIZE ; i++){
		cout << numeros[i] << " ";
	}
	cout << endl;
	
	pnum = numeros;
	for(int i = 0; i < SIZE; i++){
		cout << *(pnum+i)  << " " ;
		
	}
	
	/*
	Suponiendo que la direccion del principio del 
	arreglo es 1000, la direccion referenciada 
	por pnum+3 = 1000 + 3 * sizeFloat =
				= 1000 + 3*4 = 1012
	Su valor sera 0,4, ya que 1012 corresponde a 
	la dirrecion del 4to elemento del arreglo
	
	pnum = pnum+3 /7 4to elemetno
	pnum-2 apuntara al 2do elemento del arreglo
	
	
	*/
	return 0;
}

