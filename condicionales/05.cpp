#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string numeroStr;
    cout << "Ingrese un número de 4 cifras: ";
    cin >> numeroStr;

    if (numeroStr.length() != 4) {
        cout << "Ingrese un número de 4 cifras." << endl;
        return 1;
    }

    int cifras[4];
    for (int i = 0; i < 4; i++) {
        cifras[i] = numeroStr[i] - '0';  
    }

    int maxCifra = cifras[0];
    int minCifra = cifras[0];

    for (int i = 1; i < 4; i++) {
        if (cifras[i] > maxCifra) {
            maxCifra = cifras[i];
        }
        if (cifras[i] < minCifra) {
            minCifra = cifras[i];
        }
    }

    int mayorNumero = maxCifra * 10 + minCifra;
    cout << "Mayor Número: " << mayorNumero << endl;

    return 0;
}
