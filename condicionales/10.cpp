#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    double notas[5];
    double suma = 0;
    double mayor = numeric_limits<double>::min();
    double menor = numeric_limits<double>::max();

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese la Nota " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
        if (notas[i] > mayor) mayor = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }

    cout << "Notas eliminadas: Mayor = " << mayor << ", Menor = " << menor << endl;

    suma -= (mayor + menor);

    double promedio = suma / 3;

    cout << fixed << setprecision(2);
    cout << "Promedio aprobatorio: " << promedio << endl;

    return 0;
}
