#include <iostream>
using namespace std;

int main() {
    int numeroAsignado;
    string resultado = "";

    cout << "Número asignado: ";
    cin >> numeroAsignado;

    if (numeroAsignado < 1000 || numeroAsignado > 9999) {
        resultado = "El número debe tener 4 cifras.";
    } else {
        // Extraer los datos del número asignado
        int estadoCivil = numeroAsignado / 1000;       
        int edad = (numeroAsignado % 1000) / 10;       
        int sexo = numeroAsignado % 10;                

        switch (estadoCivil) {
            case 1:
                resultado += "Estado civil: Soltero(a)\n";
                break;
            case 2:
                resultado += "Estado civil: Casado(a)\n";
                break;
            case 3:
                resultado += "Estado civil: Divorciado(a)\n";
                break;
            case 4:
                resultado += "Estado civil: Viudo(a)\n";
                break;
            default:
                resultado += "Estado civil: Desconocido\n";
                break;
        }

        resultado += "Edad: " + to_string(edad) + " años\n";

        if (sexo == 1) {
            resultado += "Sexo: Masculino\n";
        } else if (sexo == 2) {
            resultado += "Sexo: Femenino\n";
        } else {
            resultado += "Sexo: Desconocido\n";
        }
    }

    cout << resultado << endl;

    return 0;
}
