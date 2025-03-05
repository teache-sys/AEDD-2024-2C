#include <iostream>
#include <string>
#include <cctype>
using namespace std;


void crearEmail(string &apellidoyNombre){
	int posicion = apellidoyNombre.find(" ");
	string nombre = apellidoyNombre.substr(posicion+1);
	apellidoyNombre.erase(posicion);
	nombre.erase(1);
	nombre += apellidoyNombre;
	for(unsigned i = 0 ; i < nombre.size(); i++){
		nombre[i] = tolower(nombre[i]);
	}
	apellidoyNombre = nombre + "@frsf.utn.edu.ar";
	
}


int main(int argc, char *argv[]) {
	string apellidoyNombre;
	cout << "Ingrese el apellido y luego el nombre del profesor: ";
	cout << endl;
	getline(cin, apellidoyNombre);
	crearEmail(apellidoyNombre);
	cout << apellidoyNombre;
	return 0;
}

