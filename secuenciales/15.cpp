#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double aporteJuan, aporteRosa, aporteDaniel;

    cout << "Aporte de Juan (USD): ";
    cin >> aporteJuan;

    cout << "Aporte de Rosa (USD): ";
    cin >> aporteRosa;

    cout << "Aporte de Daniel (S/.): ";
    cin >> aporteDaniel;

    aporteDaniel = aporteDaniel / 3.0;

    double capitalTotal = aporteJuan + aporteRosa + aporteDaniel;

    double porcentajeJuan = (aporteJuan / capitalTotal) * 100;
    double porcentajeRosa = (aporteRosa / capitalTotal) * 100;
    double porcentajeDaniel = (aporteDaniel / capitalTotal) * 100;

    cout << fixed << setprecision(2);
    cout << "Capital Total (USD): " << capitalTotal << endl;
    cout << "Juan: " << porcentajeJuan << "%, Rosa: " << porcentajeRosa << "%, Daniel: " << porcentajeDaniel << "%" << endl;

    return 0;
}
