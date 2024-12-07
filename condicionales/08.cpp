#include <iostream>

using namespace std;

int main() {
    int examenesAprobados;

    cout << "Ingrese la cantidad de Exámenes Aprobados: ";
    cin >> examenesAprobados;

    double propinaBase = 20.0;

    double propinaAdicional = examenesAprobados * 5.0;

    double totalPropina = propinaBase + propinaAdicional;

    cout << "Total de Propina: S/. " << totalPropina << endl;

    return 0;
}
