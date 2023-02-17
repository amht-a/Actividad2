
#include <iostream> 
using namespace std; 
#include <stdio.h>

int main(){
	int num[] = {12, 8, 69, 50, 3};
	int mayor, menor;
	mayor = menor = num[0];

	for (int i = 1; i < sizeof(num) / sizeof(num[0]); ++i)
	{
		if (num[i] > mayor) mayor = num[i];
		if (num[i] < menor) menor = num[i];
	}
	cout << "El mayor es " << mayor << "  y el menor es " << menor << endl;
}
  