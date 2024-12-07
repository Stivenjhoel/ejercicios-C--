#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigoProducto, cantidad;
    double precioUnitario = 0.0, descuentoPorcentaje = 0.0;

    cout << "Ingrese el Código del Producto (1-4): ";
    cin >> codigoProducto;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    switch (codigoProducto) {
        case 1:
            precioUnitario = 30.0;
            descuentoPorcentaje = 10.0;
            break;
        case 2:
            precioUnitario = 50.0;
            descuentoPorcentaje = 15.0;
            break;
        case 3:
            precioUnitario = 20.0;
            descuentoPorcentaje = 5.0;
            break;
        case 4:
            precioUnitario = 40.0;
            descuentoPorcentaje = 20.0;
            break;
        default:
            cout << "Producto no válido" << endl;
            return 0;
    }

    double importeCompra = precioUnitario * cantidad;
    double descuento = (importeCompra * descuentoPorcentaje) / 100;
    double totalPagar = importeCompra - descuento;

    cout << fixed << setprecision(2);
    cout << "Importe: S/. " << importeCompra << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Total a Pagar: S/. " << totalPagar << endl;

    return 0;
}
