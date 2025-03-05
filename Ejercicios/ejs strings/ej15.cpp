#include <iostream>
#include <string>
using namespace std;

int tiempo(string cadena, int p, int subida, int bajada){
	int sumador = 0;
	for(unsigned i = 0; i < cadena.size(); i++){
		if(cadena[i] == '-'){
			sumador += p;
		}
		else if(cadena[i] == '/'){
			sumador += subida;
		}
		else{
			sumador += bajada;
		}
	}
	return sumador;
}

int main(int argc, char *argv[]) {
	int p, subida, bajada;
	cin >> p >> subida >> bajada;
	string cadena;
	cin >> cadena;
	
	int sumador = tiempo(cadena,p,subida,bajada);
	cout << sumador << endl;
	return 0;
}

