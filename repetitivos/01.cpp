#include <iostream>
#include <string>

int main() {
    int dividendo, divisor;

    std::cout << "Dividendo: ";
    std::cin >> dividendo;

    std::cout << "Divisor: ";
    std::cin >> divisor;

    if (divisor == 0) {
        std::cout << "El divisor no puede ser cero." << std::endl;
        return 0;
    }

    int cociente = 0;
    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }

    int resto = dividendo;

    std::cout << "Cociente: " << cociente << std::endl;
    std::cout << "Resto: " << resto << std::endl;

    return 0;
}
