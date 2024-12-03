#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double numeros[5];

    for (int i = 0; i < 5; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    sort(numeros, numeros + 5);

    double sumaMayores = numeros[2] + numeros[3] + numeros[4];
    double promedio = sumaMayores / 3;

    cout << "Promedio de los 3 mayores: " << promedio << endl;

    return 0;
}
