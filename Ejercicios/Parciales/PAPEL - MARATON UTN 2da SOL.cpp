#include <iostream>
#include <iomanip>
using namespace std;

void funcion (int &edadMenor, char &sexoMenor, float & promM){
	int contFemenino = 0, edad, edadM=0, cont35=0;
	char sexo;
	for(int  i = 0; i < 4 ; i++){
		cout << "ingrese sexo y edad " << endl;
		cin >> sexo >> edad;
		if(i == 0 or edad < edadMenor){
			edadMenor = edad;
			sexoMenor = sexo;
		}
		if(sexo == 'f'){
			contFemenino++;
			edadM+=edad;
		}
		if(edad < 35) cont35++;
	}
	cout << fixed<< setprecision(2) << (float) (cont35/4.0) *100<< endl;
	promM = (edadM/ contFemenino );
}


int main(int argc, char *argv[]) {
	int edadMenor;
	float promM;
	char sexoMenor;
	funcion(edadMenor,sexoMenor,promM);
	cout << "la persona mas joven es: " << edadMenor<< " "<<sexoMenor<< endl;
	cout << " la edad promedio de las mujeres inscriptas es: " << promM << endl;
	return 0;
}

