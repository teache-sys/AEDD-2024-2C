#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct alumno{
	string nombre; 
	string apellido;
	int anio[4];
};

alumno reconstruyeLinea(char matrizRota[10][30], int fila){
	alumno aux;
	bool esNombre = true;
	int j = 3;
	
	for(int i = 0; i < 30; i++){
		char c = matrizRota[fila][i];
		if(c == '$'){
			esNombre = false;
		}else if(isdigit(c)){
			aux.anio[j] = c-'0';
			j--;
		}else if(isalpha(c)){
			if(esNombre){
				aux.nombre += c;
			}else{
				aux.apellido += c;
			}
		}
	}
	return aux;
	
}

struct listaAlumnos{
	alumno lista[10];
	int tl;
};

bool Danger(char matrizRota[10][30], int Fila){
	string fila;
	for(int i = 0; i < 30 ; i++){
		fila += matrizRota[Fila][i];
	}
	unsigned p = fila.find("DANGER");
	return p < fila.size();
}
	
listaAlumnos ReconstruyendoInfo(char matrizRota[10][30]){
	listaAlumnos aux;
	aux.tl = 0;
	
	for(int i = 0 ; i < 10 ; i++){
		if(!Danger(matrizRota,i)){
			alumno a = reconstruyeLinea(matrizRota,i);
			aux.lista[aux.tl] =  a;
			aux.tl++;
		} else if(Danger(matrizRota,i)){
			cout << "LA PRESENTE FILA ESTA MUY DANIADA, NO ES POSIBLE RECUPERARLA" << endl;
		}
	}
	return aux;
}
	
int main(int argc, char *argv[]) {
	char matrizRota[10][30] = {
		'E', ' ', '5', 'v', ' ', 'a', '0', 'r', ' ', 'i', 's', '0', ' ', '2', 't', ' ', 'o', '$', ' ', 'P', ' ', 'o', 'r', 't', 'e', 'l', 'a', ' ', ' ', ' ',
			'0', '1', '8', ' ', 'E', 'l', 's', '2', 'a', ' ', '$', ' ', 'Z', 'a', 'm', 'b', 'r', 'a', 'n', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
			'D', 'A', 'N', 'G', 'E', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
			'9', '1', '0', '2', ' ', 'J', 'u', 'l', 'i', 'a', ' ', '$', ' ', 'R', 'o', 'd', 'r', 'i', 'g', 'u', 'e', 'z', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
			'8', '1', '0', '2', ' ', 'A', 'l', 'b', 'e', 'r', 't', 'o', ' ', '$', ' ', 'M', 'e', 'n', 'd', 'o', 'z', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
			'1', '2', '0', '2', ' ', 'M', 'a', 'r', 'i', 'a', ' ', '$', ' ', 'L', 'o', 'p', 'e', 'z', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
			'2', '2', '0', '2', ' ', 'A', 'n', 'a', ' ', '$', ' ', 'G', 'u', 't', 'i', 'e', 'r', 'r', 'e', 'z', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
			'0', '2', '0', '2', ' ', 'J', 'u', 'a', 'n', 'a', ' ', '$', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
			'5', '1', '0', '2', ' ', 'P', 'a', 'u', 'l', 'a', ' ', '$', ' ', 'D', 'e', 'l', 'g', 'a', 'd', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
			'3', '2', '0', '2', ' ', 'F', 'r', 'a', 'n', 'c', 'o', ' ', '$', ' ', 'V', 'e', 'r', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
	};
	
	
	int fila;
	cout << "Elegi una fila para darte la info reconstruida " << endl;
	cin >> fila;
	
	alumno recuperado = reconstruyeLinea(matrizRota,fila);
	cout << "El apellido, nombre y anio es: " << endl;
	cout << recuperado.apellido << " " ;
	cout << recuperado.nombre << " " ;
	for (int i = 0; i < 4; i++) {
		cout << recuperado.anio[i];
	}
	cout << endl;
	
	cout << "La lista entera reconstruida es: " << endl;
	listaAlumnos list = ReconstruyendoInfo(matrizRota);
	for (int i = 0; i < list.tl ; i++) {
		alumno a = list.lista[i];
		cout << "Alumno " << i + 1 << ": " << endl;
		cout << "Apellido: " << a.apellido << endl;
		cout << "Nombre: " << a.nombre << endl;
		cout << "Año de ingreso: ";
		for (int j = 0; j < 4; j++) {
			cout << a.anio[j];
		}
		cout << endl << endl;
	}
	
	
	return 0;
}

