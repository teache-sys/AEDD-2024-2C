#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int valorDado;
	cout << "ingrese el valor dado " << endl;
	cin >> valorDado; 
	ofstream archivo;
	archivo.open("ej4.bin", ios :: binary);
	if(!archivo){
		cout << "no se pudo crear el archivo " << endl; 
	}
	cout << "crearemos 10 numeros " << endl;
	for(int i = 0; i < 10 ; i++){
		int numero = rand()%(valorDado + 1);
		archivo.write((char*)&numero,sizeof(numero));
		
	}
	archivo.close();
	ifstream archivo2;
	archivo2.open("ej4.bin",ios::binary);
	if(!archivo2){
		cout << "no se pudo abrir el archivo" << endl;
	}

	int numero;
	while(archivo2.read((char*)&numero, sizeof(numero))){
		cout << numero << " " ;
	}
	archivo2.close();
	
	return 0;
}

