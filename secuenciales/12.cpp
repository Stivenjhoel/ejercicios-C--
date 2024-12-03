#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;
    string resultado;

    if (discriminante > 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        resultado = "Raíces: " + to_string(raiz1) + " y " + to_string(raiz2);
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        resultado = "Raíz doble: " + to_string(raiz);
    } else {
        resultado = "No hay raíces reales";
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
