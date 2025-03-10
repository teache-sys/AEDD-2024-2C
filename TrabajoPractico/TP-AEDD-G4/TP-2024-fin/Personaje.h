#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "stdpanel.h"


struct matriz{
	char mat[10][20] = {};
};

struct personaje{
	string nombre;
	char letra;
	int x, y;
	int contFlores;
	bool orientacion;
};


void crearPersonajes(personaje &mario, personaje &luigi,personaje &peach,matriz &matr);
void saludar(personaje p);
void caminar(personaje &p, matriz &m);
void girar(personaje &p);
void consultarUbi(personaje p);

#endif
