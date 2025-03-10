#include "stdpanel.h"
#include <iostream>
#include <iomanip>
#include "gotoxy.h"
#include <cstdlib>
#include "Personaje.h"
#include <cstring>
#include "menus.h"
#include <cctype>
#include "Personaje.h"


using namespace std;


void centrarMatriz(char matriz[][20], int n, int m) { // CAMBIAR 
	
	const int ancho = 100;
	const int alto = 28;
	int ejeX = (ancho - m * 4) / 2; 
	int ejeY = (alto - n) / 2;
	
	
	for (int i = 0; i < n; i++) {
		gotoxy(ejeX, ejeY + i); // Mover el cursor
		for (int j = 0; j < m; j++) {
			if(matriz[i][j] == 'M'){
				cout << "\033[31m" << "M" << "\033[0m" << "   ";
			}else if(matriz[i][j] == 'L'){
				cout << "\033[32m" << "L" << "\033[0m" << "   ";
			}else{
				cout << matriz[i][j] << " " ;
			}
		}
		cout << endl;
	}
}

void mostrarMatriz(matriz m){
	centrarMatriz(m.mat, 10,20);
	cout << endl;
	system("pause > nul");
}
	
void cargarTab(matriz &m){// llamamos a cargarTAblero y a eso le asignamos los personajes
cargarTablero(m.mat,10,20);

for(int i = 0; i < 10 ; i++){ // poner cielo "."
	for(int j = 0; j < 20 ; j++){
		
		m.mat[i][j] = '.';
		
	}
}

for(int j = 0 ; j < 20 ; j++ ){ // poner suelo ""
	
	m.mat[9][j] ='_';
	
}

}


void movimientos(personaje &p, matriz &m,personaje peach,personaje &l){ 
	char accion;
	bool juegoTermino = false;
	bool v[20]= {0};
	mostrarControles();
	gotoxy(0,21);
	cout << "Elegi una accion : "<< endl;
	
	while(juegoTermino != true){
		gotoxy(0,22);
		cin >> accion;
		cin.ignore(100,'\n');
		accion=toupper(accion);
		if(p.y == 0 and v[p.y] == 0){
			p.contFlores++;
			l.contFlores++;
			v[p.y] = 1;
		}
		if((p.y %2 == 0 or p.y % 7 == 0) and v[p.y] == 0){
			p.contFlores++;
			v[p.y] = 1;
		}
		if((p.y %3 == 0 or p.y %5 == 0)and v[p.y] == 0){
			l.contFlores++;
			v[p.y] = 1;
		}
		switch(accion){
		case 'W':
			caminar(p,m);
			break;
		case 'E':
			saludar(p);
			break;
		case 'Q':
			girar(p);
			gotoxy(0,0);
			cout << "Orientacion cambiada                                       " << endl;
			break;
		case 'A':
			consultarUbi(p);
			break;
		}
		if(peach.y == p.y){
			juegoTermino = true;
		}
		mostrarMatriz(m);
	}
	
}	
	
void gano(int c1, int c2){
	srand(time(NULL));
	bool ganadorRandom ;
	ganadorRandom = rand()%2;
	system("cls");
	
	if(c1 > c2){
		gotoxy(30,4);
		cout << "Mario le regalo mas flores a la Princesa Peach";
		gotoxy(30,5);
		cout << "y se fueron a recorrer el Reino juntos...";
		cout << endl;
		system("pause");
	}else if(c2 > c1){
		gotoxy(30,4);
		cout << "Luigi le regalo mas flores a la Princesa Peach" << endl;
		gotoxy(30,5);
		cout << "y se fueron a recorrer el Reino juntos...";
		cout << endl;
		system("pause");
	}else{
		gotoxy(30,4);
		cout << "Mario y Luigi recogieron la misma cantidad de flores," << endl;
		gotoxy(30,5);
		cout << "La Princesa Peach debe elegir con quien de los dos irse"<< endl;
		Sleep(3000);
		system("cls");
		cout << "Peach lanzó una moneda..." << endl;
		Sleep(3000);
		if(ganadorRandom == 0){
			system("cls");
			gotoxy(28,6);
			cout << "Cruz" << endl;
			gotoxy(28,7);
			cout << "La Princesa Peach eligio recorrer el reino con Mario..." << endl;
			system("pause");
		}else if(ganadorRandom == 1){
			system("cls");
			gotoxy(26,6);
			cout << "Cara"<< endl;
			gotoxy(28,7);
			cout << "La Princesa Peach eligio recorrer el reino con Luigi..." << endl;
			system("pause");
		}
	}
	
}

void opcionOraculo(matriz &m, int &Posicion, char &Eleccion, personaje &mario, personaje &luigi, personaje peach, bool &gameover) {
	do {
		int opcion = 0;
		system("cls");
		gotoxy(1,3);
		cout << "==========================================================================================" << endl;
		
		if (Eleccion == 'M' || Eleccion == 'm') {
			gotoxy(1,4);
			cout << mario.nombre << ": Oráculo Whalum, tengo que hacerte una pregunta sobre la ubicación de Princesa Peach: " << endl;
			
		} else if (Eleccion == 'L' || Eleccion == 'l') {
			gotoxy(1,4);
			cout << luigi.nombre << ": Oráculo Whalum, tengo que hacerte una pregunta sobre la ubicación de Princesa Peach: " << endl;
		}
		
		
		gotoxy(1,5);
		cout << "1.- Posición de Princesa Peach mayor que ..." << endl;
		gotoxy(1,6);
		cout << "2.- Posición de Princesa Peach menor que ..." << endl;
		gotoxy(1,7);
		cout << "3.- Te arriesgas al valor ..." << endl;
		
		
		bool opcionValida = false;
		while (!opcionValida) {
			gotoxy(1,3);
			cout << "==========================================================================================" << endl;
			gotoxy(1,5);
			cout << "1.- Posición de Princesa Peach mayor que ..." << endl;
			gotoxy(1,6);
			cout << "2.- Posición de Princesa Peach menor que ..." << endl;
			gotoxy(1,7);
			cout << "3.- Te arriesgas al valor ..." << endl;
			gotoxy(1,8);
			cout << "Ingrese una opción: ";
			cin >> opcion;
			
			if (opcion >= 1 && opcion <= 3) {
				opcionValida = true;  
			} else {
				system("cls");
				gotoxy(30,5);
				cout << "Ingrese una opción válida" << endl;
				Sleep(2000);
				system("cls");
			}
		}
		
		system("cls");
		
		switch (opcion) {
		case 1:
			gotoxy(1,5);
			cout << "1.- Posición de Princesa Peach mayor que ..."; 
			cin >> Posicion;
			gotoxy(1,6);
			if (peach.y > Posicion) {
				cout << "Oráculo Whalum: SI, la posición es mayor" << endl;
			} else if (peach.y == Posicion) {
				cout << "Oráculo Whalum: Es la Posición" << endl;
			} else {
				cout << "Oráculo Whalum: NO, la posición no es mayor" << endl;
			}
			Sleep(3000);
			break;
			
		case 2:
			gotoxy(1,6);
			cout << "2.- Posición de Princesa Peach menor que ...";
			cin >> Posicion;
			gotoxy(1,7);
			if (peach.y < Posicion) {
				cout << "Oráculo Whalum: SI, la posición es menor" << endl;
			} else if (peach.y == Posicion) {
				cout << "Oráculo Whalum: Es la Posición" << endl;
			} else {
				cout << "Oráculo Whalum: NO, la posición no es menor" << endl;
			}
			Sleep(3000);
			break;
			
		case 3:
			gotoxy(1,7);
			cout << "3.- Te arriesgas al valor ..."; 
			cin >> Posicion;
			gotoxy(1,8);
			if (peach.y == Posicion) {
				cout << "Oráculo Whalum: SI, es la posición" << endl;
			} else {
				cout << "Oráculo Whalum: NO, no es la posición" << endl;
				gameover = true;
			}
			Sleep(3000);
			break;
		}
		
	} while (Posicion != peach.y && !gameover);
}	

void simulacionB(matriz &m, personaje &mario, personaje &luigi, personaje peach){
	char Eleccion;
	int Posicion = 0;
	
	
	do{
		gotoxy (20,4);
		cout<<"Elige un personaje para continuar Mario(M) o Luigi(L): "<<endl;
		gotoxy (20,5);
		cout<<"Ingrese una opción: "; 
		cin>>Eleccion;
		Eleccion = toupper(Eleccion);
		cin.ignore(100,'\n');
		switch(Eleccion){
		case 'M':
			system("cls");
			gotoxy(30,4);
			cout<<"Elegiste a Mario (Presiona enter)"<<endl;
			system("pause > nul");
			break;
		case 'L':
			system("cls");
			gotoxy(30,4);
			cout<<"Elegiste a Luigi (Presiona enter)"<<endl;
			system("pause > nul");
			break;
		default:
			system("cls");
			system("color 04");
			gotoxy(30,4);
			cout<<"Ingrese una letra valida (M/L)"<<endl;
			Sleep(2000);
			system("color f");
		}
	} while(Eleccion != 'M' and Eleccion != 'L');
	
	
	bool gameover = false;
	
	opcionOraculo(m,Posicion,Eleccion,mario,luigi,peach,gameover);
	
	
	
	
	if(gameover){
		system("cls");
		gotoxy(35,5);
		cout<<"¡¡Has perdido!!"<<endl;
		gotoxy(33,6);
		cout<<"La posicion era "<<peach.y<<endl;
		Sleep(3000);
	}else{
		for(int i = 0;i < 20;i++){ // for para ubicar la torre 
			if(i == peach.y){
				m.mat[9][i] = 'T';
			}
		}
		mostrarMatriz(m);
		
		system("cls");
		mostrarMatriz(m);
		
		if(Eleccion == 'M' or Eleccion == 'm'){
			movimientos(mario,m,peach,luigi);
		}else if(Eleccion == 'L' or Eleccion =='l'){
			movimientos(luigi,m,peach,mario);
		}
		mostrarControles();
		if(peach.y == luigi.y or peach.y == mario.y){
			gano(mario.contFlores,luigi.contFlores);
		}
		
	}
	
}
