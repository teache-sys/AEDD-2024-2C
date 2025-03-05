#include <iostream>
using namespace std;

void cajeroAutomatico(char accion, int &saldo){
	int montoADepositar, montoARetirar;
		
		if(accion == 'D'){
			cin >> montoADepositar;
			saldo+=montoADepositar;
		}
		if(accion == 'R'){
			cin >> montoARetirar;
			saldo-=montoARetirar;
		}
		if(accion == 'C'){
			cout << "$" << saldo<< endl;
		}

}



int main(int argc, char *argv[]) {
	char accion; 
	int saldo=1000;
	
	do{
		cin >> accion;
		cajeroAutomatico(accion,saldo);
	} while(accion != 'S');

	return 0;
}

