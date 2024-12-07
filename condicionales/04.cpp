#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double practica1, practica2, practica3, promedioFinal;

    cout << "Ingrese la Nota de la Práctica 1: ";
    cin >> practica1;

    cout << "Ingrese la Nota de la Práctica 2: ";
    cin >> practica2;

    cout << "Ingrese la Nota de la Práctica 3: ";
    cin >> practica3;

    if (practica3 >= 10) {
        practica3 += 2;
        
    }
    promedioFinal = (practica1 + practica2 + practica3) / 3;

    cout << fixed << setprecision(2);
    cout << "Promedio Final: " << promedioFinal << endl;

    return 0;
}
