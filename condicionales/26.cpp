#include <iostream>
using namespace std;

int main() {
    double montoCompra, prestamo, intereses, propioDinero, totalPago;

    cout << "Monto Total de Compra: S/. ";
    cin >> montoCompra;

    if (montoCompra > 5000) {
        prestamo = montoCompra * 0.30;
    } else {
        prestamo = montoCompra * 0.20;
    }

    intereses = prestamo * 0.10;

    propioDinero = montoCompra - prestamo;

    totalPago = montoCompra + intereses;

    cout << "Dinero Propio: S/. " << propioDinero << endl;
    cout << "Préstamo: S/. " << prestamo << endl;
    cout << "Intereses: S/. " << intereses << endl;
    cout << "Total a Pagar: S/. " << totalPago << endl;

    return 0;
}
