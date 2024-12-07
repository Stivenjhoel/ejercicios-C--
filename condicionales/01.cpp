#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cantidad;
    float precioUnitario, importeCompra, descuento, totalPagar;

    cout << "Ingrese la cantidad de unidades a comprar: ";
    cin >> cantidad;

    if (cantidad >= 1 && cantidad <= 25) {
        precioUnitario = 27;
    } else if (cantidad >= 26 && cantidad <= 50) {
        precioUnitario = 25;
    } else if (cantidad > 50) {
        precioUnitario = 23;
    } else {
        cout << "Cantidad no válida." << endl;
        return 1;
    }

    importeCompra = cantidad * precioUnitario;

    if (cantidad > 50) {
        descuento = importeCompra * 0.15;
    } else {
        descuento = importeCompra * 0.05;
    }

    totalPagar = importeCompra - descuento;

    cout << fixed << setprecision(2);
    cout << "Importe de la compra: S/. " << importeCompra << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Total a pagar: S/. " << totalPagar << endl;

    return 0;
}

