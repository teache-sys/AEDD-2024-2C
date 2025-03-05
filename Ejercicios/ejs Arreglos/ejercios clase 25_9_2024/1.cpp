#include <iostream>
using namespace std;
#define tf 100
int main(int argc, char *argv[]) {
	int n, mayor=0;
	int arr[tf];
	cin >> n; 
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	for (int i = 0 ; i < n ; i++){
		if(arr[i] > mayor){
			mayor= arr[i];
		}
	}
	cout << mayor << endl;
	return 0;
}

