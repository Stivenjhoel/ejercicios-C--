#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double cuota;
    int diaPago;

    cout << "Cuota mensual (S/.): ";
    cin >> cuota;
    cout << "Día de pago: ";
    cin >> diaPago;

    if (cuota <= 0 || diaPago < 1 || diaPago > 31) {
        cout << "Error: Ingrese datos válidos." << endl;
        return 1;
    }

    double montoPagar = cuota;
    double descuento = 0;
    double recargo = 0;

    if (diaPago >= 1 && diaPago <= 10) {
        descuento = max(5.0, cuota * 0.02);
        montoPagar = cuota - descuento;
    }

    else if (diaPago >= 11 && diaPago <= 20) {
        montoPagar = cuota;
    }

    else if (diaPago >= 21 && diaPago <= 31) {
        recargo = max(10.0, cuota * 0.03);
        montoPagar = cuota + recargo;
    }

    if (descuento > 0) {
        cout << "Descuento aplicado: S/. " << fixed << setprecision(2) << descuento << endl;
        cout << "Monto a pagar: S/. " << fixed << setprecision(2) << montoPagar << endl;
    } else if (recargo > 0) {
        cout << "Recargo aplicado: S/. " << fixed << setprecision(2) << recargo << endl;
        cout << "Monto a pagar: S/. " << fixed << setprecision(2) << montoPagar << endl;
    } else {
        cout << "Monto a pagar: S/. " << fixed << setprecision(2) << montoPagar << endl;
    }

    return 0;
}
