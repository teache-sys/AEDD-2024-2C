#include <iostream>
using namespace std;
#define tf 100
int main(int argc, char *argv[]) {
	int n;
	int arr1[tf];
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		cin >> arr1[i];
	}
	for (int i = n-1 ; i >= 0 ; i--){
		cout << arr1[i]*arr1[i] << endl;
	}
	return 0;
}

