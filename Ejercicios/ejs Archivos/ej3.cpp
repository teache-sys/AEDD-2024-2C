#include <iostream>
#include <fstream>
using namespace std;

bool esEspacio(char c){
	return (c == ' ');
}
bool esLetra(char c){
	return ((c >= 'a' and c<='z') or (c >= 'A' and c<='Z'));
}

bool comienzaYTermina(char c, char letraInicial){
	return (c == letraInicial);
}	
	

int main(int argc, char *argv[]) {
	int contadorPalabra = 0;
	int contadorLetras = 0, mayorLetras = 0, seleccionadas = 0;
	char letraInicial, letraFinal;
	cout << "ingrese la letra inicial y final " << endl;
	cin >> letraInicial; 
	cin >> letraFinal;
	
	cin.ignore();
	bool comienza = false, dentroDePalabra  = false;
	
	ofstream escribir;
	escribir.open("ej3.txt");
	if(!escribir) cout << "el archivo fallo " << endl;
	char cad[100];
	cin.getline(cad,100);
	escribir << cad << endl;
	
	escribir.close();
	
	
	
	ifstream leer;
	leer.open("ej3.txt");
	if(!leer) {
		cout << "el archivo fallo" << endl;
	}
	char c; char ultimaLetra;
	while(leer.get(c)){
		if(esLetra(c)){
			contadorLetras++;
			ultimaLetra = c; // cuando salga del if, va a permanecer la ultima letra
			if(!dentroDePalabra){ 
				dentroDePalabra = true; // entre a la palabra y en la primer iteracion ya se hace true y no entra mas
				comienza = comienzaYTermina(c,letraInicial);
			}
			
			
		}      
		else if(esEspacio(c)){
			contadorPalabra++; // cuento palabra 
			if(contadorLetras > mayorLetras){
				mayorLetras = contadorLetras;
			}
			// si encontre espacio, la anterior es una letra
			if(comienza &&  ultimaLetra == letraFinal){
				seleccionadas++;
			}
			comienza = false;
			dentroDePalabra = false;
			
			contadorLetras = 0;
		}
		
	}
	// a "hola como andas", no va a tomar la palabra "andas" pq no tiene espacio,
	// entonces si no tiene espacio pero si el contador de letras tiene letras contadas,
	// cuento una palabra mas
	// y chequeo q no sea mas larga q la q ya tengo
	if(contadorLetras > 0){
		contadorPalabra++;
		if(contadorLetras > mayorLetras){
			mayorLetras = contadorLetras;
		}
		if(comienza && ultimaLetra == letraFinal){
			seleccionadas++;
		}
		
		
		
		
		contadorLetras = 0;
	}
	
	
	leer.close();
	
	
	cout << "cantidad de palabras " << contadorPalabra<< endl; 
	cout << "long de palabra mas larga " << mayorLetras<<endl;
	cout << "palabras que empiezan con " << letraInicial 
		<< " y terminan con " << letraFinal << ": " << seleccionadas<< endl;
	
	return 0;
}
