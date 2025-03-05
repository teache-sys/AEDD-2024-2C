#include <iostream>
using namespace std;

int contadorPalabras(string cadena){
	int cont=0;
	
	for(unsigned i = 1 ; i < cadena.size()-1;i++){
		cont++;
	}
	return cont;
}
void juntar(string &cadena, int contador){
	string c2 = cadena.substr(cadena.size()-1);
	cadena.erase(1);
	string numero = to_string(contador);
	cadena = cadena.front() + numero + c2;
}
int main(int argc, char *argv[]) {
	int n;
	string cadena;
	
	cin >> n;
	cin >> cadena;
	if(n > 10){
		cadena.resize(n);
		int cont = contadorPalabras(cadena);
		juntar(cadena,cont);
		
	}
	
	cout << cadena << endl;
	return 0;
}

