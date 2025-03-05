#include <iostream>
#include <cstdlib>
using namespace std;

void leerDatos(int &contM,int &contF, int &contP, int &c, int &contV, int &cantidad){
	c =24+rand()%151;
	char sexo;
	int edad;
	float tc;
	bool vacunado;
	for(int i = 0; i < c; i++){
		cout <<"Ingreso sexo, edad, temp. corp., si lo vacunaron " << endl;
		cin >> sexo >> edad >> tc >> vacunado;
		if(sexo == 'm' and tc > 37.0){
			contM++;
		}
		if(sexo == 'f' and tc > 37.0){
			contF++;
		}
		if(vacunado == true) contV++;
		if(edad > 60 and vacunado == true){
			contP++;
		}
		if(edad < 18){
			cantidad++;
		}
	}
}
int conviveAlMenos3(int cantidad){
	if(cantidad == 0) return 0;
	
	int personas;
	cout << "Indique con cuantas personas convive: " ; 
	cin >> personas;
	if(personas >= 3) return 1+conviveAlMenos3(cantidad-1);
	return conviveAlMenos3(cantidad-1);	
}
int main(int argc, char *argv[]) {
	int contM=0, contF=0, contP=0,contV=0,c, cantidad = 0;
	
	leerDatos(contM,contF,contP,c,contV, cantidad);
	//ya cuento con los nuevos valores de las variables
	float prom = (float)(contP/(float)contV)*100;
	cout << " Los hombres con mas de 37 grados son "<< contM<<endl;
	cout << " Las mujeres con mas de 37 grados son "<< contF<<endl;
	cout << " El porcentaje de PR es " << (float) prom << endl;
	
	cout << "Hay " << cantidad << " menores de 18" << endl;
	cout << conviveAlMenos3(cantidad) << " menores coniven con 3 personas o mas " << endl;
	
	return 0;
}

