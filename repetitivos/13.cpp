#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un número: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            suma += i;
        }
    }

    cout << "La suma de los números enteros múltiplos de 3, pero no de 5, menores o iguales a " << n << " es: " << suma << endl;
    return 0;
}
