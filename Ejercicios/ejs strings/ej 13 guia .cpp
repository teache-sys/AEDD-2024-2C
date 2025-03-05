#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void invString_recursivo(string &cadena, int inicio, int fin){
	
	if(inicio >= fin){
		return;
	}
	swap(cadena[inicio],cadena[fin]);
	
	return invString_recursivo(cadena, inicio+1 , fin-1);
	
	
}
int main(int argc, char *argv[]) {
	string cadena;
	getline (cin, cadena);
	
	
	
	invString_recursivo(cadena, 0, cadena.size()-1);
	cout << cadena << endl;
	
	
	
	return 0;
}

