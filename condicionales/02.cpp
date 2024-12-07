#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cantidad;
    double precioUnitario = 20.0;
    double importe, descuento, total;
    int caramelos;

    cout << "Cantidad de Unidades: ";
    cin >> cantidad;

    importe = cantidad * precioUnitario;

    if (cantidad >= 1 && cantidad <= 5) {
        descuento = importe * 0.05;
        caramelos = 1;
    } else if (cantidad >= 6 && cantidad <= 10) {
        descuento = importe * 0.10;
        caramelos = 2;
    } else if (cantidad > 10) {
        descuento = importe * 0.15;
        caramelos = 3;
    } else {
        descuento = 0;
        caramelos = 0;
    }

    total = importe - descuento;

    cout << fixed << setprecision(2);
    cout << "Importe: S/. " << importe << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Total a Pagar: S/. " << total << endl;
    cout << "Caramelos: " << caramelos << endl;

    return 0;
}
