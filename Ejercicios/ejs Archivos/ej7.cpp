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
	
void cargarLibro(libros &l){
	
	cout << "nombre del libro: " ; 
	cin.getline(l.nombre, 20);
	
	cout << "autor del libro: " ; 
	cin.getline(l.autor,20);
	
	cout << "isbn (10digitos): ";
	do{
		cin >> l.isbn;
		if (!validarisbn(l.isbn)) {
			cout << "ingrese uno correcto " << endl;
		}
	} while(!validarisbn(l.isbn));
	
	cin.ignore();
	
	
	cout << "precio "; 
	cin >> l.precio; 
	cin.ignore();
	
	cout << "existentes: "; 
	cin >> l.existentes;
	cin.ignore();
	
	cout << "vendidos: " ;
	cin >> l.vendidos; 
	cin.ignore();
	
	
}

int main(int argc, char *argv[]) {
	fstream lec;
	lec.open("inventario.bin", ios :: binary | ios::in | ios::out);
	if(!lec) cout << "no se pudo abrir el archivo" << endl;
	
	libros p; int pasadas = 0;
	
	while(lec.read((char*)&p, sizeof(p))){
		pasadas++;
		if(pasadas == 2){
			cout << "segundo libro, sera reemplazado " << endl; 
			cargarLibro(p);
			
			lec.seekp((pasadas - 1) * sizeof(libros), ios::beg);
			lec.write((char*)&p,sizeof(p));
			
		}
		if(pasadas == 3){
			cout << p.nombre << endl;
			cout << p.autor << endl;
		}
	
	}
	lec.close();
	
	ifstream a2;
	a2.open("inventario.bin", ios ::binary);
	if(!a2) cout << "no se pudo abrir el archivo" << endl;
	libros o;
	while(a2.read((char*)&o, sizeof(o))){
		cout << o.nombre << endl;
		cout << o.autor << endl;
		cout << o.isbn << endl;
		cout << o.precio << endl;
		cout << o.existentes << endl;
		cout << o.vendidos<< endl;
	}
	return 0;
}

