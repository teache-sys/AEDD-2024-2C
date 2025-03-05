#include <iostream>
#include <string>
using namespace std;

void  contador(string p){
	int letra = 0 , palabra = 1;
	for(unsigned i = 0 ; i < p.size(); i++){
		if(p[i] == ' '){
			palabra++;
		}
		letra++;
	}
	
	cout << "Palabra: "<<palabra  << endl;
	cout << "Caracteres: "<<letra << endl;
}



int main(int argc, char *argv[]) {
	string p;
	getline(cin, p);
	
	contador(p);
	
	
	
	return 0;
}

