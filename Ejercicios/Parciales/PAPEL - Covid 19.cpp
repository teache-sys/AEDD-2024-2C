#include <iostream>
#include <cstdlib>
using namespace std;

int conviveAlMenos3(int contMenor){
	int personas;
	if(contMenor == 0) return 0;
	else{
		cout << "Indique con cuantas personas vive: " ;
		cin >> personas;
		if(personas >= 3)return 1+conviveAlMenos3(contMenor-1);
		else return conviveAlMenos3(contMenor-1);
	}
}





int main(int argc, char *argv[]) {
	int c = 25+rand()%151, edad, contM=0, contF=0, contMay=0,contV=0, contMenor=0;
	char sexo;
	float tempC;
	bool vacunado;
	cout << "El numero de personas es: " << c<<endl;
	
	for(int i = 1 ; i <= c ; i++){
		cout << "Ingrese sexo: " ;cin >> sexo;cout << endl;
		cout << "Ingrese edad: " ;cin >> edad;cout << endl;
		cout << "Ingrese temperatura corporal: " ;cin >> tempC;cout << endl;
		cout << "Ingrese si fue vacunado (1 para si, 0 para no): " ;
		cin >> vacunado;cout << endl;
		
		if(sexo == 'm' and tempC > 37.0){contM++;}
		if(sexo == 'f' and tempC > 37.0){contF++;}
		if(edad > 60 and vacunado == true){contMay++;}
		if(vacunado == true){contV++;}
		if(edad < 18){contMenor++;}
		
	}
	cout << "la cantidad de mayores vacunados son: " << contMay<<endl;
	cout << "la cantidad de vacunados son: " << contV<<endl;
	float porcentaje = (contMay*100)/contV;
	
	cout << "Los hombres con mas de 37 grados son: " << contM << endl;
	cout << "Las mujeres con mas de 37 grados son: " << contF << endl;
	cout << "De todos los vacunados, el " << porcentaje << "% son personas de riesgo"<<endl;
	
	
	cout << " Para menores de 18 anios " << endl;
	cout << conviveAlMenos3(contMenor)<< endl;
	return 0;
}

