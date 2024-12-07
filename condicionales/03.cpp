#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    double angulo;
    string clasificacion;

    cout << "Ingrese el ángulo (en grados): ";
    cin >> angulo;

    if (angulo == 0) {
        clasificacion = "Nulo (0°)";
    } else if (angulo > 0 && angulo < 90) {
        clasificacion = "Agudo (0° < x < 90°)";
    } else if (angulo == 90) {
        clasificacion = "Recto (90°)";
    } else if (angulo > 90 && angulo < 180) {
        clasificacion = "Obtuso (90° < x < 180°)";
    } else if (angulo == 180) {
        clasificacion = "Llano (180°)";
    } else if (angulo > 180 && angulo < 360) {
        clasificacion = "Cóncavo (180° < x < 360°)";
    } else if (angulo == 360) {
        clasificacion = "Completo (360°)";
    } else {
        clasificacion = "Ángulo inválido";
    }

    cout << "Clasificación: " << clasificacion << endl;

    return 0;
}
