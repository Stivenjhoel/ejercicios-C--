#include <iostream>
#include <string>
using namespace std;

string generarRectangulo(int n) {
    string rectangulo = "";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n; j++) {
            rectangulo += "*";
        }
        rectangulo += "\n";
    }
    return rectangulo;
}

int main() {
    int n;
    cout << "Altura (n): ";
    cin >> n;

    if (n < 4) {
        cout << "Por favor, ingrese un valor de n mayor o igual a 4." << endl;
        return 0;
    }

    string rectangulo = generarRectangulo(n);
    cout << rectangulo;

    return 0;
}
