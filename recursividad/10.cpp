#include <iostream>
#include <string>
using namespace std;

int contarSubsecuencias(const string& cadena, const string& subcadena, int i, int j) {
    if (j == subcadena.length()) {
        return 1;
    }

    if (i == cadena.length()) {
        return 0;
    }

    int contar = 0;
    if (cadena[i] == subcadena[j]) {
        contar += contarSubsecuencias(cadena, subcadena, i + 1, j + 1);
    }
    contar += contarSubsecuencias(cadena, subcadena, i + 1, j);

    return contar;
}

int main() {
    string cadena1 = "Hhoola";
    string subcadena1 = "hola";
    int resultado1 = contarSubsecuencias(cadena1, subcadena1, 0, 0);
    cout << "La subcadena '" << subcadena1 << "' aparece " << resultado1 << " veces en '" << cadena1 << "'." << endl;

    string cadena2 = "hobla";
    string subcadena2 = "hola";
    int resultado2 = contarSubsecuencias(cadena2, subcadena2, 0, 0);
    cout << "La subcadena '" << subcadena2 << "' aparece " << resultado2 << " veces en '" << cadena2 << "'." << endl;

    string cadena3 = "ohla";
    string subcadena3 = "hola";
    int resultado3 = contarSubsecuencias(cadena3, subcadena3, 0, 0);
    cout << "La subcadena '" << subcadena3 << "' aparece " << resultado3 << " veces en '" << cadena3 << "'." << endl;

    return 0;
}
