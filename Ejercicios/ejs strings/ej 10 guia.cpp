#include <iostream>
#include <string>
#include <windows.h> 	
#include <iomanip>
using namespace std;

void telegrama(string cadena){
	int contadorCaracteres = 0;
	int contEspacios = 0, cont7, contadorPLarga = 0;
	int cuentoVocal = 0, cuentoA=0,cuentoE=0,cuentoI=0,cuentoO=0,cuentoU=0;
	for(unsigned i = 0 ; i < cadena.size() ; i++){
		if(isspace(cadena[i])){
			contEspacios++;
			int j = 1;
			cont7 = 0;
			while(cadena[i+j] != ' ' && i + j < cadena.size()){
				cont7++;
				j++;
			}
			if(cont7 >= 7)contadorPLarga++;	
		}
		
		if(cadena[i] == 'a' or cadena[i] == 'A'){
			cuentoVocal++;
			cuentoA++;
		}else if(cadena[i] == 'e' or cadena[i] == 'E'){
			cuentoVocal++;
			cuentoE++;
		} else if(cadena[i] == 'i' or cadena[i] == 'I'){
			cuentoVocal++;
			cuentoI++;
		}else if(cadena[i] == 'o' or cadena[i] == 'O'){
			cuentoVocal++;
			cuentoO++;
		}else if(cadena[i] == 'u' or cadena[i] == 'U'){
			cuentoVocal++;
			cuentoU++;
		}
		
		
		contadorCaracteres++;
	}
	double costeTelegrama = (contEspacios+1)*5.2;
	float prom = (double)(contEspacios*100)/contadorCaracteres;
	cout << contadorPLarga << " con mas de 7 letras" << endl;
	cout << endl;
	cout << "Ocurrencia de vocales: " << cuentoVocal << endl;
	cout << "a: " << cuentoA << endl;
	cout << "e: " << cuentoE << endl;
	cout << "i: " << cuentoI << endl;
	cout << "o: " << cuentoO << endl;
	cout << "u: " << cuentoU << endl;
	cout << endl;
	
	cout << prom << " % de espacios en blanco sobre el total de caracteres. " << endl;
	cout << "Costo del telegrama: $ " << fixed << setprecision(2)<<costeTelegrama << endl;

	
	
}



int main(int argc, char *argv[]) {
	string cadena;
	cout << "Ingrese telegrama "<< endl;
	getline(cin,cadena,'.');
	
	cout << "Leyendo el telegrama... " << endl;
		Sleep(2000);
	
	cout << "El telegrama ingresado consta de " << endl;
	cout << endl;
	telegrama(cadena);
	
	
	return 0;
}

