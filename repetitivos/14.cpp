#include <iostream>
using namespace std;

int main() {
    int numero, i;
    bool esPrimo = true;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero <= 1) {
        esPrimo = false;
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}
