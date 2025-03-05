#include <iostream>
using namespace std;
#define tf 100
int main(int argc, char *argv[]) {
	int n;
	int arr1[tf], arr2[tf];
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		cin >> arr1[i];
	}
	for (int j = 0 ; j < n ; j++){
		cin >> arr2[j];
	}
	for (int t = 0 ; t < n ; t++){
		cout << arr1[t]+arr2[t] << " " ;
	}
	
	return 0;
}

