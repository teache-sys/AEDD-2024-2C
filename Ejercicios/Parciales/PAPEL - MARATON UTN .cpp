#include <iostream>
#include <iomanip>
using namespace std;

void funcion();

int main(int argc, char *argv[]) {
	funcion();
	
	
	return 0;
}

void funcion(){
	int edad, menorEdad = 0, contMujeres = 0, edadMujeres = 0, cont35=0;
	char sexo, auxSexo;
	
	for(int i = 1 ; i <= 4 ; i++){
		cout << " ingrese dupla (sexo, edad) " << endl;
		cin >> sexo>> edad;
		if(i == 1){
			menorEdad =  edad;
			auxSexo = sexo;
		}
		if(edad < menorEdad){
			menorEdad =  edad;
			auxSexo = sexo;
		}
		if(sexo == 'f'){
			edadMujeres+=edad;
			contMujeres++;
		}
		if(edad < 35){
			cont35++;
		}	
	}
	cout << " la cantidad de mujeres son " << contMujeres << endl;
	float promedio = edadMujeres/contMujeres;
	float porcentaje = (cont35*100)/4;
	cout << "El mas joven es: "<< auxSexo<< " y tiene "<< menorEdad << " anios" << endl;
	cout << "El promedio de mujeres es: "<< promedio << endl;
	cout << "El "<<fixed<<setprecision(2)<< porcentaje<< "% son menores de 35 anios" << endl;
	
}
