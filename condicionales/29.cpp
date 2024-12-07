#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int horasTrabajadas;
    double pagoPorHora;

    cout << "Horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Pago por hora (S/.): ";
    cin >> pagoPorHora;

    if (horasTrabajadas < 0 || pagoPorHora <= 0) {
        cout << "Error: Ingrese valores válidos." << endl;
        return 1;
    }

    double sueldoBruto = 0;
    double horasExtras = 0;

    if (horasTrabajadas <= 48) {
        sueldoBruto = horasTrabajadas * pagoPorHora;
    } else {
        horasExtras = horasTrabajadas - 48;
        sueldoBruto = (48 * pagoPorHora) + (horasExtras * pagoPorHora * 1.2);
    }

    double descuento = 0;
    if (sueldoBruto > 1500) {
        descuento = sueldoBruto * 0.11;
    }

    double sueldoNeto = sueldoBruto - descuento;

    cout << "Horas trabajadas: " << horasTrabajadas << endl;
    cout << "Pago por hora: S/. " << fixed << setprecision(2) << pagoPorHora << endl;
    cout << "Sueldo Bruto: S/. " << fixed << setprecision(2) << sueldoBruto << endl;
    cout << "Descuento: S/. " << fixed << setprecision(2) << descuento << endl;
    cout << "Sueldo Neto: S/. " << fixed << setprecision(2) << sueldoNeto << endl;

    return 0;
}
