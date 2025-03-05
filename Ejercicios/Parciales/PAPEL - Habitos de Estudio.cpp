#include <iostream>
#include <iomanip>
using namespace std;

bool obtenerDatosAlumno(int &edad,int &anioCarrera, char &carrera, int &contM, int &contV, int &contN){
	char horarioEstudio;
	cout << "Ingrese edad: ";
	if(cin >> edad){
		cout << "Anio de la carrera: ";
		cin >>anioCarrera;
		cout << "Carrera: ";
		cin >> carrera;
		
		do{
			cout << "Ingrese horario de estudio, digite f para terminar ";
			cin >> horarioEstudio;
			if(horarioEstudio == 'M') contM++;
			else if(horarioEstudio == 'V')contV++;
			else if(horarioEstudio == 'N')contN++;
		} while(horarioEstudio != 'f');
		return true;
	}
	return false;
}

void turnoMasElegido(int contM, int contV, int contN){
	if(contM > contV and contM > contN){
		cout << "Matutino"<< endl;
	}else if(contV > contM and contV > contN){
		cout << "Vespertino" << endl;
	}
	else if(contN > contM  and contN > contV){
		cout << "Nocturno"<<endl;
	}
}

int Distinguidos(int cantidad){
	int cursadas, aprobadas;
	float promedio;
	if (cantidad == 0) return 0;
	cin >> cursadas >> aprobadas >> promedio;
	if(cursadas >= 20 and (aprobadas/cursadas)*100 > 80) return 1+Distinguidos(cantidad-1);
	return Distinguidos(cantidad-1);
}
void itemB(){
	int alumnos5to;
	cin >> alumnos5to;
	cout << Distinguidos(alumnos5to);
}


int main(int argc, char *argv[]) {
	int edad, anioCarrera, contM=0,contV=0,contN=0,edadMayor=0;
	char carrera;
	int contAlumnosPrimero=0, contDia=0,contMaux=0,contVaux=0,contNaux=0;
	while(obtenerDatosAlumno(edad,anioCarrera,carrera,contM,contV,contN)){
		
		if(anioCarrera == 1){
			contAlumnosPrimero++;
			contDia+= contM+contV+contN;
		}
		if(anioCarrera >= 3 and carrera == 'S'){
			if(contM > 0) contMaux+=contM;
			if(contV > 0) contVaux+=contV;
			if(contN > 0) contNaux+=contN;
		}
		if(edad > edadMayor) edadMayor = edad;
		contM = 0; contN = 0; contV = 0;
	}
	
	float promedioP = (float) contDia/contAlumnosPrimero;
	cout << "Promedio=" << fixed << setprecision(2) << promedioP<<" dias a la semana" << endl;
	cout << "Turno mas elegido=";
	turnoMasElegido(contMaux,contVaux,contNaux);
	cout << "Edad alumno mayor = " << edadMayor<< endl;
	
	
	cout << "Digite cantidad de alumnos de 5to " << endl;
	itemB();
	return 0;
}

