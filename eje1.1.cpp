#include <iostream>
using namespace std;

int main() {
    float lado1=0.0f,lado2=0.0f, area=0.0f,perimetro=0.0f;
    cout<<"Ingrese la base del rectangulo "<<endl;
    cin>>lado1;
    cout<<"Ingrese la altura rectangulo "<<endl;
    cin>>lado2;
    area=lado1*lado2;
    perimetro=2*lado1+2*lado2;
    cout<<"El area del rectangulo es :"<<area<<endl;
    cout<<"El perimetro del rectangulo es :"<<perimetro<<endl;
    return 0;
    
}