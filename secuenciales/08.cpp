#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double radio, altura, areaBase, areaLateral, areaTotal;

    cout << "Radio (r): ";
    cin >> radio;
    cout << "Altura (h): ";
    cin >> altura;

    areaBase = M_PI * pow(radio, 2);
    areaLateral = 2 * M_PI * radio * altura;
    areaTotal = 2 * areaBase + areaLateral;

    cout << fixed << setprecision(2);
    cout << "Área Base: " << areaBase << endl;
    cout << "Área Lateral: " << areaLateral << endl;
    cout << "Área Total: " << areaTotal << endl;

    return 0;
}
