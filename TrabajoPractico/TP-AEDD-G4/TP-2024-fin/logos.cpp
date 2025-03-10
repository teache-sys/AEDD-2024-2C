#include "logos.h"
#include <iostream>
#include <windows.h>
#include "gotoxy.h"
using namespace std;


void logo(){
	cout <<"                                                                                                                                                             "<<endl;
	cout <<"                                                                                                                                                             "<<endl;
	cout <<"                                                                                                                                                             "<<endl;
	cout <<"               |:::::::::  ::::::::::: :::::::::: ::::    ::: :::     ::: :::::::::: ::::    ::: ::::::::::: :::::::::   ::::::::    ::::::::   .   .        "<<endl;
	cout <<"               |:+:    :+:     :+:     :+:        :+:+:   :+: :+:     :+: :+:        :+:+:   :+:     :+:     :+:    :+: :+:    :+:  :+:    :+   *   *        "<<endl;
	cout <<"               |+:+    +:+     +:+     +:+        :+:+:+  +:+ +:+     +:+ +:+        :+:+:+  +:+     +:+     +:+    +:+ +:+    +:+  +:+         *   *        "<<endl;
	cout <<"               |+#++:++#:      +#+     +#++:++#   +#+ +:+ +#+ +#+     +:+ +#++:++#   +#+ +:+ +#+     +#+     +#+    +:+ +#+    +:+  +#++:++#++  +   +        "<<endl;
	cout <<"               |+#+    +#+     +#+     +#+        +#+  +#+#+#  +#+   +#+  +#+        +#+  +#+#+#     +#+     +#+    +#+ +#+    +#+         +#+  +   +        "<<endl;
	cout <<"               |#+#    #+#     #+#     #+#        #+#   #+#+#   #+#+#+#   #+#        #+#   #+#+#     #+#     #+#    #+# #+#    #+#  #+#    #+# :¡: :¡:       "<<endl;
	cout <<"               |#########  ########### ########## ###    ####     ###     ########## ###    #### ########### #########   ########    ########  ### ###       ";
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
	cout <<endl;
}	
void logoif(int linea){ //para llamarlo despues y poder reproducir una "animación"
	if(linea==0)
		cout <<"                                                                                                                                                             "<<endl;
	if(linea==1)
		cout <<"                                                                                                                                                             "<<endl;
	if(linea==2)
		cout <<"                                                                                                                                                             "<<endl;
	if(linea==3)
		cout <<"               |:::::::::  ::::::::::: :::::::::: ::::    ::: :::     ::: :::::::::: ::::    ::: ::::::::::: :::::::::   ::::::::    ::::::::   .   .        "<<endl;    
	if(linea==4)
		cout <<"               |:+:    :+:     :+:     :+:        :+:+:   :+: :+:     :+: :+:        :+:+:   :+:     :+:     :+:    :+: :+:    :+:  :+:    :+   *   *        "<<endl;
	if(linea==5)
		cout <<"               |+:+    +:+     +:+     +:+        :+:+:+  +:+ +:+     +:+ +:+        :+:+:+  +:+     +:+     +:+    +:+ +:+    +:+  +:+         *   *        "<<endl;
	if(linea==6)
		cout <<"               |+#++:++#:      +#+     +#++:++#   +#+ +:+ +#+ +#+     +:+ +#++:++#   +#+ +:+ +#+     +#+     +#+    +:+ +#+    +:+  +#++:++#++  +   +        "<<endl;
	if(linea==7)
		cout <<"               |+#+    +#+     +#+     +#+        +#+  +#+#+#  +#+   +#+  +#+        +#+  +#+#+#     +#+     +#+    +#+ +#+    +#+         +#+  +   +        "<<endl;
	if(linea==8)
		cout <<"               |#+#    #+#     #+#     #+#        #+#   #+#+#   #+#+#+#   #+#        #+#   #+#+#     #+#     #+#    #+# #+#    #+#  #+#    #+# :¡: :¡:       "<<endl;
	if(linea==9)
		cout <<"               |#########  ########### ########## ###    ####     ###     ########## ###    #### ########### #########   ########    ########  ### ###       "<<endl;
	
}
void animacion_bienvenida(){
	for(int i=9;i>=0;i--){
		for(int j=i;j<=9;j++){
			logoif(j);
		}
		Sleep(200);
		system("cls");
	}
	for(int k=0;k<=9;k++){
		logoif(k);
	}

}
void logo_login(){
	system("cls");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	cout <<"                                                                                                                                        "<<endl;
	cout <<"                                                                                                                                        "<<endl;
	cout <<"                                                                                                                                        "<<endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |:::     :::|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" ::::    ::: ::::::::::: :::     ::: :::::::::: :::::::::   ::::::::   ::::::::     :::::::::  ::::::::::   "<<endl;    
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |:+:     :+:|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" :+:+:   :+:     :+:     :+:     :+: :+:        :+:    :+: :+:    :+: :+:    :+:    :+:    :+: :+:          "<<endl;   
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |+:+     +:+|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" :+:+:+  +:+     +:+     +:+     +:+ +:+        +:+    +:+ +:+        +:+    +:+    +:+    +:+ +:+          "<<endl;    
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |+#+     +:+|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" +#+ +:+ +#+     +#+     +#+     +:+ +#++:++#   +#++:++#:  +#++:++#++ +#+    +:+    +#+    +:+ +#++:++#     "<<endl;    
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |+#+     +#+|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" +#+  +#+#+#     +#+      +#+   +#+  +#+        +#+    +#+        +#+ +#+    +#+    +#+    +#+ +#+          "<<endl;  
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |#+#     #+#|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" #+#   #+#+#     #+#       #+#+#+#   #+#        #+#    #+# #+#    #+# #+#    #+#    #+#    #+# #+#          "<<endl;       
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               | ######### |";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" ###    #### ###########     ###     ########## ###    ###  ########   ########     #########  ##########   "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |:::::::::::|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" :::::::::  ::::::::::: :::     ::: :::::::::::     :::      ::::::::       :::   :::                       "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |    :+:    |";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" :+:    :+:     :+:     :+:     :+:     :+:       :+: :+:   :+:    :+:      :+:   :+:                       "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |    +:+    |";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" +:+    +:+     +:+     +:+     +:+     +:+      +:+   +:+  +:+              +:+ +:+                        "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |    +#+    |";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" +#++:++#:      +#+     +#+     +:+     +#+     +#++:++#++: +#++:++#++        +#++:                         "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |    +#+    |";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" +#+    +#+     +#+      +#+   +#+      +#+     +#+     +#+        +#+         +#+                          "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |    #+#    |";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" #+#    #+#     #+#       #+#+#+#       #+#     #+#     #+# #+#    #+#         #+#                          "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |    ###    |";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" ###    ### ###########     ###     ########### ###     ###  ########          ###                          "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |::::    :::|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<"     :::     :::     ::: :::::::::: ::::::::      :::      :::::::: ::::::::::: ::::::::  ::::    :::       "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |:+:+:   :+:|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<"   :+: :+:   :+:     :+: :+:       :+:    :+:   :+: :+:   :+:    :+:    :+:    :+:    :+: :+:+:   :+:       "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |:+:+:+  +:+|";
	SetConsoleTextAttribute(hConsole, 7);	
	cout <<"  +:+   +:+  +:+     +:+ +:+       +:+         +:+   +:+  +:+           +:+    +:+    +:+ :+:+:+  +:+       "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |+#+ +:+ +#+|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" +#++:++#++: +#+     +:+ +#++:++#  :#:        +#++:++#++: +#+           +#+    +#+    +:+ +#+ +:+ +#+       "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |+#+  +#+#+#|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" +#+     +#+  +#+   +#+  +#+       +#+   +#+# +#+     +#+ +#+           +#+    +#+    +#+ +#+  +#+#+#       "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |#+#   #+#+#|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" #+#     #+#   #+#+#+#   #+#       #+#    #+# #+#     #+# #+#    #+#    #+#    #+#    #+# #+#   #+#+#       "<<endl;
	
	SetConsoleTextAttribute(hConsole, 9);
	cout <<"               |###    ####|";
	SetConsoleTextAttribute(hConsole, 7);
	cout <<" ###     ###     ###     ########## ########  ###     ###  ######## ########### ########  ###    ####       "<<endl;
	cout <<"\n\n";
}
void Menu_Principal_logo(){
	setlocale(LC_ALL, "");// Mostar Acentos
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	system("mode con: cols=100 lines=35");
	SetConsoleTextAttribute(hConsole, 7);
	cout << "====================================================================================================" << endl;
	cout << "||       ___  ___                 _     ______        _               _                _          []" << endl;
	cout << "[]       |  \\/  |                //     | ___ \\      (_)             (_)              | |         ||" << endl;
	cout << "||       | .  . |  ___  _ __   _   _    | |_/ / _ __  _  _ __    ___  _  _ __    __ _ | |         []" << endl;
	cout << "[]       | |\\/| | / _ \\| '_ \\ | | | |   |  __/ | '__|| || '_ \\  / __|| || '_ \\  / _` || |         ||" << endl;
	cout << "||       | |  | ||  __/| | | || |_| |   | |    | |   | || | | || (__ | || |_) || (_| || |         []" << endl;
	cout << "[]       \\_|  |_/ \\___||_| |_| \\__,_|   \\_|    |_|   |_||_| |_| \\___||_|| .__/  \\__,_||_|         ||" << endl;
	cout << "||                                                                      | |                       []" << endl;
	cout << "[]                                                                      |_|                       ||" << endl;
	cout << "====================================================================================================" << endl;
	
	gotoxy(35,11);
	cout << "|O=============O|";
	gotoxy(35,12);
	cout <<	"| [1] Registro  |" << endl;
	gotoxy(35,13);
	cout << "|O=============O|";
	
	gotoxy(35,15);
	cout << "|O===================O|";
	gotoxy(35,16);
	cout <<	"| [2] Iniciar Sesión  |" << endl;
	gotoxy(35,17);
	cout << "|O===================O|";
	
	gotoxy(35,19);
	cout << "|O=========================O|";
	gotoxy(35,20);
	cout <<	"| [3] Algoritmos Numéricos  |" << endl;
	gotoxy(35,21);
	cout << "|O=========================O|";
	
	gotoxy(35,23);
	cout << "|O===========================O|";
	gotoxy(35,24);
	cout <<	"| [4] Juego Super Mario Bros  |" << endl;
	gotoxy(35,25);
	cout << "|O===========================O|";	
	
	gotoxy(35,27);
	cout << "|O===========================O|";
	gotoxy(35,28);
	cout <<	"| [9] Salir de la aplicación  |" << endl;
	gotoxy(35,29);
	cout << "|O===========================O|";
	
	gotoxy(35,32);
	cout << " Ingrese una opción: ";
}
void Menu_Algoritmos_Logo(){
	setlocale(LC_ALL, "");//Mostrar Acentos
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	system("mode con: cols=100 lines=35");
	SetConsoleTextAttribute(hConsole, 7);
	
	cout << "====================================================================================================" << endl;
    cout << "||        ####   ##      ######## #######  #####.   ## ######## ###  ###  #######   #######       []" << endl;
    cout << "[]       ##  ##  ##      ##       ##   ##  ##   ##  ##    ##    ## ## ##  ##   ##   ##            ||" << endl;
    cout << "||       ######  ##      ######## ##   ##  #######  ##    ##    ##    ##  ##   ##   #######       []" << endl;
    cout << "[]       ##  ##  ##      ##    ## ##   ##  ##   ##  ##    ##    ##    ##  ##   ##        ##	  ||" << endl;
    cout << "||       ##  ##  ####### ######## #######  ##   ##  ##    ##    ##    ##  #######   #######       []" << endl;
    cout << "====================================================================================================" << endl;
	

	gotoxy(30,12);
	cout <<	" [1] Algoritmo A (Solucion Iterativa)  " << endl;


	gotoxy(30,14);
	cout <<	" [2] Algoritmo A (Solucion Recursiva)  " << endl;


	gotoxy(30,16);
	cout <<	" [3] Algoritmo B (Solucion Iterativa)  " << endl;

	
	gotoxy(30,18);
	cout <<	" [4] Algoritmo B (Solucion Recursiva)  " << endl;
	
	
	gotoxy(30,22);
	cout <<	" [9] Volver al menú" << endl;

	
	gotoxy(30,25);
	cout << " Ingrese una opción: ";
	
}
void Pantalla_Bienvenida(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	while(!GetAsyncKeyState(VK_SHIFT)){
		int color=rand()%9+1;
		system("cls");
		logo();
		cout <<"\n\n\n\n\n\n";
		cout <<"          .--.                   .---.        " << endl;
		cout <<"      .---|__|           .-.     |~~~|        " << endl;
		cout <<"   .--|===|--|_          |_|     |UTN|--.                    ";
		
		SetConsoleTextAttribute(hConsole, color);
		cout <<" =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
		SetConsoleTextAttribute(hConsole, 6);
		
		cout <<"   |  |===|  |'\\     .---!~|  .--|   |--|                    ";
		
		SetConsoleTextAttribute(hConsole, color);
		cout <<" []                                   []" << endl;
		SetConsoleTextAttribute(hConsole, 6);
		
		cout <<"   |%%| A |  |.'\\    |===| |--|%%|   |  |                    ";
		
		SetConsoleTextAttribute(hConsole, color);
		cout << " ||   Presione SHIFT para continuar   ||" << endl;
		SetConsoleTextAttribute(hConsole, 6);
		
		cout <<"   |%%| E |  |\\.'\\   |   | |__|  |   |  |                    ";
		
		SetConsoleTextAttribute(hConsole, color);
		cout <<" []                                   []";
		SetConsoleTextAttribute(hConsole, 6);
		
		cout << "                     ";
		cout << "         hecho por los estudiantes:" << endl;
		cout << "   |  | D |  | \\  \\  |===| |==|  |   |  |                   ";
		
		SetConsoleTextAttribute(hConsole, color);
		cout <<"  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		SetConsoleTextAttribute(hConsole, 6);
		
		cout << "                    ";
		cout << "          Brian Briani" << endl;
		cout << "   |  | D |__|  \\.'\\ |   |_|__|  |~~~|__|";
		cout << "                                                                               ";
		cout << "           Estanislao Gallo" << endl;
		cout << "   |  |===|--|   \\.'\\|===|~|--|%%|~~~|--|";
		cout << "                                                                               ";
		cout << "           Thiago Aguirre      " << endl;
		cout << "   ^--^---'--^    `-'`---^-^--^--^---'--'                                                                                                   "         << endl;
		Sleep(500);
		system("cls");
		logo();
		cout << "\n\n\n\n\n\n";
		cout << "          .--.                   .---.        " << endl;
		cout << "      .---|__|           .-.     |~~~|        " << endl;
		cout << "   .--|===|--|_          |_|     |UTN|--.     " << endl;
		cout << "   |  |===|  |'\\     .---!~|  .--|   |--|    " << endl;
		cout << "   |%%| A |  |.'\\    |===| |--|%%|   |  |    " << endl;
		cout << "   |%%| E |  |\\.'\\   |   | |__|  |   |  |                                                                                          hecho por los estudiantes:" << endl;
		cout << "   |  | D |  | \\  \\  |===| |==|  |   |  |                                                                                          Brian Briani"         << endl;
		cout << "   |  | D |__|  \\.'\\ |   |_|__|  |~~~|__|                                                                                          Estanislao Gallo"       << endl;
		cout << "   |  |===|--|   \\.'\\|===|~|--|%%|~~~|--|                                                                                          Thiago Aguirre    "         << endl;
		cout << "   ^--^---'--^    `-'`---^-^--^--^---'--'                                                                                                   "         << endl;
		Sleep(500);
		
	}
	Sleep(1500);
}
void menuPrincipal_registro_animacion(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	system("mode con: cols=100 lines=35");
	SetConsoleTextAttribute(hConsole, 7);
	cout << "====================================================================================================" << endl;
	cout << "||       ___  ___                 _     ______        _               _                _          []" << endl;
	cout << "[]       |  \\/  |                //     | ___ \\      (_)             (_)              | |         ||" << endl;
	cout << "||       | .  . |  ___  _ __   _   _    | |_/ / _ __  _  _ __    ___  _  _ __    __ _ | |         []" << endl;
	cout << "[]       | |\\/| | / _ \\| '_ \\ | | | |   |  __/ | '__|| || '_ \\  / __|| || '_ \\  / _` || |         ||" << endl;
	cout << "||       | |  | ||  __/| | | || |_| |   | |    | |   | || | | || (__ | || |_) || (_| || |         []" << endl;
	cout << "[]       \\_|  |_/ \\___||_| |_| \\__,_|   \\_|    |_|   |_||_| |_| \\___||_|| .__/  \\__,_||_|         ||" << endl;
	cout << "||                                                                      | |                       []" << endl;
	cout << "[]                                                                      |_|                       ||" << endl;
	cout << "====================================================================================================" << endl;
	
	
	gotoxy(35,15);
	cout << "|O===================O|";
	gotoxy(35,16);
	cout <<	"| [2] Iniciar sesión  |" << endl;
	gotoxy(35,17);
	cout << "|O===================O|";
	
	gotoxy(35,19);
	cout << "|O=========================O|";
	gotoxy(35,20);
	cout <<	"| [3] Algoritmos Numericos  |" << endl;
	gotoxy(35,21);
	cout << "|O=========================O|";
	
	gotoxy(35,23);
	cout << "|O===========================O|";
	gotoxy(35,24);
	cout <<	"| [4] Juego Super Mario Bros  |" << endl;
	gotoxy(35,25);
	cout << "|O===========================O|";	
	
	gotoxy(35,27);
	cout << "|O===========================O|";
	gotoxy(35,28);
	cout <<	"| [X] Salir de la aplicación  |" << endl;
	gotoxy(35,29);
	cout << "|O===========================O|";
	
	gotoxy(35,32);
	cout << " Ingrese una opción: ";
	
/////////////////////////////////////////////////////////////////////////////////////////////////
	
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy(35,11);
	cout << "|O=============O|";
	gotoxy(35,12);
	cout <<	"| [1]";
	gotoxy(49,12);
	cout << "  |" << endl;
	gotoxy(35,13);
	cout << "|O=============O|";
	
	gotoxy(41,12);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "R";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 3);
	cout << "e";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "g";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "i";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "s";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "t";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "r";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "o";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 9);
	
	Sleep(2000);
}
void menuPrincipal_InSesion_animacion(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	system("mode con: cols=100 lines=35");
	SetConsoleTextAttribute(hConsole, 7);
	cout << "====================================================================================================" << endl;
	cout << "||       ___  ___                 _     ______        _               _                _          []" << endl;
	cout << "[]       |  \\/  |                //     | ___ \\      (_)             (_)              | |         ||" << endl;
	cout << "||       | .  . |  ___  _ __   _   _    | |_/ / _ __  _  _ __    ___  _  _ __    __ _ | |         []" << endl;
	cout << "[]       | |\\/| | / _ \\| '_ \\ | | | |   |  __/ | '__|| || '_ \\  / __|| || '_ \\  / _` || |         ||" << endl;
	cout << "||       | |  | ||  __/| | | || |_| |   | |    | |   | || | | || (__ | || |_) || (_| || |         []" << endl;
	cout << "[]       \\_|  |_/ \\___||_| |_| \\__,_|   \\_|    |_|   |_||_| |_| \\___||_|| .__/  \\__,_||_|         ||" << endl;
	cout << "||                                                                      | |                       []" << endl;
	cout << "[]                                                                      |_|                       ||" << endl;
	cout << "====================================================================================================" << endl;
	
	
	gotoxy(35,11);
	cout << "|O=============O|";
	gotoxy(35,12);
	cout <<	"| [1] Registro  |" << endl;
	gotoxy(35,13);
	cout << "|O=============O|";
	
	gotoxy(35,19);
	cout << "|O=========================O|";
	gotoxy(35,20);
	cout <<	"| [3] Algoritmos Numéricos  |" << endl;
	gotoxy(35,21);
	cout << "|O=========================O|";
	
	gotoxy(35,23);
	cout << "|O===========================O|";
	gotoxy(35,24);
	cout <<	"| [4] Juego Super Mario Bros  |" << endl;
	gotoxy(35,25);
	cout << "|O===========================O|";	
	
	gotoxy(35,27);
	cout << "|O===========================O|";
	gotoxy(35,28);
	cout <<	"| [X] Salir de la aplicación  |" << endl;
	gotoxy(35,29);
	cout << "|O===========================O|";
	
/////////////////////////////////////////////////////////////////////////////////////////////////
	
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy(35,15);
	cout << "|O===================O|";
	gotoxy(35,16);
	cout <<	"| [2]";
	gotoxy(55,16);
	cout << "  |" << endl;
	gotoxy(35,17);
	cout << "|O===================O|";
	
	gotoxy(41,16);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "I";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 3);
	cout << "n";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "i";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "c";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "i";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "a";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "r";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << " ";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "S";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 3);
	cout << "e";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "s";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "i";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "ó";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "n";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	
	Sleep(2000);
}
void menuPrincipal_Algoritmos_animacion(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	system("mode con: cols=100 lines=35");
	SetConsoleTextAttribute(hConsole, 7);
	cout << "====================================================================================================" << endl;
	cout << "||       ___  ___                 _     ______        _               _                _          []" << endl;
	cout << "[]       |  \\/  |                //     | ___ \\      (_)             (_)              | |         ||" << endl;
	cout << "||       | .  . |  ___  _ __   _   _    | |_/ / _ __  _  _ __    ___  _  _ __    __ _ | |         []" << endl;
	cout << "[]       | |\\/| | / _ \\| '_ \\ | | | |   |  __/ | '__|| || '_ \\  / __|| || '_ \\  / _` || |         ||" << endl;
	cout << "||       | |  | ||  __/| | | || |_| |   | |    | |   | || | | || (__ | || |_) || (_| || |         []" << endl;
	cout << "[]       \\_|  |_/ \\___||_| |_| \\__,_|   \\_|    |_|   |_||_| |_| \\___||_|| .__/  \\__,_||_|         ||" << endl;
	cout << "||                                                                      | |                       []" << endl;
	cout << "[]                                                                      |_|                       ||" << endl;
	cout << "====================================================================================================" << endl;
	
	
	gotoxy(35,11);
	cout << "|O=============O|";
	gotoxy(35,12);
	cout <<	"| [1] Registro  |" << endl;
	gotoxy(35,13);
	cout << "|O=============O|";
	
	gotoxy(35,15);
	cout << "|O===================O|";
	gotoxy(35,16);
	cout <<	"| [2] Iniciar sesión  |" << endl;
	gotoxy(35,17);
	cout << "|O===================O|";
	
	gotoxy(35,23);
	cout << "|O===========================O|";
	gotoxy(35,24);
	cout <<	"| [4] Juego Super Mario Bros  |" << endl;
	gotoxy(35,25);
	cout << "|O===========================O|";	
	
	gotoxy(35,27);
	cout << "|O===========================O|";
	gotoxy(35,28);
	cout <<	"| [X] Salir de la aplicación  |" << endl;
	gotoxy(35,29);
	cout << "|O===========================O|";
	
/////////////////////////////////////////////////////////////////////////////////////////////////
	
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy(35,19);
	cout << "|O=========================O|";
	gotoxy(35,20);
	cout <<	"| [3]";
	gotoxy(61,20);
	cout << "  |" << endl;
	gotoxy(35,21);
	cout << "|O=========================O|";
	
	gotoxy(41,20);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "A";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 3);
	cout << "l";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "g";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "o";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "r";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "i";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "t";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "m";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "o";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 3);
	cout << "s";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 2);
	cout << " ";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "N";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "u";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "m";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "é";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "r";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "i";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "c";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "o";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "s";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	
	Sleep(2000);
}

	
void logoJuegos() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
	system("cls");
	system("mode con: cols=100 lines=35"); 
	SetConsoleTextAttribute(hConsole, 7);
	
	gotoxy(0,1);
	cout <<"|"<<endl;
	gotoxy(0,2);
	cout <<"|"<<endl;
	gotoxy(0,3);
	cout <<"|"<<endl;
	gotoxy(0,4);
	cout <<"|"<<endl;
	gotoxy(0,5);
	cout <<"|"<<endl;
	gotoxy(0,6);
	cout <<"|"<<endl;
	gotoxy(0,7);
	cout <<"|"<<endl;
	
	gotoxy(99,1);
	cout <<"|"<<endl;
	gotoxy(99,2);
	cout <<"|"<<endl;
	gotoxy(99,3);
	cout <<"|"<<endl;
	gotoxy(99,4);
	cout <<"|"<<endl;
	gotoxy(99,5);
	cout <<"|"<<endl;
	gotoxy(99,6);
	cout <<"|"<<endl;
	gotoxy(99,7);
	cout <<"|"<<endl;

	gotoxy(0,0);
	cout <<"===================================================================================================="<< endl;
	
	gotoxy(16,2);
	cout <<"     	      __    __ __    _____    _____    _____    _____ " << endl;
	gotoxy(17,3);
	cout << "	   __|  |  |  |  |  |   __|  |   __|  |     |  |   __|"<< endl;
	gotoxy(17,4);
	cout << "	  |  |  |  |  |  |  |   __|  |  |  |  |  |  |  |__   |"<< endl;
	gotoxy(17,5);
	cout << "	  |_____|  |_____|  |_____|  |_____|  |_____|  |_____|"<< endl;
	gotoxy(0,8);
	
	cout << "===================================================================================================="<< endl;
	cout << endl;
}


void menuPrincipal_MarioBros_animacion(){
	setlocale(LC_ALL, "");//mostrar Acentos
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	system("mode con: cols=100 lines=35");
	SetConsoleTextAttribute(hConsole, 7);
	cout << "====================================================================================================" << endl;
	cout << "||       ___  ___                 _     ______        _               _                _          []" << endl;
	cout << "[]       |  \\/  |                //     | ___ \\      (_)             (_)              | |         ||" << endl;
	cout << "||       | .  . |  ___  _ __   _   _    | |_/ / _ __  _  _ __    ___  _  _ __    __ _ | |         []" << endl;
	cout << "[]       | |\\/| | / _ \\| '_ \\ | | | |   |  __/ | '__|| || '_ \\  / __|| || '_ \\  / _` || |         ||" << endl;
	cout << "||       | |  | ||  __/| | | || |_| |   | |    | |   | || | | || (__ | || |_) || (_| || |         []" << endl;
	cout << "[]       \\_|  |_/ \\___||_| |_| \\__,_|   \\_|    |_|   |_||_| |_| \\___||_|| .__/  \\__,_||_|         ||" << endl;
	cout << "||                                                                      | |                       []" << endl;
	cout << "[]                                                                      |_|                       ||" << endl;
	cout << "====================================================================================================" << endl;
	
	
	gotoxy(35,11);
	cout << "|O=============O|";
	gotoxy(35,12);
	cout <<	"| [1] Registro  |" << endl;
	gotoxy(35,13);
	cout << "|O=============O|";
	
	gotoxy(35,15);
	cout << "|O===================O|";
	gotoxy(35,16);
	cout <<	"| [2] Iniciar sesión  |" << endl;
	gotoxy(35,17);
	cout << "|O===================O|";
	
	gotoxy(35,19);
	cout << "|O=========================O|";
	gotoxy(35,20);
	cout <<	"| [3] Algoritmos Numéricos  |" << endl;
	gotoxy(35,21);
	cout << "|O=========================O|";
	
	gotoxy(35,27);
	cout << "|O===========================O|";
	gotoxy(35,28);
	cout <<	"| [X] Salir de la aplicación  |" << endl;
	gotoxy(35,29);
	cout << "|O===========================O|";
	
/////////////////////////////////////////////////////////////////////////////////////////////////
	
	SetConsoleTextAttribute(hConsole, 6);
	gotoxy(35,23);
	cout << "|O===========================O|";
	gotoxy(35,24);
	cout <<	"| [4]";
	gotoxy(63,24);
	cout << "  |" << endl;
	gotoxy(35,25);
	cout << "|O===========================O|";
	
	gotoxy(41,24);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "J";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 3);
	cout << "u";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "e";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "g";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "o";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << " ";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "S";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "u";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "p";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 3);
	cout << "e";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "r";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 8);
	cout << " ";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "M";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "a";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "r";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "i";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "o";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << " ";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "B";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "r";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "o";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "s";
	Sleep(200);
	SetConsoleTextAttribute(hConsole, 7);
	
	Sleep(2000);
}
