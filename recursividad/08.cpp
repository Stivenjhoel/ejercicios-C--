#include <iostream>
using namespace std;

int mcdEuclides(int m, int n) {
    if (n == 0) {
        return m;
    }
    return mcdEuclides(n, m % n);
}

int main() {
    int m = 56;
    int n = 98;

    int resultado = mcdEuclides(m, n);
    cout << "El máximo común divisor de " << m << " y " << n << " es: " << resultado << endl;

    return 0;
}
