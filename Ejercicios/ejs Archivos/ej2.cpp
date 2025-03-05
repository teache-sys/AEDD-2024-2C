#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	char cad[100];
	cout << "escriba algo " << endl; 
	cin.getline(cad,100);
	
	ofstream escribir;
	escribir.open("original.txt");
	if(!escribir){
		cout << "fallo " << endl;
	}
	escribir << cad << endl;
	escribir.close();
	
	
	ifstream entrada;
	ofstream salida;
	entrada.open("original.txt");
	salida.open("enclave.txt");
	
	if(!entrada || !salida){cout << "ocurrio un error " << endl;}
	
	
	
	int cantidad; cout << "ingrese la cantidad que quiere sumar a cada caracter " << endl;
	cin >> cantidad;
	// a cada caracter, le sumamos y lo ponemos en salida 
	
	char c;
	while(entrada.get(c)){ // si tengo caracteres, le sumo cantidad y pongo en salida
		salida.put(c+cantidad);
		
	}
	salida.close();
	entrada.close();
	
	ifstream lectura;
	lectura.open("enclave.txt");
	if(!lectura) cout << "error al abrir el archivo " << endl; 
	while(lectura.get(c)){
		cout << c; 
	}
	
	
	lectura.close();
	
	
	return 0;
}

