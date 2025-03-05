#include <iostream>
#include <iomanip>
using namespace std;

void calcularImc(double imc) {
	cout << "El IMC es: " << fixed << setprecision(2) <<imc << endl;
	if (imc >= 30) {
		cout<<"Categoria: Obesidad"<<endl;
		cout<<"Consultar a un medico para un plan de perdida de peso."<<endl;
	}
	else if (imc >= 25){ 
		cout<<"Categoria: Sobrepeso"<<endl;
		cout<<"Sugerir un programa de ejercicio y una dieta balanceada."<<endl;
	}
	else if (imc >= 18.5) { 
		cout<<"Categoria: Peso normal"<<endl;
		cout<<"Mantener un estilo de vida saludable."<<endl;
	}
	else{ 
		cout<<"Categoria: Bajo peso"<<endl;
		cout<<"Consultar a un nutricionista para aumentar el peso."<<endl;
	}
	
}
double procesarCliente(double &pesos, int &contador){
	double peso, altura, imc;
	cin >> peso;
	if(peso == -1){
		return 0;
	}else{
		cin >> altura;
		contador++;
		imc = peso/(altura*altura);
		calcularImc(imc);
		pesos+=peso;
		return procesarCliente(pesos, contador);
	}
}



int main(int argc, char *argv[]) {
	double pesos=0, promedio = 0;
	int contador = 0;
	procesarCliente(pesos, contador);
	
	if(contador > 0){
		promedio = pesos/contador;
	}
	cout<<"Promedio de Peso: "<< fixed << setprecision(2) << promedio << endl;
	
	return 0;
}

