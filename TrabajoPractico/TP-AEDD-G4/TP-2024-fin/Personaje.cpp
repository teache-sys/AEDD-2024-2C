#include "stdpanel.h"
#include <iostream>
#include <iomanip>
#include "gotoxy.h"
#include <cstdlib>
#include "Personaje.h"
#include <cstring>
#include "menus.h"
#include <cctype>
using namespace std;


void crearPersonajes(personaje &mario,personaje &luigi,personaje &peach, matriz &matr){
	srand(time(NULL));
	int j = 0;
	bool ok = false;
	int columnaRand;
	
	while(j < 20 and !ok){//Crear y agregar a Mario y Luigi
		columnaRand = rand()%20;
		if(matr.mat[9][columnaRand] == '_'){
			mario.nombre = "Mario";
			mario.letra = 'M';
			mario.contFlores = 0;
			mario.x = 9;
			mario.y = columnaRand;
			mario.orientacion = 0;
			
			luigi.nombre = "Luigi";
			luigi.letra = 'L';
			luigi.contFlores = 0;
			luigi.x = 9;
			luigi.y = columnaRand;
			luigi.orientacion = 0;
			
			matr.mat[9][columnaRand] = 'B';
			ok = true;
		}
		j++;
	}
	
	j = 0; ok = false;
	columnaRand = rand()%20;
	while(j < 20 and !ok){//Crear y agregar a Peach
		if(matr.mat[9][columnaRand] == '_'){
			peach.nombre = "Peach";
			peach.letra = 'P';
			peach.contFlores = 0;
			peach.x = 9;
			peach.y = columnaRand;
			peach.orientacion = 0;
			ok = true;
		}else if(matr.mat[9][columnaRand] == 'B'){
			columnaRand = rand()%20;
		}
		j++;
	}
}
	
void saludar(personaje p){
	gotoxy(35,6);
	cout << "Hola soy "<< p.nombre << "!"<<endl;
}
	
void caminar(personaje &p, matriz &m){
	m.mat[p.x][p.y] = '_';
	if(p.orientacion == 0 and p.y > 0 and m.mat[p.x][p.y-1] != 'X'){
		p.y--;
	}else if(p.orientacion == 1 and p.y < 19 and m.mat[p.x][p.y+1] != 'X'){
		p.y++;
	}
	m.mat[p.x][p.y] = 'B'; 
}	

void girar(personaje &p){
	if(p.orientacion == 0){
		p.orientacion = 1;
	}else{
		p.orientacion = 0;
	}
}	
	
void saltar(personaje &p, matriz &m){ // para simulacion A
	m.mat[p.x][p.y] = '_';
	if(m.mat[p.x+1][p.y] == 'X' and m.mat[p.x+1][p.y-1] != 'X'){
		p.x++;
		p.y--;
	}
	m.mat[p.x][p.y] = 'B'; 
}
	
void consultarUbi(personaje p){
	gotoxy(0,0);
	cout << "Mario y Luigi se encuentran en la posicion: [0," << p.y << "]"<< endl;
}	
	
