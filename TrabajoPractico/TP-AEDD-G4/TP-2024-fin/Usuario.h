#include <ctime>
using namespace std;
struct usuario{
	char nombreUsuario[11];
	char clave[37];
	struct tm ultimoAcceso= {};
};
void cargarUsuario(usuario &Usuario);
bool condiciones(char nombreUsuario[]);
bool existe(char nombreUsuario[], int& pos);
void registrarUsuario(usuario p);
bool tieneMinusc(char cad[]);
bool caracter(char cad[]);
bool verifContrasenia(char clave[]);
void mostrarfecha(const tm& fecha);
void BienvenidoPrimerAcc(char aux[]);
void Bienvenido(char aux[], usuario p);

