#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double ingresoMensual, costoCasa, cuotaInicial, cuotaMensual;

    cout << "Ingreso mensual: S/. ";
    cin >> ingresoMensual;

    cout << "Costo de la casa: S/. ";
    cin >> costoCasa;

    if (ingresoMensual < 1250) {
        cuotaInicial = costoCasa * 0.15;  // 15% de cuota inicial
        cuotaMensual = (costoCasa - cuotaInicial) / 120;
    } else {
        cuotaInicial = costoCasa * 0.30;  // 30% de cuota inicial
        cuotaMensual = (costoCasa - cuotaInicial) / 75;
    }

    cout << fixed << setprecision(2);
    cout << "Cuota Inicial: S/. " << cuotaInicial << endl;
    cout << "Cuota Mensual: S/. " << cuotaMensual << endl;

    return 0;
}
