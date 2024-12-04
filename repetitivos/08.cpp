#include <iostream>
#include <cmath>

double calcularPotencia(double base, int exponente) {
    double resultado = 1;
    for (int i = 1; i <= std::abs(exponente); i++) {
        resultado *= base;
    }
    if (exponente < 0) {
        resultado = 1 / resultado;
    }
    return resultado;
}

int main() {
    double base;
    int exponente;
    std::cout << "Base (n): ";
    std::cin >> base;
    std::cout << "Exponente (m): ";
    std::cin >> exponente;
    double resultado = calcularPotencia(base, exponente);
    std::cout << "Resultado: " << resultado << std::endl;
    return 0;
}
