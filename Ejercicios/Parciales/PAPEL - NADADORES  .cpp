#include <iostream>
using namespace std;

void leerDatos(int &contF, double &prom1, double &prom2, double &prom3, int &contP3){
	char sexo;
	int edad, contprueb1 = 0, contprueb2=0, contprueb3 = 0;
	bool p1,p2,p3;
	double ms1=0,ms2=0,ms3=0;
	int edadP1=0, edadP2=0, edadP3=0;
	
	for(int i = 0 ; i < 3 ;  i++){
		cout << "Digite sexo ";
		cin >> sexo;
		cout << "Digite edad ";
		cin >> edad;
		cout << "Participo en P1? (1=si, 0=no) ";
		cin >> p1;
		if(p1 == true){
			cout << " Tiempo alcanzado(en ms): ";
			cin >> ms1;
			contprueb1++;
		}
		cout << "Participo en P2? (1=si, 0=no) ";
		cin >> p2;
		if(p2 == true){
			cout << " Tiempo alcanzado(en ms): ";
			cin >> ms2;
			contprueb2++;
		}
		cout << "Participo en P3? (1=si, 0=no) ";
		cin >> p3;
		if(p3 == true){
			cout << " Tiempo alcanzado(en ms): ";
			cin >> ms3;
			contprueb3++;
			contP3++;
		}
		if(sexo == 'f' and p1==true and p2==true and p3==true)contF++;
		
		if(p1==true) edadP1+=edad;
		if(p2==true) edadP2+=edad;
		if(p3==true) edadP3+=edad;
	}
	prom1= (double)edadP1/contprueb1;
	prom2= (double)edadP2/contprueb2;
	prom3= (double)edadP3/contprueb3;
}

bool hayArgentinos(int contP){
	bool nacArg;
	for(int i = 1 ; i <= contP ; i++){
		cin >> nacArg;
		if (nacArg == true) return true;
	}
	return false;
}


int main(int argc, char *argv[]) {
	int contF=0, contP3=0;
	double prom1,prom2,prom3;
	leerDatos(contF,prom1,prom2,prom3,contP3);
	
	cout << "Cantidad de nadadoras que participaron de las 3 pruebas: " << contF << endl;
	cout << "Promedio de edad de participantes de prueba 1: " << prom1 << endl;
	cout << "Promedio de edad de participantes de prueba 2: " << prom2 << endl;
	cout << "Promedio de edad de participantes de prueba 3: " << prom3 << endl;
	
	bool ok = hayArgentinos(contP3);
	ok? cout << "Hay argentinos" : cout << "No hay argentinos" << endl;
	
	return 0;
}

