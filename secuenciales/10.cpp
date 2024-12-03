#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Número: ";
    cin >> numero;

    while (numero != 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    cout << "Resultado: " << invertido << endl;

    return 0;
}
