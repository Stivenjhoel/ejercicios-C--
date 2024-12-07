#include <iostream>
using namespace std;

int main() {
    double sueldoBruto, bonificacion, sueldoNeto;
    int numeroHijos;

    cout << "Sueldo Bruto: S/. ";
    cin >> sueldoBruto;

    cout << "Número de Hijos: ";
    cin >> numeroHijos;

    if (numeroHijos > 1) {
        bonificacion = (sueldoBruto * 0.125) + (numeroHijos * 40); 
    } else {
        bonificacion = sueldoBruto * 0.10; // 10% del sueldo
    }

    sueldoNeto = sueldoBruto + bonificacion;

    cout << "Bonificación: S/. " << bonificacion << endl;
    cout << "Sueldo Neto: S/. " << sueldoNeto << endl;

    return 0;
}
