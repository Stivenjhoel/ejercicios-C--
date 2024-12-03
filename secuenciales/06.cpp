#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double altura, radio;

    // Solicitar datos
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;

    // Cálculo del área y volumen
    double area = 2 * M_PI * radio * (radio + altura);
    double volumen = M_PI * pow(radio, 2) * altura;

    // Mostrar resultados
    cout << fixed << setprecision(2);
    cout << "El área del cilindro es: " << area << " unidades cuadradas." << endl;
    cout << "El volumen del cilindro es: " << volumen << " unidades cúbicas." << endl;

    return 0;
}
