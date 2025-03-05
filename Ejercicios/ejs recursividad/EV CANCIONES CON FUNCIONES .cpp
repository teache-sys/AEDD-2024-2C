#include <iostream>
using namespace std;

int mejorCalificacion (int calificacion, int mejorCalif){
	if(calificacion > mejorCalif){
		mejorCalif = calificacion;
	}
	return mejorCalif;
}
	
long mayorReproducciones(long reproducciones, long mayorReproduccion){
	if(reproducciones > mayorReproduccion){
		mayorReproduccion = reproducciones;
	}
	return mayorReproduccion;
}
int main(int argc, char *argv[]) {
	int id, calificacion, i = 0;
	long r, mayR=0;
	int mejorC=0;
	char genero;
	int califP = 0, califR = 0,califH = 0, cancionP=0, cancionR=0, cancionH=0;
	while(cin >> id, id != 9999){
		cin >> calificacion >> r >> genero;
		
		mejorC= mejorCalificacion(calificacion,mejorC);
		mayR = mayorReproducciones(r,mayR);
		
		if(genero == 'P' and calificacion > califP){
			califP = calificacion;
			cancionP=id;
		}
		if(genero == 'R' and calificacion > califR){
			califR = calificacion;
			cancionR=id;
		}
		if(genero == 'H' and calificacion > califH){
			califH = calificacion;
			cancionH=id;
		}
		i++;
	}
	if(i == 0){
		cout << "Mejor calificacion: --"<< endl;
		cout << "Mayor cantidad de reproducciones: --"<< endl;
		cout << "Genero P: Mejor cancion calificada: --"<< endl;
		cout << "Genero R: Mejor cancion calificada: --"<< endl;
		cout << "Genero H: Mejor cancion calificada: --"<< endl;
	}else{
		cout << "Mejor calificacion: "<<mejorC<< endl;
		cout << "Mayor cantidad de reproducciones: "<<mayR<< endl;
		if(califP == 0){
			cout << "Genero P: Mejor cancion calificada: --"<< endl;
		}else cout << "Genero P: Mejor cancion calificada: "<<cancionP<< endl;
		if(califR == 0){
			cout << "Genero R: Mejor cancion calificada: --"<< endl;
		}else cout << "Genero R: Mejor cancion calificada: "<<cancionR <<endl;
		if(califH == 0){
			cout << "Genero H: Mejor cancion calificada: --"<< endl;
		}else cout << "Genero H: Mejor cancion calificada: "<<cancionH <<endl;
	}
	return 0;
}

