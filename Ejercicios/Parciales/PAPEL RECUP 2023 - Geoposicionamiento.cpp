#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double distancia(int x1, int y1, int x2,int y2){
	int restaX= x2-x1;
	int restaY= y2-y1;
	return sqrt((restaX*restaX)+(restaY*restaY));
}
	
void caminoMasCorto(int xPO, int yPO, int xp1,int yp1,int xp2,int yp2, 
		int xp1c2,int yp1c2,int xp2c2,int yp2c2,int xPD, int yPD){
	
	int distanciaC1= distancia(xPO,yPO,xp1,yp1)
		+distancia(xp1,yp1,xp2,yp2)+
		distancia(xp2,yp2,xPD,yPD);
	int distanciaC2= distancia(xPO,yPO,xp1c2,yp1c2)
		+distancia(xp1c2,yp1c2,xp2c2,yp2c2)+
		distancia(xp2c2,yp2c2,xPD,yPD);
	
	
	if(distanciaC1 < distanciaC2){
		int restaX=xp1-xPO;
		int restaY=yp1-yPO;
		
		if(yPO > yp1){
			cout << "SUR ("<< abs(restaY) << ")"<<endl;
		}else if(yPO < yp1){
			cout << "NORTE ("<< abs(restaY) << ")"<<endl;
		}
		if(xPO > xp1){
			cout << "OESTE ("<< abs(restaX) << ")"<<endl;
		}else if(yPO < yp1){
			cout << "ESTE ("<< abs(restaX) << ")"<<endl;
		}
	}else {
		int restaXc2=xp1c2-xPO;
		int restaYc2=yp1c2-yPO;
		
		if(yPO > yp1c2){
			cout << "SUR ("<< abs(restaYc2) << ")"<<endl;
		}else if(yPO < yp1c2){
			cout << "NORTE ("<< abs(restaYc2) << ")"<<endl;
		}
		if(xPO > xp1c2){
			cout << "OESTE ("<< abs(restaXc2) << ")"<<endl;
		}else if(yPO < yp1c2){
			cout << "ESTE ("<< abs(restaXc2) << ")"<<endl;
		}
	}
	
	
}
	
	
int main(int argc, char *argv[]) {
	int xPO, yPO,xPD,yPD,xp1,yp1,xp2,yp2,xp1c2,yp1c2,xp2c2,yp2c2;
	
	cout << "INGRESE ORIGEN (x,y) " << endl;
	cin >> xPO >> yPO;
	cout << "INGRESE DESTINO (x,y) " << endl;
	cin >> xPD >> yPD;
	cout << "Ingrese camino 1" << endl;
	cin >> xp1 >> yp1 >> xp2 >> yp2;
	cout << "Ingrese camino 2" << endl;
	cin >> xp1c2 >> yp1c2 >> xp2c2 >> yp2c2;
	
	caminoMasCorto(xPO, yPO, xp1,yp1,xp2,yp2,xp1c2,yp1c2,xp2c2,yp2c2,xPD,yPD);
	
	
	return 0;
}

