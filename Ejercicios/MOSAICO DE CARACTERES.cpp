#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cin >> numero;
	
		for(int j = 1 ; j <= numero ; j++){
			if(j % 2 != 0){
				cout << "-"; 
			}else{
				cout << "#";
			}
		}
		cout << endl;
		for(int j = 1 ; j <= numero ; j++){
			if(j % 2 != 0){
				cout << "#";
			}else{
				cout << "-"; 
			}
		}
		
		
		
	return 0;
}

