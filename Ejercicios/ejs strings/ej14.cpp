#include <iostream>
#include <string>
using namespace std;

bool anagrama(string cad1, string cad2){
	for(unsigned i = 0; i < cad1.size();i++){
		for(unsigned j = 0; j < cad2.size();j++){
			if(cad1[i] == cad2[j]){
				cad2.erase(j,1);
			}
		}
	}
	return cad2.empty();
}


int main(int argc, char *argv[]) {
	string cad1;
	string cad2;
	cin >> cad1;
	cin >> cad2;
	
	bool ok = anagrama(cad1,cad2);
	ok? cout << "ANAGRAMA!":cout << "No :(" << endl;
	return 0;
}

