#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int numero;
	bool todosDistintos = true;
	cin >> numero;
	int auxiliar;
	while(numero > 0 and todosDistintos){
		int digitoParado = numero % 10;
		auxiliar = numero / 10;
		while(auxiliar > 0 and todosDistintos){ // comparacion
			int digitoQueLeSigue = auxiliar % 10;
			if(digitoQueLeSigue == digitoParado){
				todosDistintos = false;
			}
			auxiliar/=10;
		}
		numero/=10;
	}
	if(todosDistintos ==  true){
		cout << " todos distintos" << endl;
	}else{
		cout << " hay repetidos" << endl;
	}
	
	return 0;
}

	
	
	
    ///EJERCICIOS///
	///ESTOS EJERCICIOS SIRVEN PARA SABER Y ENTENDER
	/// ALGORITMOS QUE SUELEN PEDIR EN PARCIALES 
	///MUCHOS EJS DE PARCIALES SE BASAN EN ALGUNOS DE ESTOS ALGORITMOS CON DETALLES QUE MODIFICAN UN POCO EL PARCIAL
	
/* eliminar los últimos N dígitos :
int n, numeroUsuario;
int cont=0;
cin >> numeroUsuario;
cin >> n;
int aux= numeroUsuario;
cont=0;
while(n>cont){
aux/=10;
cont++;
}
cout<< aux;

*/

/* determinar si un número es curioso:
	int n, cont = 0,ultimacifra,cifras = 0;
	cin >> n; 
	int aux=n;
	while(aux>0){
	aux/=10;
	cont++;
	}
	aux=n;
	cout << cont<< endl;
	int resultado = n*n;
	cout << resultado<< endl; 
	for(int i = 0; i<cont;i++){
	ultimacifra= resultado%10;
	cifras+=ultimacifra*pow(10,i);
	resultado/=10;
	}
	if(cifras == n) cout<< "el numero es curioso";
	else cout<< "el numero no es curioso";
	
	*/
	
	
/*  calcular los primeros N números curiosos:
	int n, ultimacifra,cifras=0;
	int contador = 0, cont = 0;
	int i = 1;
 	cin >> n;
	int aux = i;
	
	while(contador < n){
	     cont = 0;
	     while(aux > 0){
	     aux /= 10;
	     cont++;
	     }
	//cout <<"el numero "<<i<<" tiene "<<cont<< " cifra/s"<< endl;
	aux = i;
	int resultado = i * i;
	cifras = 0;
	for(int j = 0; j < cont; j++){
	ultimacifra = resultado % 10;
	cifras += ultimacifra * pow(10, j);
	resultado /= 10;
	}
	if(cifras == i){
	cout << cifras << " es un numero curioso" << endl;
	contador++;
	}
	
	i++;
	}
*/
	
	

/* Ingresar una secuencia de numeros mientras sean distintos de -10 y 
calcular el mayor y el menor:
	int numero, mayor = 0, menor;
	do{
	cin >> numero;
	if(numero > mayor) mayor = numero;
	if(numero < menor && numero != -10) menor = numero;
	} while(numero != -10);
	
	cout << mayor << endl ;
	cout<< menor <<endl;
*/

	
/* verificar si un número es primo:
	int n, i = 2;
	bool esPrimo = true;
	cin >> n;
	while(i < n and esPrimo){
	if(n % i == 0){
	esPrimo = false;
	}
	i++;
	}
	esPrimo? cout << n << " Es primo"<< endl : cout << n << " No es primo" << endl;
*/
	
	
	
/*	 cálculos los primeros n primos>
	
	int n, contadorP = 0;
	bool esPrimo = true;
	cin >> n;
	int dividendo =  3, divisor = 2;
	while(contadorP < n){
		divisor = 2;
		esPrimo = true;
		while(divisor < dividendo && esPrimo){
			if(dividendo % divisor == 0){
				esPrimo = false;
				
			}
			else if(dividendo % divisor != 0){
				esPrimo = true;
				divisor++;
			}
		}
		if(esPrimo == true){
			cout << dividendo << " es primo " << endl;
			contadorP++;
		}
		dividendo++;
	}
*/	

/*  verificar si todos los dígitos de un número son distintos
int numero;
bool todosDistintos = true;
cin >> numero;
int auxiliar;
while(numero > 0 and todosDistintos){
int digitoParado = numero % 10;
auxiliar = numero / 10;
while(auxiliar > 0 and todosDistintos){ // comparacion
int digitoQueLeSigue = auxiliar % 10;
if(digitoQueLeSigue == digitoParado){
todosDistintos = false;
}
auxiliar/=10;
}
numero/=10;
}
if(todosDistintos ==  true){
cout << " todos distintos" << endl;
}else{
cout << " hay repetidos" << endl;
}

*/
