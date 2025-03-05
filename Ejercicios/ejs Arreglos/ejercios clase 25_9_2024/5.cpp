#include <iostream>
using namespace std;
#define tf 100
int main(int argc, char *argv[]) {
	int n, contador=0, min, maximo;
	int arr1[tf];
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		cin >> arr1[i];
	}
	cin >> min >> maximo;
	for (int i = 0 ; i < n ; i++){
		if(arr1[i] >= min and arr1[i] <= maximo){
			contador++;
		}
	}
	cout << contador ;
	return 0;
}
