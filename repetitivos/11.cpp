#include <iostream>
using namespace std;

int main() {
    int contador = 0;

    for (int numero = 100; numero <= 999; numero++) {
        int unidades = numero % 10;
        int decenas = (numero / 10) % 10;
        int centenas = (numero / 100);

        if (centenas == unidades) {
            contador++;
        }
    }

    cout << "Cantidad de numeros capicuas: " << contador << endl;
    return 0;
}
