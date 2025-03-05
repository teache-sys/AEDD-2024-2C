#include <iostream>
#include <string>
using namespace std;

bool palindroma(string palabra){
	for(unsigned i = 0 ;  i < palabra.size() ; i++){
		if(palabra[i] == ' '){
			palabra.erase(i,1);
		}
	}
	string cad2;	
	
	for(int i = palabra.size()-1 ;  i >= 0; i--){
		cad2 += palabra[i];
	}
	
	for(unsigned i = 0 ;  i < palabra.size(); i++){
		if(palabra [i] != cad2 [i]){
			return false;
		}
		
	}
	return true;
	
	
}



int main(int argc, char *argv[]) {
	string palabra;
	getline(cin, palabra);
	bool ok = palindroma(palabra);
	ok ? cout << "true" << endl: cout << "false" << endl;
	//cout << palabra << endl;
	return 0;
}

