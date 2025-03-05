#include <iostream>
#include <string>
#include <cctype>
using namespace std;


void eliminandoNumeros(string &cadena){
	for(unsigned i = 0 ; i < cadena.size() ; i++){
		if(isdigit(cadena[i])){
			cadena.erase(i,1);
			i--;
		}
	}
}


int main(int argc, char *argv[]) {
	string cadena;
	cadena = {"Es2to0 3es u9na se88ñal c0on ru1id2os"};
	
	
	eliminandoNumeros(cadena);
	
	cout << cadena << endl;
	
	
	
	return 0;
}

