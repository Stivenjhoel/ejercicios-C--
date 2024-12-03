#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double tramoKm, tramoPies, tramoMillas;

    cout << "Ingrese tramo en Kilómetros: ";
    cin >> tramoKm;

    cout << "Ingrese tramo en Pies: ";
    cin >> tramoPies;

    cout << "Ingrese tramo en Millas: ";
    cin >> tramoMillas;

    const double PIES_A_METROS = 1 / 3.2808;
    const double MILLAS_A_METROS = 1609;
    const double METROS_A_YARDAS = 1.09361;

    // Cálculos
    double totalMetros = (tramoKm * 1000) + (tramoPies * PIES_A_METROS) + (tramoMillas * MILLAS_A_METROS);
    double totalYardas = totalMetros * METROS_A_YARDAS;

    // Resultados
    cout << fixed << setprecision(2);
    cout << "Total en Metros: " << totalMetros << " m" << endl;
    cout << "Total en Yardas: " << totalYardas << " yd" << endl;

    return 0;
}
