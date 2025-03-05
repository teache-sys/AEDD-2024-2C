#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cin >> a >> b;
	long long resultadoImpar = 0;
	if(a % 2 == 0){
		a++;
	}
	for(int i = a; i <= b; i+=2){
			resultadoImpar+=i;
	}
	cout << resultadoImpar << endl;
	
	
	return 0;
}
