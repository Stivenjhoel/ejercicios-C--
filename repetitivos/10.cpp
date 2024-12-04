#include <iostream>
using namespace std;

bool verificarCondicion(int numero) {
    int sumaPares = 0;
    int sumaImpares = 0;

    for (int i = 0; i < 4; i++) {
        int cifra = numero % 10;
        numero /= 10;

        if (i % 2 == 0) {
            sumaPares += cifra;
        } else {
            sumaImpares += cifra;
        }
    }

    return sumaPares == sumaImpares;
}

int main() {
    int contador = 0;

    for (int numero = 1000; numero <= 9999; numero++) {
        if (verificarCondicion(numero)) {
            cout << numero << endl;
            contador++;
        }
    }

    cout << "Cantidad de números encontrados: " << contador << endl;

    return 0;
}
