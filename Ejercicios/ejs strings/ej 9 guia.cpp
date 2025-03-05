#include <iostream>
#include <string>
using namespace std;


string Mes(string cadena){
	string c2 =  cadena.substr(0,2);
	
	if(c2 == "01"){
		c2 = "Enero";
	}
	if(c2 == "02"){
		c2 = "Febrero";
	}
	if(c2 == "03"){
		c2 = "Marzo";
	}
	if(c2 == "04"){
		c2 = "Abril";
	}
	if(c2 == "05"){
		c2 = "Mayo";
	}
	if(c2 == "06"){
		c2 = "Junio";
	}
	if(c2 == "07"){
		c2 = "Julio";
	}
	if(c2 == "08"){
		c2 = "Agosto";
	}
	if(c2 == "09"){
		c2 = "Septiembre";
	}
	if(c2 == "10"){
		c2 = "Octubre";
	}
	if(c2 == "11"){
		c2 = "Noviembre";
	}
	if(c2 == "12"){
		c2 = "Diciembre";
	}
	return c2;
}

string formatoFecha(string cadena){
	string fechaCompleta;
	string mes = Mes(cadena); // ya tengo el mes
	string c3 = cadena.substr(2,2); // dia 
	string c4 = cadena.substr(4); //  anio
	if(c3[0] == '0')c3.erase(0,1);
	fechaCompleta = c3 + " de " + mes + " del " + c4;
	return fechaCompleta;
}


int main(int argc, char *argv[]) {
	string cadena;
	getline(cin,cadena);
	
	string c3=formatoFecha(cadena);
	cout << c3;
	return 0;
}

