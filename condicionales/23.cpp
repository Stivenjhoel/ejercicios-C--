#include <iostream>
#include <string>
using namespace std;

int main() {
    double notaMatematicas, notaFisica;
    double propinaMatematicas = 0.0, propinaFisica = 0.0;
    string obsequio = "No se obsequiará reloj.";

    cout << "Nota Matemáticas: ";
    cin >> notaMatematicas;
    cout << "Nota Física: ";
    cin >> notaFisica;

    if (notaMatematicas > 17) {
        propinaMatematicas = 3.0;
    } else {
        propinaMatematicas = notaMatematicas * 1.0;
    }

    if (notaFisica > 15) {
        propinaFisica = 2.0;
    } else {
        propinaFisica = 0.5 * notaFisica;
    }

    double promedio = (notaMatematicas + notaFisica) / 2;

    if (promedio > 16) {
        obsequio = "¡Se obsequiará un reloj!";
    }

    double propinaTotal = propinaMatematicas + propinaFisica;

    cout << "Propina: S/. " << propinaTotal << endl;
    cout << obsequio << endl;

    return 0;
}
