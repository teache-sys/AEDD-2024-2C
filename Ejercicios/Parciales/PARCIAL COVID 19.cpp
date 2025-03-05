#include <iostream>
#include <cstdlib>
using namespace std;

void leerDatos(int &contM, int &contF, int &contP, int &c, int &cantidad){
	int edad;
	float tc;
	char sexo;
	bool vacunado;
	c = 4+rand()%5; contM=0; contF=0; contP=0;
	cout << c << endl;
	for(int i = 1 ; i <= c ; i++){
		cout << "paciente " << i<<endl;
		cout << "indique sexo ";
		cin >> sexo;
		cout << "indique edad ";
		cin >> edad;
		cout << "indique temperatura ";
		cin>> tc;
		cout << "indique si fue vacunado (1 si, 0 no) ";
		cin >> vacunado;
		if(sexo == 'm' and tc > 37){
			contM++;
		}
		if(sexo == 'f' and tc > 37){
			contF++;
		}
		if(edad > 60 and vacunado == true){
			contP++;
		}
		if(edad < 18) {
			cantidad++;
		}
	}
}

int conviveAlmenos3(int cantidad){
	int personas, contador=0;
	if (cantidad == 0){
		return 0;
	}else{
		cin >> personas;
		if(personas >= 3) contador ++;
	}
	return contador+conviveAlmenos3(cantidad-1);
}


int main(int argc, char *argv[]) {
	int contM=0,contF=0,contP=0,c,cantidad=0;
	leerDatos(contM,contF,contP,c,cantidad);
	float prom = (contP/c)*100;
	cout << "Los hombres con mas de 37 grados son: " << contM << endl;
	cout << "Las mujeres con mas de 37 grados son: " << contF << endl;
	cout << "El porcentaje de personas de riesgo vacunadas: "<< prom<< endl;
	cout << conviveAlmenos3(cantidad)<< " menores conviven con 3 personas o mas" << endl;
	return 0;
}

