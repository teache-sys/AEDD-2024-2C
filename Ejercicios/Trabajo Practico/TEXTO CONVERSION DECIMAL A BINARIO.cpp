#include <iostream>
#include <windows.h>
using namespace std;


void animar(string &titulo){
	const string reset = "\033[0m";
	const string colores[] = {"\033[31m", "\033[32m","\033[33m" ,"\033[34m","\033[35m","\033[36m"};
	
	for(int i = 0 ; i < 6; i++){
		cout <<"\r"<< colores[i]<< titulo<< reset;
		Sleep(300);
	}
	cout << endl;
	
	
}
	


int main(int argc, char *argv[]) {
	const string reset = "\033[0m";
	const string rojo = 	"\033[31m" ;
	const string azul = "\033[34m";
	const string verde = "\033[32m";
	const string cian = "\033[36m";
	
	string titulo = "CONVERSION DE DECIMAL A BINARIO";
	animar(titulo);
	
	
	string texto = "Para facilitar su diseño y estructura, las computadoras utilizan el sistema binario "
		"\npara representar números enteros positivos que son mayores que 0."
		"\n\nPara poder hacer la conversion de un numero n,\nseguiremos una serie de pasos los cuales nos permitiran realizar esta ultima:"

		"\n		"+rojo+"1)"+reset+ "Se realiza la division entera de n sobre 2."
		"\n		"+azul+"2)"+reset+ " Se anota el residuo de la division anterior."
		"\n		"+verde+"3)"+reset+  "Se repite lo anterior con  n = n/2 desde el paso 1 hasta llegar a n = 0."
		"\n		"+cian+"4)"+reset+  " Se escribe el numero desde el ultimo residuo obtenido hasta el primer residuo.\n"
		
	"\nComo siempre la division entera por 2 te devuelve un residuo de valor 0 o 1, \nla conjuncion de estos residuos del ultimo al primero,"
	"sera una serie de 0s y 1s que forman al mismo numero \npero convertido en binario.";
	
	cout << texto << endl;
	return 0;
}

