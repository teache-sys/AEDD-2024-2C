#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void cifrarPalabra(string &cadena, int despl){
	for(unsigned i = 0 ; i < cadena.size() ; i++){
		if(isalpha(cadena[i])){
			if(cadena[i] == 'Z' and despl > 0){
				cadena[i] = 'A'-1;
				cadena[i] += despl;
			}else{
				cadena[i] += despl;
			}
			if (cadena[i] > 'Z') {
				cadena[i] -= 26; // Regresar a A
			}
		}
	}
}



int main(int argc, char *argv[]) {
	string cadena;
	int desplazamiento;
	getline(cin,cadena);
	cin >> desplazamiento;
	
	cifrarPalabra(cadena,desplazamiento);
	
	cout << cadena << endl;
	return 0;
}

