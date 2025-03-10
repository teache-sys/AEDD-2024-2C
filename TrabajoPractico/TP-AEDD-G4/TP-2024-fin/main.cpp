#include<iostream>
#include <cstdlib>
#include <windows.h>
#include "menus.h"
#include "logos.h"

using namespace std;

int main (int argc, char *argv[]) {
		
	system("mode con: cols=160 lines=43");
	system("color 06");

	
	animacion_bienvenida();
	Pantalla_Bienvenida();
	system("cls");
	Menu_Principal();
	
	return 0;
}

