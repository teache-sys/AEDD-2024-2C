#include <iostream>
using namespace std;
#define tf 100

int main(int argc, char *argv[]) {
	int n, sumador=0, restador=0;
	int arr1[tf];
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		cin >> arr1[i];
		sumador+= arr1[i];
	
	}
	int  promedio = sumador / n;
	
	for (int i = 0 ; i < n ; i++){
		if(arr1[i] >  promedio){
			restador += arr1[i]-promedio;
		}
		
	}
	cout << restador ;
	
	
	return 0;
}

