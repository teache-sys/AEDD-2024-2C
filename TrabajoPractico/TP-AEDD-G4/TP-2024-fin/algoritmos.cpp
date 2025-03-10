#include "algoritmos.h"
#include "gotoxy.h"
#include <iostream>
#include <cstdlib>
using namespace std;

string binarioR(int n){
	string s;
	if(n==1)
		s='1';
	else if(n==0)
		s='0';
	else{
		if(n%2==0)
			s = binarioR(n/2) + '0';
		else
			s= binarioR(n/2) + '1';
	}
	return s;
}
string binarioI(int n){
	string s;
	while(n!=0){
		if(n%2==0)
			s = '0' + s;
		else
			s = '1' + s;
		n=n/2;
	}
	return s;
}
int ConjeturaR(int n, int& ma){
	int s;
	if(n==1){
		s=0;
	}else{
		if(n%2==0){
			s=ConjeturaR(n/2,ma)+1;
		}
		else{
			n=n*3+1;
			if(n>ma)
				ma=n;
			s=ConjeturaR(n,ma)+1;
		}
	}
	return s;
}
int ConjeturaI(int n, int& ma){
	int s=0;
	while(n!=1){
		s++;
		if(n%2==0){
			n=n/2;
		}else{
			n=n*3+1;
			if(n>ma)
				ma=n;
		}
	}
	return s;
}
void Texto_Decimal_Binario(){
	gotoxy(33,5);
	cout<<"CONVERSION DE DECIMAL A BINARIO";
	gotoxy(3,7);
	cout<<"Para facilitar su diseño y estructura, las computadoras utilizan el sistema binario para";
	gotoxy(3,8);
	cout<<"representar n"<<(char)(163)<<"meros enteros positivos que son mayores que 0.Para poder hacer la conversion";
	gotoxy(3,9);
	cout<<"de un numero n,seguiremos una serie de pasos los cuales nos permitiran realizar esta ultima:";
	gotoxy(5,11);
	cout<<"1) Se realiza la division entera de n sobre 2.";
	gotoxy(5,12);
	cout<<"2) Se anota el residuo de la division anterior.";
	gotoxy(5,13);
	cout<<"3) Se repite lo anterior con  n = n/2 desde el paso 1 hasta llegar a n = 0.";
	gotoxy(5,14);
	cout<<"4) Se escribe el numero desde el ultimo residuo obtenido hasta el primer residuo.\n";
	gotoxy(3,16);
	cout<<"Como siempre la division entera por 2 te devuelve un residuo de valor 0 o 1, la conjuncion";
	gotoxy(3,17);
	cout<<"de estos residuos del ultimo al primero, sera una serie de 0s y 1s que forman al mismo numero";
	gotoxy(3,18);
	cout<<"pero convertido en binario.";
}
void Texto_Conjetura(){
	gotoxy(34,5);
	cout<<"CONJETURA DE COLLATZ";
	gotoxy(3,7);
	cout<<"Tambien conocida como conjetura 3n+1 fue definida por el matematico Lothar Collatz en 1937";
	gotoxy(3,8);
	cout<<"y que, hasta la fecha , no ha sido resuelta.";
	gotoxy(3,9);
	cout<<"Esta conjetura esta enunciada por la siguiente operacion, para cualquier numero entero positivo:";
	gotoxy(5,11);
	cout<<"1) Si el numero es par, se divide entre 2.";
	gotoxy(5,12);
	cout<<"2) Si el numero es impar, se multiplica por 3 y se le suma 1.";
	gotoxy(5,13);
	cout<<"3) Se repite lo anterior con  n = n/2 desde el paso 1 hasta llegar a n = 0.";
	gotoxy(5,14);
	cout<<"4) Se escribe el numero desde el ultimo residuo obtenido hasta el primer residuo.\n";
	gotoxy(3,16);
	cout<<"Si aplicamos esta operacion de manera repetida, estariamos formando una sucesion,";
	gotoxy(3,17);
	cout<<"comenzando por cualquier numero entero y tomando cada resultado de cada paso como la entrada del siguiente.";
	gotoxy(3,18);
	cout<<"Un ejemplo resumido seria si el numero n = 6, aqui la sucesion tiene 8 pasos llegando a la siguiente sucesion :";
	gotoxy(33,20);
	cout<<"6, 3, 10, 5, 16, 8, 4, 2, 1, 4, 2, 1...";
	gotoxy(3,22);
	cout<<"Para numeros tales como el 27, por ejemplo, la sucesion tiene 111 pasos antes de llegar a 1.";

}
