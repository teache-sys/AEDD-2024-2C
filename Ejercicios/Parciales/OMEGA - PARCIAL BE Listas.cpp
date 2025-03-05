#include <stdlib.h>
#include <iostream>
using namespace std;
struct Nodo {
	int num;
	struct Nodo *sig;
};

typedef Nodo * NodoPtr;
void insertar( NodoPtr & sPtr, int valor );
bool estaOrdenada(NodoPtr l1);
void ordenaDos(NodoPtr &actual, NodoPtr & siguiente, int &pareja);
void insertarNodoP(NodoPtr &l1,int pareja);
void mostrarLista( NodoPtr actual );
void Parcial3( NodoPtr &l1, bool &ok);

int main() {
	NodoPtr L1 = NULL;
	int valor;
	bool ok = false;
	while ( cin >> valor )
		insertar( L1, valor );
	Parcial3( L1,ok );
	if(ok){
		mostrarLista( L1 );	
	}
	
	return 0;
}
void insertar( NodoPtr & sPtr, int valor ) {
	NodoPtr nuevo;
	if (sPtr == NULL) {
		nuevo = new Nodo;
		if ( nuevo != NULL ) {
			nuevo->num = valor;
			nuevo->sig = NULL;
			sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertar (sPtr->sig, valor);
}
bool estaOrdenada(NodoPtr l1){
	NodoPtr actual = l1;
	bool EstaOrd = true;
	while(actual -> sig  != NULL and EstaOrd){
		if(actual -> num > actual -> sig -> num){
			EstaOrd = false;
		}
		actual = actual -> sig;
	}
	return EstaOrd;
}
void ordenaDos(NodoPtr &actual, NodoPtr & siguiente, int &pareja){
	
	while(siguiente != NULL){
			if(actual -> num > siguiente -> num){
				int aux = actual -> num;
				actual -> num = siguiente -> num;
				siguiente -> num = aux;
				pareja++;
			}
			actual = siguiente;
			siguiente = siguiente -> sig;
	}
}
void insertarNodoP(NodoPtr &l1,int pareja){
	NodoPtr aux;
	aux = l1;
	l1 = new Nodo;
	l1 -> num = pareja * (-1);
	l1 -> sig = aux;	
}
	
void Parcial3( NodoPtr &l1, bool &ok ){
	NodoPtr actual, siguiente = NULL ;
	int pareja = 0;
	bool ordenada = false;
	
	if(!estaOrdenada(l1)){
		ok = true;
		while(!ordenada){
			actual = l1;
			siguiente = actual -> sig;
			ordenaDos(actual,siguiente,pareja);
			ordenada = estaOrdenada(l1);
	    }
		insertarNodoP(l1,pareja);
	}else{
		cout << "Lista inicialmente ordenada" << endl;
	}
}
	void mostrarLista( NodoPtr actual ) {
		while ( actual != NULL ) {
			cout << actual->num << " -> ";
			actual = actual->sig;
		}
		cout << "NULL" << endl;
	}
