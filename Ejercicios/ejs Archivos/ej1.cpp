#include <iostream>
#include <fstream>
using namespace std;

bool esLetra(char c){
	return ((c >= 'a' && c<='z') || (c >= 'A' && c<='Z'));
}
bool esDigito(char c){
	return ((c >= '0' && c<='9'));
}

int main(int argc, char *argv[]) {
	ifstream h;
	h.open("ej1.txt");
	int contLetras = 0; 
	int contDigitos = 0;
	char c;
	
	if(h.fail()){
		cout << "no abrio correctamente" << endl;
	}
	
	while(h.get(c)){
		if(esLetra(c)){
			contLetras++;
		}else if(esDigito(c)){
			contDigitos++;
		}
	}
	h.close();
	
	cout << contLetras << endl;
	cout << contDigitos << endl;
	
	
	return 0;
}

