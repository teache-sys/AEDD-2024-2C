#include <iostream>
#include <windows.h>
using namespace std;

void cuentaRegresiva(int secuencia){
	if(secuencia == 0){
		Sleep(1000);
		cout << "DESPEGUE";
	}else{
		if(secuencia >= 10){
			if(secuencia % 10 == 0){
				
				cout << secuencia << "-";
				Sleep(10000);
			}
			return cuentaRegresiva(secuencia-1);
		}
		if(secuencia < 10){
			Sleep(1000);
			cout << secuencia << "-";
			return cuentaRegresiva(secuencia-1);
		}
	}
}

int main(int argc, char *argv[]) {
	int secuencia;
	cin >> secuencia;
	cuentaRegresiva(secuencia);
	return 0;
}

