#include <iostream>
#include <iomanip>
using namespace std;

void leerDatosTerna(int &x, int &y, float &vProm){
	int altitud, distancia;
	char direccion;
	int alturaInicial = 0,i=0;
	//cin >> altitud;
	
	while(cin >> altitud, altitud != 0){
		cin >> distancia >> direccion;
		
		if(direccion == 'N' ) y+=distancia;
		else if(direccion == 'S') y-=distancia;
		
		
		if(direccion == 'E') x+= distancia;
		else if(direccion == 'O') x-=distancia;
		
		if(i == 0) alturaInicial = altitud;
		i++;
		//cin >> altitud;
	}
	cin >> distancia>> direccion;
	if(direccion == 'N' ) y+=distancia;
	else if(direccion == 'S') y-=distancia;
	if(direccion == 'E') x+= distancia;
	else if(direccion == 'O') x-=distancia;
	i++;
	
	vProm = (float) alturaInicial / i;
}

int movimientos(int x, int y){
	if(x == 0 and y == 0){
		return 0;
	}else{
		if(x == 0) return 1+movimientos(x,y-1);
		if(y == 0) return 1+movimientos(x-1,y);
	}
	return 1+movimientos(x-1,y-1);
}

int main(int argc, char *argv[]) {
	int x=0, y=0;
	float vProm;
	leerDatosTerna(x,y,vProm);
	
	cout << "Velocidad promedio: " <<fixed<<setprecision(2)<< vProm << endl;
	cout << "Posicion final: " << x <<","<<y<<endl;
	
	int x1, y1;
	
	cout << "digite coordenadas " << endl;
	cin >> x1 >> y1;
	cout << "Necesita " << movimientos(x1,y1) << " pasos para llegar a (0,0)"<< endl;
	
	return 0;
}

