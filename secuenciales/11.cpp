#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;

    cout << "Número 1 (3 cifras): ";
    cin >> numero1;

    cout << "Número 2 (3 cifras): ";
    cin >> numero2;

    int primeraCifra1 = numero1 / 100;
    int terceraCifra1 = numero1 % 10;

    int primeraCifra2 = numero2 / 100;
    int terceraCifra2 = numero2 % 10;

    int nuevoNumero1 = terceraCifra1 * 100 + (numero2 % 100);
    int nuevoNumero2 = terceraCifra2 * 100 + (numero1 % 100);

    cout << "Resultado 1: " << nuevoNumero1 << endl;
    cout << "Resultado 2: " << nuevoNumero2 << endl;

    return 0;
}
