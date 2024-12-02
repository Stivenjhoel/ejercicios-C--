#include <iostream>
using namespace std;

int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    }
    return base * potencia(base, exponente - 1);
}

int main() {
    int base = 5;
    int exponente = 3;

    int resultado = potencia(base, exponente);
    cout << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}
