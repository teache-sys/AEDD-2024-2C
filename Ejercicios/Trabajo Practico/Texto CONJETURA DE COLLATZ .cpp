#include <iostream>
#include <string>
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
	
	string titulo = "CONJETURA DE COLLATZ";
	animar(titulo);
	
	
	string texto =
		"Tambien conocida como conjetura" + rojo + " 3n+1"+ reset + " fue definida por el matematico Lothar Collatz en 1937"
		+ "\ny, hasta la fecha , no ha sido resuelta."
		+"Esta conjetura esta enunciada por la siguiente operacion, para cualquier numero entero positivo:"+
		azul+"\n		»"+reset+"si el numero es" +rojo+" par"+reset+", se divide entre 2"+
		azul+"\n		»"+reset+ "si el numero es" +rojo+" impar"+reset+",se multiplica por 3 y se suma 1"+
		"\n\nSi aplicamos esta operacion de manera repetida, estariamos formando una sucesion,"
		"comenzando por cualquier numero entero \ny tomando cada resultado de cada paso como la entrada del siguiente."
		
		
		+"\n\nUn ejemplo resumido seria si el numero n = 6, aqui la sucesion tiene 8 pasos llegando a la siguiente sucesion :"
		+verde+"\n                 - 6, 3, 10, 5, 16, 8, 4, 2, 1."+reset
		
		+"\nPara numeros tales como el 27, por ejemplo, la sucesion tiene 111 pasos antes de llegar a 1.";
	cout << texto << endl;
	return 0;
}

