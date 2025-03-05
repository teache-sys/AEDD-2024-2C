#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char arr [100];
	int n;
	cin >> n;
	for(int i = 0; i < n ; i++){
		cin >> arr[i];
	}
	bool encontrado;
	for(int i = 0; i < n ; i++){
		if(arr[i] == 'X' and encontrado == false){
			cout << i << endl;
			encontrado = true;
		}
	}
	if(!encontrado){
		cout << "no encontrado " << endl;
	}
	
	
	return 0;
}

