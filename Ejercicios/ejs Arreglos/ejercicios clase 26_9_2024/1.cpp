#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int arr[100];
	int n;
	cin >> n;
	for(int i = 0; i < n ; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n/2 ; i++){
		cout << "suma = " << arr[i]+arr[n-1-i] << " ";
	}
	if(n%2 != 0){
		cout << arr[n/2];
	}
	return 0;
}

