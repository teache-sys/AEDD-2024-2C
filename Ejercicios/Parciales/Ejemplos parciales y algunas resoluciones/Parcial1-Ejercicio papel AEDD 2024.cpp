#include <iostream>
#include <iomanip>
using namespace std;

/* Parcial 1-Ejercicio de Papel-AEDD 2024 */

void turnoMasElegido(int mat, int ves, int noc);
bool obtenerDatosAlumno(int & edad, int & anio_carrera, char & carrera, int & contM, int & contV, int & contN);
void Alumnos5to();
int Distinguidos(int);


int main(int argc, char *argv[]) {
	int edad=0,mayedad=0,anio_carrera=0,cant_dias=0, contM=0,contV=0,contN=0,cant_alum_1ro=0;
	int contadorM=0,contadorV=0,contadorN=0;
	char carrera;
	bool bandera=false; 
	
	while (obtenerDatosAlumno(edad,anio_carrera,carrera,contM,contV,contN)){
		if (edad>mayedad)
			mayedad=edad;
		
		if (anio_carrera==1){
			cant_alum_1ro++;	
			cant_dias += contM + contV + contN;		
		}	
		else if ((anio_carrera>=3)and(carrera=='S')){
			bandera=true;
			if(contM>0)
				contadorM+=contM; 
			else if (contV>0)
				contadorV+=contV;
			else if (contN>0)
				contadorN+=contN;
		}	
		contM=0,contV=0,contN=0;
	}

	cout << endl;
	cout << "Promedio= " << fixed << setprecision(2) << (float)cant_dias/cant_alum_1ro << " dias por semana" << endl;	
	
	if (bandera){
		cout << "Turno más elegido= ";
		turnoMasElegido(contadorM,contadorV,contadorN);
	}
	else cout << endl;
	cout << "Edad alumno mayor= " << mayedad << endl;
	
	cin.clear(); 
	Alumnos5to();
	return 0;
}

bool obtenerDatosAlumno(int & edad, int & anio_carrera, char & carrera, int & contM, int & contV, int & contN){
	char horario_estudio;
	
	cout << "Ingrese la edad del alumno: ";
	
	if (cin >> edad){
		
		cout << "Ingrese el anio de cursado: ";
		cin >> anio_carrera;
		
		cout << "Ingrese la carrera: ";
		cin >> carrera;
		
		cout << "Ingrese los horarios de estudio, F para terminar: ";
		cin >> horario_estudio;
		
		while(horario_estudio != 'f'){
			if (horario_estudio=='M') contM++;
			else if (horario_estudio=='V') contV++;
			else if (horario_estudio=='N') contN++;
			
			cout << "Ingrese los horarios de estudio, f para terminar: ";
			cin >> horario_estudio;
		}
		return true;
	}
	return false;
}
void turnoMasElegido(int mat, int ves, int noc){
	if((mat>ves)and(mat>noc))
		cout << "Matutino" << endl;
	else if((ves>mat)and(ves>noc))
		cout << "Vespertino" << endl;
	else if((noc>mat)and(noc>ves))
		cout << "Nocturno" << endl;
}
/*
Codifique una función que permita el ingreso de la cantidad de alumnos que están cursando alguna materia de 5to., 
y luego, llame a la función recursiva Distinguidos(cantidad), 
la cual debe encargarse de leer los datos de materias cursadas/aprobadas/promedio de cada alumno y 
retornar la cantidad de alumnos que: 	
- tienen 20 ó más materias cursadas y 
- tienen más del 80% aprobadas
*/
void Alumnos5to(){
	int cantidad;
	cout << "Ingrese la cant de alumnos que cursa materia de 5to Anio: ";
	cin >> cantidad;
	cout << "Cantidad de alumnos que tienen 20 o + mat cursadas y mas del 80 por ciento aprobadas: " << Distinguidos(cantidad);
}
int Distinguidos(int cantidad){
	int cursadas,aprobadas,promedio;
	
	if(cantidad==0)
		return 0;
	else{
		cout << "Ingrese cantidad materias Cursadas: "; cin >> cursadas;
		cout << "Ingrese cantidad materias Aprobadas: "; cin >> aprobadas;
		cout << "Ingrese Promedio: "; cin >> promedio;
		return ((cursadas>=20) and (aprobadas/(float) cursadas*100>80)) + Distinguidos(cantidad-1);
	}	
}

	
	
	
	
	
	
	
		
