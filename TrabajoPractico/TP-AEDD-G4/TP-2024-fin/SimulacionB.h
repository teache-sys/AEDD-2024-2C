#ifndef SIMULACIONB_H
#define SIMULACIONB_H

void centrarMatriz(char matriz[][20], int n, int m);
void movimientos(personaje &p, matriz &m,personaje peach,personaje &l);
void gano(int c1, int c2);
void mostrarMatriz(matriz m);
void cargarTab(matriz &m);
void simulacionB(matriz &m, personaje &mario, personaje &luigi, personaje peach);
#endif
