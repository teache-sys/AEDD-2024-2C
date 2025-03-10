#include "encriptacion.h"

using namespace std;

void encriptar(char a[]){
	for(unsigned int i=0; i<strlen(a); i++){
		if(isalpha(a[i])){
			a[i] += 3;
		}
	}
	for(unsigned int i=0; i<strlen(a)/2; i++){
		char aux = a[i];
		a[i] = a[strlen(a)-1-i];
		a[strlen(a)-1-i] = aux;
	}
	for(unsigned int i= strlen(a)/2; i<strlen(a); i++){
		a[i] -= 1; 
	}
}
	
void desencriptar(char a[]) {
    for (unsigned int i = strlen(a) / 2; i < strlen(a); i++) {
        a[i] += 1;
    }
    for (unsigned int i = 0; i < strlen(a) / 2; i++) {
        char aux = a[i];
        a[i] = a[strlen(a) - 1 - i];
        a[strlen(a) - 1 - i] = aux;
    }
    for (unsigned int i = 0; i < strlen(a); i++) {
        if (isalpha(a[i])) {
            a[i] -= 3;
        }
    }
}
