#include <iostream>
using namespace std;

int main() {
    double montoVendido, sueldoBase, bonificacion = 0.0, sueldoTotal;

    cout << "Monto Total Vendido: S/. ";
    cin >> montoVendido;

    sueldoBase = montoVendido * 0.10;

    if (montoVendido > 5000) {
        double exceso = montoVendido - 5000;
        bonificacion = (exceso / 500) * 25; 
    }

    sueldoTotal = sueldoBase + bonificacion;

    cout << "Sueldo Total: S/. " << sueldoTotal << endl;

    return 0;
}
