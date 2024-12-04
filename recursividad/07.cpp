#include <iostream>
#include <string>
using namespace std;

bool esPalindromoRecursivo(const string& cadena, int inicio, int fin) {
    if (inicio >= fin) {
        return true;
    }
    if (cadena[inicio] != cadena[fin]) {
        return false;
    }
    return esPalindromoRecursivo(cadena, inicio + 1, fin - 1);
}

bool esPalindromoIterativo(const string& cadena) {
    int inicio = 0;
    int fin = cadena.length() - 1;

    while (inicio < fin) {
        if (cadena[inicio] != cadena[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() {
    string cadena = "DABALEARROZALAZORRAELABAD";

    bool resultadoRecursivo = esPalindromoRecursivo(cadena, 0, cadena.length() - 1);
    cout << "¿Es palíndromo (recursivo)? " << (resultadoRecursivo ? "true" : "false") << endl;

    bool resultadoIterativo = esPalindromoIterativo(cadena);
    cout << "¿Es palíndromo (iterativo)? " << (resultadoIterativo ? "true" : "false") << endl;

    return 0;
}
