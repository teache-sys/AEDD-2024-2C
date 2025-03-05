#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	double matriz[12][12];
	int n;
	char s;
	cin >> n;
	cin >> s;
	for(int i=0; i < 12; i++){
		for(int j=0; j < 12; j++){
			cin >> matriz[i][j];
		}
	}
	
	double prom=0.0;

	for(int j=0; j<12; j++){
			prom+=matriz[n][j];
	}
	if(s== 'M'){
		prom/=12.0;
		cout <<fixed<< setprecision(1)<< prom << endl;
	}
	if(s == 'S'){
		cout <<fixed<< setprecision(1)<< prom << endl;
	}
	
	return 0;
}

