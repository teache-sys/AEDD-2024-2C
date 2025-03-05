#include <iostream>
#include <ctime>
#include <cstring>
#include <fstream>
using namespace std;

struct usuario{
	char nombre_usuario[11];
	char clave[37];
	struct tm ultimo_acceso;
};


int main(int argc, char *argv[]) {
	usuario usuarios[100];
	
	// Inicializando 3 usuarios
	strncpy(usuarios[0].nombre_usuario, "usuario1", sizeof(usuarios[0].nombre_usuario) - 1);
	strncpy(usuarios[0].clave, "clave123", sizeof(usuarios[0].clave) - 1);
	time_t now = time(0);
	usuarios[0].ultimo_acceso = *localtime(&now);
	
	strncpy(usuarios[1].nombre_usuario, "usuario2", sizeof(usuarios[1].nombre_usuario) - 1);
	strncpy(usuarios[1].clave, "clave456", sizeof(usuarios[1].clave) - 1);
	usuarios[1].ultimo_acceso = *localtime(&now);
	
	strncpy(usuarios[2].nombre_usuario, "usuario3", sizeof(usuarios[2].nombre_usuario) - 1);
	strncpy(usuarios[2].clave, "clave789", sizeof(usuarios[2].clave) - 1);
	usuarios[2].ultimo_acceso = *localtime(&now);
	
	fstream archivo;
	archivo.open("usuarios.dat", ios :: binary | ios :: out);
	if(!archivo){
		cout << " error: el archivo no se pudo abrir " << endl;
	}
	
	archivo.write((char*)&usuarios, sizeof(usuarios));
	archivo.close();
	
	cout << "Usuarios cargados desde el archivo:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Usuario: " << usuarios[i].nombre_usuario << endl;
		cout << "Clave: " << usuarios[i].clave << endl;
		cout << "Ultimo acceso: " << usuarios[i].ultimo_acceso.tm_mday << "/"
			<< usuarios[i].ultimo_acceso.tm_mon + 1 << "/"
			<< usuarios[i].ultimo_acceso.tm_year + 1900 << " "
			<< usuarios[i].ultimo_acceso.tm_hour << ":"
			<< usuarios[i].ultimo_acceso.tm_min << ":"
			<< usuarios[i].ultimo_acceso.tm_sec << endl;
	}
	
	
	//c)
	cout << endl << endl << endl << endl;
	for(int i = 0; i < 100 ;i++){
		strcpy (usuarios[i].nombre_usuario, "");
		strcpy (usuarios[i].clave, "");
	}
	for(int i = 0; i < 3 ;i++){
		cout << "h "<<usuarios[i].nombre_usuario << endl;
		cout <<"h "<< usuarios[i].clave << endl;
	}
	cout << "aca arranca"<<endl << endl << endl;
	archivo.open("usuarios.dat", ios :: binary | ios :: in);
	if(!archivo){
		cout << "error: el archivo no se pudo abrir" << endl;
		
	}
	//archivo.read((char*)&usuarios,sizeof(usuarios)*3);
	archivo.close();
	for (int i = 0; i < 10; i++) {
		cout << "Usuario: " << usuarios[i].nombre_usuario << endl;
		cout << "Clave: " << usuarios[i].clave << endl;
		cout << "Ultimo acceso: " << usuarios[i].ultimo_acceso.tm_mday << "/"
			<< usuarios[i].ultimo_acceso.tm_mon + 1 << "/"
			<< usuarios[i].ultimo_acceso.tm_year + 1900 << " "
			<< usuarios[i].ultimo_acceso.tm_hour << ":"
			<< usuarios[i].ultimo_acceso.tm_min << ":"
			<< usuarios[i].ultimo_acceso.tm_sec << endl;
	}
	
	return 0;
}

