#include <iostream>
#include <iomanip>
using namespace std;

bool obtenerDatosAlumno(int &edad, int &anio, char &carrera, char &horario, 
						 int &cantM, int &cantV, int &cantN){
	if (not (cin>>edad)) return false;
	else {
		cin >> anio >> carrera >> horario;
		
		while (horario !='f'){
			switch (horario) {
				case 'M': cantM++; break;
				case 'V': cantV++; break;
				case 'N': cantN++; break; 
			}
			cin >> horario;
		}
		return true;
	}
}
	
int Distinguidos(int cantidad){
	if (cantidad==0)
		return 0;
	else {
		int cursadas, aprobadas;
		float promedio;
		cin >> cursadas >> aprobadas >> promedio;
		
		if (cursadas>=20 and (aprobadas/float(cursadas) >= 0.8) )
			return 1 + Distinguidos(cantidad-1);
		else
			return Distinguidos(cantidad-1);
	} 		
}

void itemB(){
	int cantidad;
	cin >> cantidad;
	cout << Distinguidos(cantidad) << endl;
	
}

int main(int argc, char *argv[]) {
	int edad, anio;
	char carrera, horario;
	
	int cantM=0, cantV=0, cantN=0, edadMayor=0;
	int totalM=0, totalV=0, totalN=0, totalDias=0, cantPrimero=0;
	
	while (obtenerDatosAlumno(edad, anio, carrera, horario, cantM, cantV, cantN)){
		// promedio dias por semana alumnos de primer anio
		if (anio==1){ 
			totalDias=totalDias+cantM+cantV+cantN;
			cantPrimero++;
		}
		else 
			if (anio>=3 and carrera=='S'){ // turno mas elegido alumnos avanzados sistemas
				switch (horario) {
					case 'M': totalM=totalM+cantM; break;
					case 'V': totalV=totalV+cantV; break;
					case 'N': totalN=totalN+cantN; 
				}
		}
		
		if (edad>edadMayor) // edad del alumno de UTN Santa Fe mas grande
			edadMayor=edad;		
			
		cantM=cantN=cantV=0;
	}
	
	// Muestra resultados
	cout << fixed << setprecision(2);
	cout << "Promedio de alumnos de primer anio= " << totalDias/float(cantPrimero) << " dias por semana" << endl;
	
	// en la comision C se dijo que habia un mayor absoluto
	if (totalM>totalV and totalM>totalN)
		cout << "Turno mas elegido= Matutino" << endl;
	else
		if (totalV>totalN)
			cout << "Turno mas elegido= Vespertino" << endl;
		else 
			cout << "Turno mas elegido= Nocturno" << endl;
	
	cout << "Edad alumno mayor= " << edadMayor << endl;
	
	return 0;
}

