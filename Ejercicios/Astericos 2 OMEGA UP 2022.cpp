#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	for(int i = 1 ;  i <= n ; i++){ //altura
		for(int j = 1 ; j<=i; j++){
			cout << "*";
		}
		cout<< endl ;
	}
	return 0;
}

