#include <iostream>
#include <string>
using namespace std;

struct informacion{
	string ciudad;
	float x;
	float y;
	int registro;
};

struct nodo{
	informacion info;
	nodo * sig;
};
void agregar(nodo*& lista, informacion datos) {
	nodo* nuevo = new nodo;
	nuevo->info = datos;
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

void registroMasBajo(nodo * lista){
	nodo * actual = lista;
	informacion menor;
	menor = actual->info;
	
	while(actual != NULL){
		if(actual->info.registro < menor.registro){
			menor = actual->info;
		}
		actual = actual -> sig;
	}
	
	cout << "La ciudad con el registro mas bajo es: ";
	cout << menor.ciudad << endl; 

}

void estaOrdenada(nodo * lista){
	nodo * actual = lista;
	nodo * siguiente = actual -> sig;
	
	bool alfabetica  = true;
	while(actual != NULL && alfabetica){
		if(actual ->info.ciudad > siguiente ->info.ciudad){
			alfabetica = false;
		}else{
			actual = actual -> sig;
			siguiente = siguiente ->sig;
		}
		
	}
	alfabetica? cout << "Esta ordenado": cout<<"no esta ordenado";
	cout << endl;
}	

void eliminar(nodo * &lista){
	
	if(lista->info.y < 0){ // caso especial si el primer nodo es <0
		lista = lista -> sig;
	}
	nodo * ant = lista; 
	nodo *actual = lista -> sig;
	while(actual != NULL){
		if(actual->info.y < 0){
			ant -> sig = actual -> sig;
			actual = actual -> sig;
		}else{
			ant = actual;
			actual = actual -> sig;
		}
	}

}

void mostrarLista(nodo* lista) {
	while (lista != NULL) {
		cout << "Ciudad: " << lista->info.ciudad
			<< ", x: " << lista->info.x
			<< ", y: " << lista->info.y
			<< ", Registro: " << lista->info.registro << endl;
		lista = lista->sig;
	}
	cout << endl;
}
	
	
	
int main() {
	nodo* lista = NULL;
		
	// Crear datos de prueba
	informacion datos[] = {
		{"Buenos Aires", 34.6, -2.5, 15},
	{"Córdoba", 31.4, 0.5, 8},
		{"Rosario", 32.9, 3.2, 12},
	{"Mendoza", 33.5, -1.3, 6},
		{"Salta", 25.1, 4.5, 20}
	};
	
	// Agregar datos a la lista
	for (const auto& d : datos) {
		agregar(lista, d);
	}
	
	cout << "Lista original:" << endl;
	mostrarLista(lista);
	
	// Llamar a las funciones
	cout << endl;
	registroMasBajo(lista);
	
	cout << endl;
	estaOrdenada(lista);
	
	cout << endl;
	eliminar(lista);
	
	cout << "Lista después de eliminar nodos con coordenada y < 0:" << endl;
	mostrarLista(lista);
	
	return 0;
}
	

