#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int arr[10]= {0,1,2,3,4,5,6,7,8,9};
	int *ptr = arr;
	for(int i = 0; i < 10 ;i++){
		cout << *ptr << " ";
		ptr++;
	}
	return 0;
}

