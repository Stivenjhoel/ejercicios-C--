#include <iostream>
#include <string>
using namespace std;

bool esSubcadenaIterativa(const string& cadena, const string& subcadena) {
    int longitudCadena = cadena.length();
    int longitudSubcadena = subcadena.length();

    if (longitudSubcadena > longitudCadena) {
        return false;
    }

    for (int i = 0; i <= longitudCadena - longitudSubcadena; i++) {
        bool esSubcadena = true;

        for (int j = 0; j < longitudSubcadena; j++) {
            if (cadena[i + j] != subcadena[j]) {
                esSubcadena = false;
                break;
            }
        }

        if (esSubcadena) {
            return true;
        }
    }
    return false;
}

bool esSubcadenaRecursiva(const string& cadena, const string& subcadena, int index) {
    int longitudCadena = cadena.length();
    int longitudSubcadena = subcadena.length();

    if (index > longitudCadena - longitudSubcadena) {
        return false;
    }

    for (int i = 0; i < longitudSubcadena; i++) {
        if (cadena[index + i] != subcadena[i]) {
            return esSubcadenaRecursiva(cadena, subcadena, index + 1);
        }
    }

    return true;
}

int main() {
    string cadena = "Este es un ejemplo de subcadena";
    string subcadena = "ejemplo";

    bool resultadoIterativo = esSubcadenaIterativa(cadena, subcadena);
    cout << "¿Es subcadena (iterativo)? " << (resultadoIterativo ? "true" : "false") << endl;

    bool resultadoRecursivo = esSubcadenaRecursiva(cadena, subcadena, 0);
    cout << "¿Es subcadena (recursivo)? " << (resultadoRecursivo ? "true" : "false") << endl;

    return 0;
}
