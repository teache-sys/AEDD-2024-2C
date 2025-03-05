#include <iostream>
using namespace std;

void comboString(string c1,string c2, string &p){
	if(c1.size() > c2.size()){
		p += c2;
		p += c1;
		p += c2;
	}else{
		p += c1;
		p += c2;
		p += c1;
	}
}


int main(int argc, char *argv[]) {
	string c1, c2;
	string p;
	cin >> c1;
	cin >> c2;
	
	comboString(c1,c2,p);
	cout << p  << endl;
	
	return 0;
}

