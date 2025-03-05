#include <iostream>
using namespace std;

struct calificaciones{
	int id;
	float arr[6];
};
struct nodo{
	calificaciones alumno;
	nodo * sig;
};

struct listaIntegrada{
	int id;
	float promedio;
};
struct nodoInte{
	listaIntegrada alum;
	nodoInte * sgte;
};


void agregarNodo(nodo*& lista, int id, float arr[]) {
	nodo* nuevo = new nodo;
	nuevo->alumno.id = id;
	for (int i = 0; i < 6; i++) {
		nuevo->alumno.arr[i] = arr[i];
	}
	nuevo->sig = lista;
	lista = nuevo;
}

float promedio(float arr[]){
	float sumador = 0;
	for(int i = 0; i < 6 ; i++){
		sumador+=arr[i];
	}
	return (float) sumador/6;
}
	
	
void ordenarListas(nodo * &lista){
	if(lista == NULL || lista->sig == NULL){
		return;
	}else{
		bool intercambiado;
		do{
			intercambiado = false; 
			nodo * actual = lista; 
			while(actual != NULL && actual -> sig != NULL){
				
				float promActual = promedio(actual->alumno.arr);
				float promSgte = promedio(actual->sig->alumno.arr);
				
				if(promActual < promSgte){
					calificaciones temporal = actual -> alumno;
					actual -> alumno = actual->sig->alumno;
					actual->sig->alumno = temporal; 
					intercambiado = true;
				}
				actual = actual->sig;
			}
		}while(intercambiado);
	}
}	

	
void agregadorNodoInt(nodoInte *&lista,int id, float prom ){
	nodoInte *nuevo = new nodoInte;
	nuevo -> alum.id = id;
	nuevo -> alum.promedio = prom;
	nuevo ->sgte = NULL;
	
	if(lista == NULL){
		lista = nuevo;
	}else{
		nodoInte *aux = lista;
		while(aux -> sgte != NULL){
			aux = aux->sgte;
		}
		aux->sgte = nuevo;
	}
	
	
}	
	
void mergeDeListas(nodo *listac1, nodo *listac2, nodoInte * &listaIntegrada){
	nodo *a1 = listac1;
	nodo *a2 = listac2;
	
	while(a1 != NULL and a2 != NULL){
		float prom1 =  promedio(a1->alumno.arr);
		float prom2 =  promedio(a2->alumno.arr);
	
		if(prom1 > prom2){
			//alumno 1 va primero en la integrada
			agregadorNodoInt(listaIntegrada,a1->alumno.id,prom1);
			a1 = a1->sig;
		}else{
			//alumno 2 va primero en la integrada
			agregadorNodoInt(listaIntegrada,a2->alumno.id,prom2);
			a2 = a2->sig;
		}
	
	}
	while(a1 != NULL){
		float prom1 = promedio(a1->alumno.arr);
		agregadorNodoInt(listaIntegrada, a1->alumno.id, prom1);
		a1 = a1->sig;
	}
	while(a2 != NULL){
		float prom2 = promedio(a2->alumno.arr);
		agregadorNodoInt(listaIntegrada, a2->alumno.id, prom2);
		a2 = a2->sig;
	}
	
}
void mostrarListaOriginal(nodo* lista) {
	while (lista != NULL) {
		cout << "ID: " << lista->alumno.id << ", Calificaciones: ";
		for (int i = 0; i < 6; i++) {
			cout << lista->alumno.arr[i] << " ";
		}
		cout << endl;
		lista = lista->sig;
	}
}
void mostrarListaIntegrada(nodoInte* lista) {
	while (lista != NULL) {
		cout << "ID: " << lista->alum.id << ", Promedio: " << lista->alum.promedio << endl;
		lista = lista->sgte;
	}
}
	
int main() {
		nodo* listac1 = NULL;
		nodo* listac2 = NULL;
		nodoInte* listaIntegrada = NULL;
		
		// Crear datos para lista 1
		float calif1[] = {7, 8, 9, 6, 5, 8};
		float calif2[] = {6, 6, 6, 6, 6, 6};
		float calif3[] = {8, 9, 7, 8, 9, 10};
		agregarNodo(listac1, 1, calif1);
		agregarNodo(listac1, 2, calif2);
		agregarNodo(listac1, 3, calif3);
		
		// Crear datos para lista 2
		float calif4[] = {4, 5, 6, 4, 5, 6};
		float calif5[] = {10, 9, 10, 10, 9, 8};
		float calif6[] = {5, 6, 7, 5, 6, 7};
		agregarNodo(listac2, 4, calif4);
		agregarNodo(listac2, 5, calif5);
		agregarNodo(listac2, 6, calif6);
		
		// Mostrar listas originales
		cout << "Lista 1:" << endl;
		mostrarListaOriginal(listac1);
		
		cout << "\nLista 2:" << endl;
		mostrarListaOriginal(listac2);
		
		//ordena las dos listas
		ordenarListas(listac1);
		ordenarListas(listac2);
		
		// Fusionar listas
		mergeDeListas(listac1, listac2, listaIntegrada);
		
		// Mostrar lista integrada
		cout << "\nLista Integrada:" << endl;
		mostrarListaIntegrada(listaIntegrada);
		
	return 0;
}
	
