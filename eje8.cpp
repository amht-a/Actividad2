#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int num1, num2, op;
	double resultado;
	
	cout << "Este programa te resuelve una operacion aritmetica sencilla(suma, resta, division, multiplicacion)\n\n";
	cout << "Ingrese un numero: ";
	cin >> num1;
	cout << "Ingrese un numero: ";
	cin >> num2;
	
	cout << "Que desea hacer?\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n";
	cin >> op;
	
	switch(op){
		case 1:{
			resultado = num1+num2; 
			break;
		}
		case 2:{
			resultado = num1-num2; 
			break;
		}
		case 3:{
			resultado = num1*num2; 
			break;
		}
		case 4:{
			resultado = num1/num2; 
			break;
		}
	}
	
	cout << "El resultado es: " << resultado;
	
}