#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int v[10];
	for(int i = 0 ; i < 10 ; i++){
		cin >> v[i];
	}
	for(int j = 0 ; j < 10 ; j++){
		if(v[j] <= 0){
			v[j] = 1;
		}
		cout << "X[" << j << "]" << " = "<< v[j] << endl;
	}
	
	return 0;
}

