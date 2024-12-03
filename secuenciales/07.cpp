#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double base, altura, area, perimetro;

    cout << "Base: ";
    cin >> base;
    cout << "Altura: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << fixed << setprecision(2);
    cout << "Área: " << area << endl;
    cout << "Perímetro: " << perimetro << endl;

    return 0;
}
