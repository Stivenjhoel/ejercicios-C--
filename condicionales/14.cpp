#include <iostream>
using namespace std;

int main() {
    long numeroTarjeta;
    double montoCompra, descuento, montoDescuento;

    cout << "Número de tarjeta: ";
    cin >> numeroTarjeta;

    cout << "Monto de la compra: S/. ";
    cin >> montoCompra;

    if (numeroTarjeta >= 100 && numeroTarjeta % 2 == 0) {
        descuento = 0.15; // 15% de descuento
    } else {
        descuento = 0.05; // 5% de descuento
    }

    montoDescuento = montoCompra * descuento;

    cout << "Número de tarjeta: " << numeroTarjeta << ", Monto de compra: S/. " 
         << montoCompra << ", Descuento: S/. " << montoDescuento << endl;

    return 0;
}
