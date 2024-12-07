#include <iostream>
#include <string>
using namespace std;

int main() {
    string sexo;
    int edad;
    string categoria;

    cout << "Sexo (F/M): ";
    cin >> sexo;
    sexo = toupper(sexo[0]);

    cout << "Edad: ";
    cin >> edad;

    if (sexo == "F") {
        if (edad < 23) {
            categoria = "FA";
        } else {
            categoria = "FB";
        }
    } else if (sexo == "M") {
        if (edad < 25) {
            categoria = "MA";
        } else {
            categoria = "MB";
        }
    } else {
        categoria = "Sexo no válido";
    }

    cout << "Categoría: " << categoria << endl;

    return 0;
}
