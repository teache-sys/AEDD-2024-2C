#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int j, puntaje, horasjugadas, menorTiempo = 0, i=0, mayorPuntaje = 0;
	char categoria;
	int puntajeA=0, puntajeD = 0, puntajeE = 0,mejorjA=0,mejorJD=0,mejorJE=0;
	while(cin >> j, j != 99){
		cin >> puntaje >> horasjugadas>> categoria;
		if(puntaje > mayorPuntaje){
			mayorPuntaje = puntaje;
		}
		if(i == 0 or horasjugadas < menorTiempo){
			menorTiempo = horasjugadas;
		}
		i++;
		if(categoria == 'A' and puntaje > puntajeA){
			puntajeA=puntaje;
			mejorjA = j;
		}
		if(categoria == 'D' and puntaje > puntajeD){
			puntajeD=puntaje;
			mejorJD = j;
		}
		if(categoria == 'E' and puntaje > puntajeE){
			puntajeE=puntaje;
			mejorJE = j;
		}
	}
	if(i == 0){
		cout << "Mayor puntaje obtenido: --"<< endl;
		cout << "Menor tiempo: --"  << endl;
		cout << "Categoria A: Mejor juego: --" << endl;
		cout << "Categoria D: Mejor juego: --" << endl;
		cout << "Categoria E: Mejor juego:  --"<< endl;
	}else{
		cout << "Mayor puntaje obtenido: " << mayorPuntaje << endl;
		cout << "Menor tiempo: " << menorTiempo << endl;
		if(puntajeA == 0) cout << "Categoria A: Mejor juego: --" << endl;
		else cout << "Categoria A: Mejor juego: " << mejorjA << endl;
		if(puntajeD == 0) cout << "Categoria D: Mejor juego: --" << endl;
		else cout << "Categoria D: Mejor juego: " << mejorJD << endl;
		if(puntajeE == 0) cout << "Categoria E: Mejor juego: --" << endl;
		else cout << "Categoria E: Mejor juego: " << mejorJE << endl;
	}
	
	return 0;
}

