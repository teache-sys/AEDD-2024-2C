#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float n1= 3.1415926, n2 = 0.12345;
	
	float * pnum;
	
	pnum = &n1; // direccion a p1
	cout <<*pnum << endl;


	
	cout << endl << "el valor de n2 es " << n2;
	cout << endl;
	n2 = *pnum;
	cout << "ahora el valor de n2 es: " <<n2;
	cout << endl;
	
	cout <<"direccion de pnum " << pnum;
	cout << endl;
	cout << "direccion de n2 " << &n2 ;
	
	
	return 0;
}

