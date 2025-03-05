#include <iostream>
using namespace std;

struct nodo{
	int num;
	nodo * sig;
};

void unir(nodo * &a,nodo *b){
	nodo *aux = a;
	
	
	while(aux -> sig != NULL){
		aux = aux -> sig;
	}
	nodo *nuevo = new nodo;
	nuevo->num = b->num;
	nuevo->sig = NULL;
	aux->sig = nuevo;
}



bool recorrer(nodo * a, nodo * b){
	nodo *ptrA = a;
	nodo *ptrB = b;
	bool esta = false;
	
	while(ptrB != NULL){
		ptrA=a;
		esta = false;
		while(ptrA != NULL and !esta){
			if(ptrB->num == ptrA->num){
				esta = true;
			}else{
				ptrA = ptrA->sig;
			}
		}
		if(!esta){
			unir(a,ptrB);
		}
		ptrB = ptrB ->sig;
	}
	return true;
}

void mostrarLista(nodo* a) {
	nodo* aux = a;
	while (aux != NULL) {
		cout << aux->num << " -> ";
		aux = aux->sig;
	}
	cout << "NULL" << endl;
}

// Agrega un nodo al final de la lista
void agregar(nodo*& a, int valor) {
	nodo* nuevo = new nodo;
	nuevo->num = valor;
	nuevo->sig = NULL;
	
	if (a == NULL) {
		a = nuevo;
	} else {
			nodo * aux = a;
			while (aux->sig != NULL) {
				aux = aux->sig;
			}
			aux->sig = nuevo;
		}
	}
	
int main() {
	nodo* listaA = NULL;
	nodo* listaB = NULL;
		
	// Agregar elementos a la lista A
		agregar(listaA, 1);
		agregar(listaA, 2);
		agregar(listaA, 3);
		
		// Agregar elementos a la lista B
		agregar(listaB, 2);
		agregar(listaB, 3);
		agregar(listaB, 4);
		agregar(listaB, 5);
		
		cout << "Lista A inicial:" << endl;
		mostrarLista(listaA);
		
		cout << "Lista B:" << endl;
		mostrarLista(listaB);
		
		// Recorrer y agregar elementos de B a A si no están presentes
		recorrer(listaA, listaB);
		
		cout << "Lista A después de procesar:" << endl;
		mostrarLista(listaA);
		
		return 0;
	}
