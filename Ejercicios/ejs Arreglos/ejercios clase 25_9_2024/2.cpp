#include <iostream>
using namespace std;
#define tf 1000
int main(int argc, char *argv[]) {
	int n, k;
	int arr[tf];
	cin >> n ;
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	cin >> k;
	for (int i = 0 ; i < n-k ; i++){
		cout << arr[i]<< " ";
	}
	return 0;
}

