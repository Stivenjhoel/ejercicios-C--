#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número de tres cifras: ";
    cin >> numero;

    if (numero < 100 || numero > 999) {
        cout << "Por favor, ingrese un número de tres cifras." << endl;
        return 0;
    }

    int centena = numero / 100;
    int decena = (numero / 10) % 10;
    int unidad = numero % 10;

    if ((centena == decena - 1 && decena == unidad - 1) || (centena == decena + 1 && decena == unidad + 1)) {
        cout << "Las cifras son consecutivas." << endl;
    } else {
        cout << "Las cifras no son consecutivas." << endl;
    }

    return 0;
}
