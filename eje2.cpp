#include <iostream>
 
using namespace std;

void ordenar(int v[], int sz);

int main()
{
    int v[] = {15, 24, 2, 3, 11}; 
    cout << "15, 24, 2, 3, 11\n" ;
    ordenar(v, 5);
 
    for (int i = 0; i < 5; i++)
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


 
