#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    cout << "Adivina el numero entre 0 y 100\n";
    int num = rand() % 101;
    int intento;
    do{
        cin >> intento;
        if (intento > num)
        {
            cout << "El numero es menor que " << intento << "\n";
        }
        if (intento < num)
        {
            cout << "El numero es mayor que " << intento << "\n";
        }
    } while (intento != num);
    cout << "Felicidades, haz acertado  el numero.";
}