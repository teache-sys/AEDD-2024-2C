#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "logos.h"
#include "gotoxy.h"
#include "menus.h"
#include "Usuario.h"
#include "encriptacion.h"
#include "algoritmos.h"
#include "Personaje.h"


#include <cstring>
#include <cstdio>
#include <clocale>
#include <wchar.h>
#include <locale.h>
#include <cctype>
#include "SimulacionB.h"

using namespace std;

void imprimirArch(){
	ifstream f;
	usuario p;
	
	f.open("Usuarios.dat",ios::binary);
	
	if(!f){
		cout<<"Error al abrir el archivo."<<endl;
	}
	else{
		while(f.read((char*) &p, sizeof(usuario))){
			desencriptar(p.nombreUsuario);
			desencriptar(p.clave);
			cout<<p.nombreUsuario<<endl;
			cout<<p.clave<<endl<<endl;
		}
	}
	f.close();
}

void Menu_Registro(bool& ok){
	setlocale(LC_ALL, "");//Mostrar Acentos
	usuario p;
	int pos=0;
	bool valido=true;
	char clave2[37],opcion;
	cargarUsuario(p);
	if(condiciones(p.nombreUsuario) and verifContrasenia(p.clave)){
		encriptar(p.nombreUsuario);
		encriptar(p.clave);
		if(!existe(p.nombreUsuario,pos)){
			time_t tiempo_actual = time(nullptr);
			p.ultimoAcceso = *localtime(&tiempo_actual);
			cout << "Confirme contraseña(reingrese): ";
			gets(clave2);
			encriptar(clave2);
			if(strcmp(p.clave, clave2) == 0){
				registrarUsuario(p);
//				system("cls");
//				imprimirArch();
//				system("pause");
				cout << "Usuario registrado correctamente."<< endl;
				do{
					cout<<"Desea iniciar sesión?(S/N)"<<endl;
					cin >> opcion;
					opcion = toupper(opcion);
					if(opcion == 'S'){
						Menu_InSesion(ok);
					}else if(opcion == 'N'){
						Menu_Principal();
					}else{
						cout<<"Ingrese un dato válido...";
						valido = false;
					}
				}while(!valido);
			}else{
				cout << "Las contraseñas no coinciden,"<< endl;
				cout << "Usuario no registrado."<< endl;
				Sleep(2000);
				Menu_Principal();
			}
		}
		else{
			cout<<"Usuario ya existente!!"<<endl;
			Sleep(2000);
			Menu_Principal();
		}
	}else{
		cout<<"Nombre de usuario o constraseña no validas..."<<endl<<"Usuario no registrado"<<endl;
		Sleep(2000);
		Menu_Principal();
	}
}
void Menu_Algoritmos(){
	setlocale(LC_ALL, "");//Mostrar Acentos
	char seleccion;
	bool salida = false;
	
	do{
		Menu_Algoritmos_Logo();
		cin >> seleccion;
		
		switch(seleccion){
		case '1':
			system("cls");
			Menu_Algoritmo1_Iterativo();
			break;
		case '2':
			system("cls");
			Menu_Algoritmo1_Recursivo();
			break;
		case '3':
			system("cls");
			Menu_Algoritmo2_Iterativo();
			break;
		case '4':
			system("cls");
			Menu_Algoritmo2_Recursivo();
			break;
		case '9':
			salida= true;
			break;
		default: 
			system("color 04");
			cout << "Porfavor ingresar una opción valida... " << endl;
			system("pause");
		}
		
	} while(salida==false);
	

}
void Menu_InSesion(bool& ingreso){
	setlocale(LC_ALL, "");//Mostrar Acentos
	int intentos = 0, pos = 0;
	usuario p;
	char aux[11];
	char aux2[32];
	fstream archivo;
	archivo.open("Usuarios.dat", ios::binary | ios::in | ios::out);
	
	if (!archivo) {
		cout << "Error al abrir el archivo." << endl;
	} else {
		while (intentos < 3 && !ingreso) {
			pos = 0;
			cargarUsuario(p); 
			
			strcpy(aux,p.nombreUsuario);
			encriptar(p.nombreUsuario);
			encriptar(p.clave);
			strcpy(aux2,p.clave);
			
			if (existe(p.nombreUsuario, pos)){  
				archivo.seekg(pos * sizeof(usuario), ios::beg);
				archivo.read((char*)&p, sizeof(usuario));

				if(strcmp(p.clave, aux2) == 0){
					if (p.ultimoAcceso.tm_year == 0 && p.ultimoAcceso.tm_mon == 0 && p.ultimoAcceso.tm_mday == 0) {
						BienvenidoPrimerAcc(aux);
					} else {
						
						system("cls");
						cout<<"Bienvenido "<<aux<<endl;
						cout<<"========================"<<endl;						cout<<"Ultimo acceso a la aplicacion:";
						mostrarfecha(p.ultimoAcceso);
						time_t tiempoactual = time(nullptr);
						p.ultimoAcceso = *localtime(&tiempoactual);  
						archivo.seekp(pos * sizeof(usuario), ios::beg);
						archivo.write((char*)&p, sizeof(usuario));
						archivo.read((char*)&p,sizeof(usuario));
						cout << endl;
						system("pause");
					}
					ingreso = true;
				}else{
					intentos++;
				}
				
			} else {
				intentos++;
			}
		}
		
		if (intentos == 3 && !ingreso) {
			cout << "Usuario y/o contraseña incorrectos." << endl;
			cout << "Máximo de intentos alcanzados." << endl;
		}
	}
	archivo.close(); 
}


void mostrarControles() {
	int x = 68; 
	int y = 25;
	gotoxy(x, y);     cout << "Controles:";
	gotoxy(x, y + 1); cout << "W - Caminar";
	gotoxy(x, y + 2); cout << "Q - Cambiar orientacion 180°";
	gotoxy(x, y + 3); cout << "E - Saludar";
	gotoxy(x, y + 4); cout << "A - Consultar ubicacion";
}

/*
PARA SIMULACION A
gotoxy(x, y);     cout << "Controles:";
gotoxy(x, y + 1); cout << "W - Caminar";
gotoxy(x, y + 2); cout << "S - Saltar";
gotoxy(x, y + 3); cout << "X - Bajar";
gotoxy(x, y + 4); cout << "D - Trepar";
gotoxy(x, y + 5); cout << "Q - Cambiar orientacion 180°";
gotoxy(x, y + 6); cout << "A - Consultar ubicacion";
gotoxy(x, y + 7); cout << "E - Saludar";
gotoxy(x, y + 8); cout << "9 - Menu Principal";

*/

void Menu_MarioBros(){
	setlocale(LC_ALL, "");
	system("mode con: cols=100 lines=35");
	char seleccion;
	bool salida= false;
	matriz m;
	personaje mario, luigi, peach;
	do{
		logoJuegos();
		gotoxy(26,10);
		cout << "A.- Simulación de encuentro entre Mario y Luigi" << endl;
		gotoxy(26,11);
		cout << "B.- Simulación de búsqueda de Princesa Peach"<< endl;
		gotoxy(26,13);
		cout << "9.- Volver al menú anterior"<< endl;
		
		cin >> seleccion;
		seleccion = toupper(seleccion);
		switch(seleccion){
		case 'A':
			// ir a simulacion A
			system("cls");
			cout << "No habia tanto tiempo... :( "<< endl;
			Sleep(3000);
			Menu_Principal_logo();
			salida=true;
			break;
		case 'B':
			system("cls");
			gotoxy(30,5);
			cout << "Creando tablero y personajes..."<< endl;
			Sleep(4000);
			system("cls");
			cargarTab(m);
			crearPersonajes(mario,luigi,peach,m);
			//mostrarMatriz(m);
			simulacionB(m,mario,luigi,peach);
			salida=true;
			break;
		case '9':
			salida=true;
			break;
		default: 
			system("cls");
			system("color 04");
			gotoxy(30,5);
			cout << "Por favor ingresar una opción valida... " << endl;
			Sleep(2000);
		}
		
	}while(salida == false);

}
void Menu_Principal(){
	char seleccion, opcionx;
	bool salida=false, ok = false;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	do{
		Menu_Principal_logo();
		cin >> seleccion;
		
		switch(seleccion){
		case '1':
			menuPrincipal_registro_animacion();
			system("cls");
			Menu_Registro(ok);
			break;
		case '2':
			menuPrincipal_InSesion_animacion();
			system("cls");
			Menu_InSesion(ok);
			break;
		case '3':
			if(ok){
				menuPrincipal_Algoritmos_animacion();
				system("cls");
				Menu_Algoritmos();
			}
			break;
		case '4':
			if(ok){
				menuPrincipal_MarioBros_animacion();
				system("cls");
				Menu_MarioBros();
			}
			break;
		case '9':
			do{
				system("cls");
				gotoxy(30,15);
				cout << "Estas seguro de que quieres salir?" << endl;
				
				gotoxy(35,16);
				SetConsoleTextAttribute(hConsole, 2);
				cout << "si(1)           ";
				SetConsoleTextAttribute(hConsole, 4);
				cout << "no(2)" << endl;
				
				SetConsoleTextAttribute(hConsole, 0);
				cin >> opcionx;
				SetConsoleTextAttribute(hConsole, 7);
				
				if(opcionx=='1'){
					opcionx=true;
					salida=true;
				}
				else if (opcionx=='2'){
					Menu_Principal();
					opcionx=true;}
				else{
					cout << "Porfavor ingresar una opción valida... " << endl;
					system("pause");
					opcionx=false;}
			}while(opcionx==false);
			break;
		default: 
			system("color 04");
			cout << "Porfavor ingresar una opción valida... " << endl;
			system("pause");
		}
		
	} while(salida==false);
}

void Menu_Algoritmo1_Recursivo(){
    setlocale(LC_ALL, "");
    char seleccion;
    bool salida=false;
    int N;

    do{
        gotoxy(33,10);
        cout<<"ALGORITMO: 'De Decimal a Binario'"<<endl;
        gotoxy(20,11);
        cout<<"========================================================"<<endl;

        gotoxy(33,13);
        cout<<"1.- Ver definición"<<endl;
        gotoxy(33,14);
        cout<<"2.- Ejecutar"<<endl;

        gotoxy(33,16);
        cout<<"9.- Volver al menú anterior"<<endl;

        cin >> seleccion;

        switch(seleccion){
        case '1':
            system("cls");
            Texto_Decimal_Binario();
            system("pause > nul"); //No imprime el mensaje por defecto
            salida=true;
            break;
        case '2':
            system("cls");
            gotoxy(33,10);
            cout<<"Ingrese un numero entero: ";
            cin>>N;
            gotoxy(33,12);
            cout<<"Tu numero en binario es: "<<binarioR(N);
            cout << endl << endl;
            system("pause");
            salida=true;
            break;
        case '9':
            salida=true;
            break;
        default: 
            //system("color 04");
            system("cls");
            gotoxy(33,10);
            cout << "Porfavor ingresar una opción valida... " << endl;
            gotoxy(33,11);
            system("pause");
            system("cls");
        }

    } while(salida==false);
}
void Menu_Algoritmo1_Iterativo(){
	setlocale(LC_ALL, "");
	
	char seleccion;
	bool salida=false;
	int N;
	
	do{
		gotoxy(33,10);
		cout<<"ALGORITMO: 'De Decimal a Binario'"<<endl;
		gotoxy(20,11);
		cout<<"========================================================"<<endl;
	
		gotoxy(33,13);
		cout<<"1.- Ver definición"<<endl;
		gotoxy(33,14);
		cout<<"2.- Ejecutar"<<endl;
	
		gotoxy(33,16);
		cout<<"9.- Volver al menú anterior"<<endl;
		
		cin >> seleccion;
		
		switch(seleccion){
		case '1':
			system("cls");
			Texto_Decimal_Binario();
			system("pause > nul"); //No imprime el mensaje por defecto
			salida=true;
			break;
		case '2':
			system("cls");
			gotoxy(33,10);
			cout<<"Ingrese un numero entero: ";
			cin>>N;
			gotoxy(33,12);
			cout<<"Tu numero en binario es: "<<binarioI(N);
			cout << endl << endl;
			system("pause");
			salida=true;
			break;
		case '9':
			system("cls");
			salida=true;
			break;
		default: 
			//system("color 04");
			system("cls");
			gotoxy(33,10);
			cout << "Porfavor ingresar una opción valida... " << endl;
			gotoxy(33,11);
			system("pause");
			system("cls");
		}
		
	} while(salida==false);
	
}
void Menu_Algoritmo2_Recursivo(){
	setlocale(LC_ALL, "");
	
	char seleccion;
	bool salida=false;
	int N,ma;
	
	do{
		gotoxy(33,10);
		cout<<"ALGORITMO: 'Conjetura de Collatz'"<<endl;
		gotoxy(20,11);
		cout<<"========================================================"<<endl;
	
		gotoxy(33,13);
		cout<<"1.- Ver definición"<<endl;
		gotoxy(33,14);
		cout<<"2.- Ejecutar"<<endl;
	
		gotoxy(33,16);
		cout<<"9.- Volver al menu anterior"<<endl;
		
		cin >> seleccion;
		
		switch(seleccion){
		case '1':
			system("cls");
			Texto_Conjetura();
			system("pause > nul"); //No imprime el mensaje por defecto
			salida=true;
			break;
		case '2':
			system("cls");
			gotoxy(34,10);
			cout<<"Ingrese un número entero: ";
			cin>>N;
			ma = N;
			gotoxy(30,12);
			cout<<"La cantidad de pasos para llegar al 1 es: "<<ConjeturaR(N,ma);
			gotoxy(30,14);
			cout<<"El mayor número de la sucesion fue: "<<ma;
			system("pause >nul");
			salida=true;
			break;
		case '9':
			system("cls");
			salida=true;
			break;
		default: 
			//system("color 04");
			system("cls");
			gotoxy(33,10);
			cout << "Porfavor ingresar una opción valida... " << endl;
			gotoxy(33,11);
			system("pause");
			system("cls");
		}
		
	} while(salida==false);
}
void Menu_Algoritmo2_Iterativo(){
	setlocale(LC_ALL, "");
	
	char seleccion;
	bool salida=false;
	int N,ma;
	
	do{
		gotoxy(33,10);
		cout<<"ALGORITMO: 'Conjetura de Collatz'"<<endl;
		gotoxy(20,11);
		cout<<"========================================================"<<endl;
	
		gotoxy(33,13);
		cout<<"1.- Ver definición"<<endl;
		gotoxy(33,14);
		cout<<"2.- Ejecutar"<<endl;
	
		gotoxy(33,16);
		cout<<"9.- Volver al menú anterior"<<endl;
		
		cin >> seleccion;
		
		switch(seleccion){
		case '1':
			system("cls");
			Texto_Conjetura();
			system("pause > nul"); //No imprime el mensaje por defecto
			salida=true;
			break;
		case '2':
			system("cls");
			gotoxy(34,10);
			cout<<"Ingrese un numero entero: ";
			cin>>N;
			ma = N;
			gotoxy(30,12);
			cout<<"La cantidad de pasos para llegar a la sucesión es: "<<ConjeturaI(N,ma);
			gotoxy(30,14);
			cout<<"El mayor numero de la sucesión fue: "<<ma;
			system("pause >nul");
			salida=true;
			break;
		case '9':
			system("cls");
			salida=true;
			break;
		default: 
			//system("color 04");
			system("cls");
			gotoxy(33,10);
			cout << "Porfavor ingresar una opción valida... " << endl;
			gotoxy(33,11);
			system("pause");
			system("cls");
		}
		
	} while(salida==false);
}
	
