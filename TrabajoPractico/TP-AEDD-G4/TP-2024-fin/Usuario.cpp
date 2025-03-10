#include "Usuario.h"
#include "menus.h"
#include "gotoxy.h"
#include <iostream>
#include <ctime>
#include <windows.h>
#include <iomanip>

using namespace std;


void mostrarfecha(const tm& fecha) {
	cout << setw(2) << setfill('0') << fecha.tm_mday << "/"
		<< setw(2) << setfill('0') << (fecha.tm_mon + 1) << "/"
		<< (fecha.tm_year + 1900) << " ";
}

void BienvenidoPrimerAcc(char aux[]){
	system("cls");
	cout<<"Bienvenido "<<aux<<endl;
	cout << "Este es tu primer acceso." << endl;
	system("pause");
}


void Bienvenido(char aux[], usuario p){
	gotoxy(35,5);
	cout<<"Bienvenido "<<aux<<endl;
	gotoxy(33,6);
	cout<<"========================"<<endl;
	gotoxy(26,7);
	cout<<"Ultimo acceso a la aplicacion: ";
	mostrarfecha(p.ultimoAcceso);
	cout << endl<< endl;
	system("pause");
	
}

void cargarUsuario(usuario &Usuario){
	cout << "Condiciones para nombre de usuario: "<< endl; 
	cout << "1)  Comienzo con letra minuscula." << endl; 
	cout << "2)  Al menos 2(dos) letras mayusculas." << endl;
	cout << "3)  Maximo 3(tres) digitos." << endl;
	cout << endl;
	cout << "Introduzca un nombre de usuario: ";
	cin >> Usuario.nombreUsuario;     				//briaNI488
	cin.ignore(100,'\n');
	
	cout << endl << "Condiciones para contraseña: "  << endl; 
	cout << "1)  Al menos una letra minuscula, una mayuscula y un numero." << endl; 
	cout << "2)  No presentar ningun caracter de puntuacion,acentos o espacios." << endl;
	cout << "3)  Contener de 6 a 32 caracteres." << endl;
	cout<< endl<< "Introduzca una contraseña: ";
	cin >> Usuario.clave ;							//URIOnlineJudge12
	cin.ignore(100,'\n');
}

bool condiciones(char nombreUsuario[]){
	bool ok = false;
	unsigned int cont = 0,digs = 0, i = 0;
	
	while(i < strlen(nombreUsuario) and strlen(nombreUsuario) >= 6 and strlen(nombreUsuario) <= 10){ 
		if(isupper(nombreUsuario[i])){
			cont++;
		}
		else if(isdigit(nombreUsuario[i])){
			digs++;
		}
		i++;
	}
	if(cont >= 2 and digs <= 3 and islower(nombreUsuario[0])){
		ok = true;
	}
	
	return ok;
}	

bool existe(char nombreUsuario[],int & pos){
	ifstream archivo;
	usuario p;
	bool ok = false;
	archivo.open("Usuarios.dat", ios :: binary);
	
	if(!archivo){
		cout<<"Error al abrir el archivo."<<endl;
	}
	else{
		while(!ok and pos < 100 and  !archivo.eof() ){
			archivo.read((char*) &p, sizeof(usuario));
			if(strcmp(nombreUsuario, p.nombreUsuario) == 0){
				ok = true;
			}else{
				pos++;
			}
		}
	}
	archivo.close();

	return ok;
}	
	
void registrarUsuario(usuario p){
	ofstream f;
	f.open("Usuarios.dat", ios :: binary | ios::app);
	if(!f){
		cout<<"Error al abrir el archivo."<<endl;
	}else{
		f.seekp(0,ios::end);
		f.write((char*)&p, sizeof(usuario)); 
	}
	f.close();
}	
	
bool tieneMinusc(char cad[]){
	unsigned i = 0; 
	bool ok = false, ok2 =  false, ok3 =  false;
	while((i < strlen(cad)) and (!ok or !ok2 or !ok3)){
		if(islower(cad[i])){
			ok = true;
		}
		else if(isupper(cad[i])){
			ok2 = true;
		}
		else if(isdigit(cad[i])){
			ok3 = true;
		}
		i++;
	}
	if(ok and ok2 and ok3){
		return true;
	}else{
		return false;
	}
}
bool caracter(char cad[]){
	bool ok = false; unsigned i = 0; 
			
	while(i < strlen(cad) and !ok){
		if(isspace(cad[i])){
			ok = true; 
		}else if(!isalnum(cad[i])){
			ok = true;
		}else if((cad[i] < 'a' and cad[i] > 'z') or (cad[i] < 'A' and cad[i] > 'Z')){
			ok = true;
		}
		i++;
	}
	return !ok;
}
bool verifContrasenia(char clave[]){
	bool b  = false;
	if(tieneMinusc(clave) and caracter(clave)){
		b = true;
	}
	return b;
}	
