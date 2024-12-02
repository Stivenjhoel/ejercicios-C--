#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    int resultado = fibonacci(n);
    cout << "El número Fibonacci en la posición " << n << " es: " << resultado << endl;
    return 0;
}
