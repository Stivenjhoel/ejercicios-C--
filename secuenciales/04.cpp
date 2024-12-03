#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int pies, pulgadas;

    cout << "Ingrese la cantidad de pies: ";
    cin >> pies;

    cout << "Ingrese la cantidad de pulgadas: ";
    cin >> pulgadas;

    // Factores de conversión
    const double PULGADAS_A_METROS = 0.0254;
    const double PIES_A_METROS = 0.3048;

    // Cálculo de la estatura en metros
    double estaturaMetros = (pies * PIES_A_METROS) + (pulgadas * PULGADAS_A_METROS);

    // Mostrar resultado
    cout << fixed << setprecision(2);
    cout << "Estatura total en metros: " << estaturaMetros << " m" << endl;

    return 0;
}
