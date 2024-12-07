#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hora, minuto;
    string periodo = "AM";

    cout << "Hora (0-23): ";
    cin >> hora;
    cout << "Minuto (0-59): ";
    cin >> minuto;

    if (hora < 0 || hora > 23 || minuto < 0 || minuto > 59) {
        cout << "Error: Hora o minuto inválido." << endl;
        return 1;
    }

    if (hora >= 12) {
        periodo = "PM";
        if (hora > 12) {
            hora -= 12;
        }
    }
    if (hora == 0) {
        hora = 12; // Si la hora es 0, representarla como 12 (medianoche)
    }

    cout << "Hora: " << setw(2) << setfill('0') << hora << ":" 
         << setw(2) << setfill('0') << minuto << " " << periodo << endl;

    return 0;
}
