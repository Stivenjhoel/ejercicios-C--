#include <iostream>
#include <string>
using namespace std;

string invertir(const string& cadena) {
    if (cadena.length() <= 1) {
        return cadena;
    }
    return invertir(cadena.substr(1)) + cadena[0];
}

int main() {
    string cadena = "Hola";

    string resultado = invertir(cadena);
    cout << "La cadena invertida de \"" << cadena << "\" es: \"" << resultado << "\"" << endl;

    return 0;
}
