#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cin >> a >> b;
	int resultadoImpar = 0;
	for(int i = a; i <= b; i++){
		if(i % 2 != 0){
			resultadoImpar+=i;
		}
	}
	cout << resultadoImpar << endl;
	
	
	return 0;
}

