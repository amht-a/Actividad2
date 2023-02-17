#include<iostream>
#include <string>
using namespace std;
int main()
{
    string esp = " ";
    int npal = 0;
    cout << "Ingrese cadena " << endl;
 
    getline(cin >> ws, esp);
 
    for (int i = 0; i < esp.length(); i++) {
        if ((esp[i] == ' ' && esp[i + 1] != ' ')) {
            npal = npal + 1;
        }
    }
    if (npal<1){
    cout << "Hay " << npal+1 << " palabra " << endl;
    }
    else{
    cout << "Hay " << npal+1 << " palabras " << endl;
    }
    return 0;
}