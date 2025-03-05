#include <iostream>
#include <string>
using namespace std;

bool registrar(string usuario){
	if(usuario.size() != 8 and (usuario.at(0) >= 0 or usuario.at(0) <= 9)){
		return false;
	}
	return true;
}
	
	
int main(int argc, char *argv[]) {
	string usuario;
	getline(cin, usuario);
	bool ok = registrar(usuario);
	ok? cout << "ES VALIDO" : cout << "NO VALIDO";
	return 0;
}

