#include <iostream>
 
using namespace std;
 
const int MAX_ALUMNOS = 100;
const int MAX_CALIF = 10;
 
int main() {
    int notas[MAX_ALUMNOS][MAX_CALIF];
    int i,j,na,nc;
    float calif,prom,suma;
 
    cout << "Numero de alumnos: ";
    cin >> na;
    cout << "Numero de calificaciones: ";
    cin >> nc;
 
    for (i=0; i<na; i++) {
        cout << "\nAlumno # " << i+1 << ": " << endl;
 
        for (j=0; j<nc; j++) {
            cout << "Calificacion # " << j+1 << ": ";
            cin >> notas[i][j];
        }
 
    }
 

    cout << endl;
    for (i=0; i<na; i++) {
        suma = 0;
 
        for (j=0; j<nc; j++)
            suma = suma + notas[i][j];
 
        prom = suma / nc;
        cout << "El promedio del alumno es " << prom << '\n';
  }
 
    return 0;
}