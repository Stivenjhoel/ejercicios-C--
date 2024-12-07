#include <iostream>
using namespace std;

int main() {
    int unidadesA, unidadesB;
    double precioA = 25.0, precioB = 30.0;
    double descuentoA = 0.0, descuentoB = 0.0;
    double importeBrutoA, importeBrutoB, totalA, totalB, totalPagar;

    cout << "Unidades Producto A: ";
    cin >> unidadesA;
    cout << "Unidades Producto B: ";
    cin >> unidadesB;

    importeBrutoA = unidadesA * precioA;
    importeBrutoB = unidadesB * precioB;

    if (unidadesA > 50) {
        descuentoA = importeBrutoA * 0.15; // 15% de descuento
    }

    if (unidadesB > 60) {
        descuentoB = importeBrutoB * 0.10; // 10% de descuento
    }

    totalA = importeBrutoA - descuentoA;
    totalB = importeBrutoB - descuentoB;
    totalPagar = totalA + totalB;

    cout << "Importe bruto: S/. " << (importeBrutoA + importeBrutoB) << endl;
    cout << "Descuento: S/. " << (descuentoA + descuentoB) << endl;
    cout << "Total a pagar: S/. " << totalPagar << endl;

    return 0;
}
