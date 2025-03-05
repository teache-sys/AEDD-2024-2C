#include <iostream>
#include <fstream>

using namespace std;

struct libros{
	char nombre[20];
	char autor[20];
	long long isbn;
	float precio;
	int existentes;
	int vendidos;
};

bool validarisbn(long long isbn){
	int digitos = 0;
	while(isbn > 0){
		digitos++;
		isbn /= 10;
	}
	
	return (digitos == 10);
}



int main(int argc, char *argv[]) {
	/*libros aux;
	
	cout << "nombre del libro: " ; 
	cin.getline(aux.nombre, 20);
	
	cout << "autor del libro: " ; 
	cin.getline(aux.autor,20);
	
	cout << "isbn (10digitos): ";
	do{
		cin >> aux.isbn;
		if (!validarisbn(aux.isbn)) {
			cout << "ingrese uno correcto " << endl;
		}
	} while(!validarisbn(aux.isbn));
	
	cin.ignore();
	
	
	cout << "precio "; 
	cin >> aux.precio; 
	cin.ignore();
	
	cout << "existentes: "; 
	cin >> aux.existentes;
	cin.ignore();
	
	cout << "vendidos: " ;
	cin >> aux.vendidos; 
	cin.ignore();
	
	
	ofstream ar;
	ar.open("inventario.bin", ios::app | ios :: binary);
	if(!ar) cout << "error " << endl;
	ar.write((char*)&aux, sizeof(aux));
	cout << "libro agregado " << endl;
	ar.close();
	*/
	
	ifstream a2;
	a2.open("inventario.bin", ios ::binary);
	if(!a2) cout << "no se pudo abrir el archivo" << endl;
	libros p;
	while(a2.read((char*)&p, sizeof(p))){
		cout << p.nombre << endl;
		cout << p.autor << endl;
		cout << p.isbn << endl;
		cout << p.precio << endl;
		cout << p.existentes << endl;
		cout << p.vendidos<< endl;
	}
	
	
	a2.close();
	return 0;
}

