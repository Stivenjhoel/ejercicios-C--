#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double donacion, centroSalud, comedorNiños, bolsa;

    cout << "Monto de la donación: ";
    cin >> donacion;

    if (donacion >= 10000) {
        centroSalud = donacion * 0.30;  
        comedorNiños = donacion * 0.50; 
    } else {
        centroSalud = donacion * 0.25;  
        comedorNiños = donacion * 0.60; 
    }

    bolsa = donacion - centroSalud - comedorNiños; 

    cout << fixed << setprecision(2);
    cout << "Centro de Salud: S/. " << centroSalud << endl;
    cout << "Comedor Infantil: S/. " << comedorNiños << endl;
    cout << "Invertido en Bolsa: S/. " << bolsa << endl;

    return 0;
}
