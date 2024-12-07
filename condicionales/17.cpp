#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int docenas, lapiceros = 0;
    double precioPorDocena = 20.0, montoCompra, descuento, totalAPagar;

    cout << "Cantidad de docenas: ";
    cin >> docenas;

    montoCompra = docenas * precioPorDocena;

    if (docenas >= 6) {
        descuento = montoCompra * 0.15; // 15% de descuento
    } else {
        descuento = montoCompra * 0.10; // 10% de descuento
    }

    totalAPagar = montoCompra - descuento;

    if (docenas >= 30) {
        lapiceros = (docenas / 3) * 2; // 2 lapiceros por cada 3 docenas
    }

    cout << fixed << setprecision(2);
    cout << "Monto de la compra: S/. " << montoCompra << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Total a pagar: S/. " << totalAPagar << endl;
    cout << "Lapiceros de obsequio: " << lapiceros << endl;

    return 0;
}
