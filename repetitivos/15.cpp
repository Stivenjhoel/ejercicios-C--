#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void convertirAMayusculas(string &texto) {
    for (int i = 0; i < texto.length(); i++) {
        texto[i] = toupper(texto[i]);
    }
}

void convertirAMinusculas(string &texto) {
    for (int i = 0; i < texto.length(); i++) {
        texto[i] = tolower(texto[i]);
    }
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    convertirAMayusculas(texto);
    cout << "Texto en mayúsculas: " << texto << endl;

    convertirAMinusculas(texto);
    cout << "Texto en minúsculas: " << texto << endl;

    return 0;
}
