#include <iostream>
using namespace std;

struct nodo{
	int num;
	nodo * sig;
};
// Función para agregar elementos a la lista
void agregar(nodo*& lista, int valor) {
	nodo* nuevo = new nodo;
	nuevo->num = valor;
	nuevo->sig = NULL;
	
	if (lista == NULL) {
		lista = nuevo;
	} else {
		nodo* aux = lista;
		while (aux->sig != NULL) {
			aux = aux->sig;
		}
		aux->sig = nuevo;
	}
}

// Función para mostrar la lista
void mostrar(nodo* lista) {
	while (lista != NULL) {
		cout << lista->num << " -> ";
		lista = lista->sig;
	}
	cout << "NULL" << endl;
}

void eliminar(nodo * &lista){
	
	nodo *prev = lista;
	nodo *actual = lista->sig;
	
	while(actual != NULL){
		
		if(prev -> num > actual->num){
			
			while(actual != NULL && prev -> num > actual->num){
				prev -> sig = actual -> sig;
				actual = actual -> sig;
			}
			
		}else{
			prev = actual;
			actual = actual ->sig;
		}
	}
	
	
}
int main() {
	nodo* lista = NULL;
	
	// Agregar elementos a la lista
	int valores[] = {4, 5, 6, 3, 2, 1, 7, 9, 78, 45, 45, 34, 96, 98, 57};
	for (int val : valores) {
		agregar(lista, val);
	}
		
	cout << "Lista original:" << endl;
	mostrar(lista);
		
	// Eliminar rangos no crecientes
	eliminar(lista);
		
	cout << "Lista después de eliminar rangos no crecientes:" << endl;
	mostrar(lista);
		
	return 0;
}
