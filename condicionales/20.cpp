#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    string resultado;

    cout << "Número a: ";
    cin >> a;
    cout << "Número b: ";
    cin >> b;
    cout << "Número c: ";
    cin >> c;

    if (a < b && b < c) {
        resultado = "Números en orden ascendente.";
    } else if (a > b && b > c) {
        resultado = "Números en orden descendente.";
    } else {
        resultado = "Números en desorden.";
    }

    cout << resultado << endl;

    return 0;
}
