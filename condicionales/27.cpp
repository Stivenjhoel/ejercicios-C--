#include <iostream>
using namespace std;

int main() {
    double montoVendido, sueldoBase = 600, comision, sueldoBruto, descuento, sueldoNeto;
    int polos;

    cout << "Monto Total Vendido: S/. ";
    cin >> montoVendido;

    comision = montoVendido * 0.15;
    sueldoBruto = sueldoBase + comision;

    if (sueldoBruto > 1800) {
        descuento = sueldoBruto * 0.10;
    } else {
        descuento = sueldoBruto * 0.05;
    }

    sueldoNeto = sueldoBruto - descuento;

    polos = (montoVendido > 1000) ? 3 : 1;

    cout << "Sueldo Bruto: S/. " << sueldoBruto << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Sueldo Neto: S/. " << sueldoNeto << endl;
    cout << "Polos: " << polos << endl;

    return 0;
}
