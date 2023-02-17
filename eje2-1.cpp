#include <iostream>
 
using namespace std;

void ordenar(int v[], int sz);

int main()
{
 
    int sz,resultado;
 
    cout << "\nCantidad de numeros a ingresar: ";
    cin >> sz;
 
    int v[sz];
 
    cout << "\nNúmeros:\n";
    for(int i = 0; i < sz; i++) {
        cout << "(" << i + 1 << "/" << sz << "): ";
        cin >> v[i];
    }
    ordenar(v, sz);
 
    for (int i = 0; i < sz; i++)
        cout<<(" %d", v[i])<< ". ";
    

    return 0;


}
void ordenar(int v[], int sz)
{
    int valor;
    int j;
 
    for (int i = 1; i < sz; i++)
    {
        valor = v[i];
        j = i;
        while (j > 0 && valor < v[j-1])
        {
            v[j] = v[j-1];
            j--;
        }
        v[j] = valor;
    }
 }


 
