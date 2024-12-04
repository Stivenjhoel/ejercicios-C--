#include <iostream>

long calcularFactorial(int numero) {
    long factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;
    std::cout << "Número: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Por favor, ingrese un número positivo." << std::endl;
    } else {

        long resultado = calcularFactorial(numero);

        std::cout << "Factorial: " << resultado << std::endl;
    }

    return 0;
}
