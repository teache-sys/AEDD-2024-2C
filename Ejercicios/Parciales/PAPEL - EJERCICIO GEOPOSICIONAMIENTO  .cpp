#include <iostream>
#include <cmath>
using namespace std;

double distancia (int xo, int yo, int xd, int yd, int x1, int y1, int x2,int y2){
	return (double) sqrt((pow(x1-xo,2)+pow(y1-yo,2))+(pow(x2-x1,2)+pow(y2-y1,2))+(pow(xd-x2,2)+pow(yd-y2,2)));
}

bool caminoMasCorto(int xo, int yo, int yd, int xd, int x1, int y1, int x2, int y2, int x1c2,int y1c2, int x2c2,int y2c2){
	double distC1 = distancia(xo,yo,xd,yd,x1,y1,x2,y2);
	double distC2 = distancia(xo,yo,xd,yd,x1c2,y1c2,x2c2,y2c2);
	
	if(distC1 < distC2){
		return true;
	}
		return false;
}

void norteOsur(int y1, int y2){
	int n=0,s=0;
	while(y1 != y2){
		if(y1 < y2){
			n++;
			y1++;
		}
		else if(y1 > y2){
			s++;
			y1--;
		}
	}
	if(n > 0){
		cout << "NORTE ("<< n << ")" << endl;
	}else if(s > 0) cout << "SUR ("<< s << ")" << endl;
}

void EsteuOeste(int x1, int x2){
	int e = 0, o = 0;
	while(x1 != x2){
		if(x1 < x2){
			e++;
			x1++;
		}
		else if(x1 > x2){
			x1--;
			o++;
		}
	}
	if(e > 0){
		cout << "ESTE ("<< e << ")" << endl;
	}else if(o > 0) cout << "OESTE ("<< o << ")" << endl;
}

int main(int argc, char *argv[]) {
	int xo,yo,xd,yd,x1,y1,x2,y2,x1c2,x2c2,y1c2,y2c2;
	int xp1,xp2,yp1,yp2;
	cout << "INGRESE ORGIEN " << endl;
	cin >> xo >> yo;
	cout << "INGRESE DESTINO " << endl;
	cin >> xd >> yd;
	cout << "INGRESE C1" << endl;
	cin >> x1 >> y1 >> x2>> y2;
	cout << "INGRESE C2" << endl;
	cin >> x1c2 >> y1c2 >> x2c2 >> y2c2;
	
	if(caminoMasCorto(xo,yo,yd,xd,x1,y1,x2,y2,x1c2,y1c2,x2c2,y2c2) == true){
		xp1 = x1;
		yp1 = y1;
		xp2 = x2;
		yp2 = y2;
	}else{
		xp1 = x1c2;
		yp1 = y1c2;
		xp2 = x2c2;
		yp2 = y2c2;
	}
	
	norteOsur(yo,yp1);
	EsteuOeste(xo,xp1);
	   
	norteOsur(yp1,yp2);
	EsteuOeste(xp1,xp2);   
	
	norteOsur(yp2,yd);
	EsteuOeste(xp2,xd);
	return 0;
}

