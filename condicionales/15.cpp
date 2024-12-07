#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sueldoBasico = 250.0;
    double montoVendido, sueldoBruto, comision, descuento, sueldoNeto;
    int categoria;

    cout << "Monto vendido: S/. ";
    cin >> montoVendido;

    cout << "Categoría (1, 2, 3): ";
    cin >> categoria;

    double porcentajeComision = 0.0;

    switch (categoria) {
        case 1:
            porcentajeComision = 0.05; // 5%
            break;
        case 2:
            porcentajeComision = 0.10; // 10%
            break;
        case 3:
            porcentajeComision = 0.15; // 15%
            break;
        default:
            cout << "Categoría inválida. Debe ser 1, 2 o 3." << endl;
            return 0;
    }

    comision = montoVendido * porcentajeComision;
    sueldoBruto = sueldoBasico + comision;

    if (sueldoBruto > 3500) {
        descuento = sueldoBruto * 0.15; // 15%
    } else {
        descuento = sueldoBruto * 0.08; // 8%
    }

    sueldoNeto = sueldoBruto - descuento;

    cout << fixed << setprecision(2);
    cout << "Sueldo Bruto: S/. " << sueldoBruto << endl;
    cout << "Comisión: S/. " << comision << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Sueldo Neto: S/. " << sueldoNeto << endl;

    return 0;
}
