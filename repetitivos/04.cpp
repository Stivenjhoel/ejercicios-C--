#include <iostream>
#include <string>

std::string mostrarMultiplos(int n, int m) {
    std::string multiples;
    for (int i = 1; i <= m; i++) {
        multiples += std::to_string(n * i) + " ";
    }
    return multiples;
}

int main() {
    int numero, multiples;
    std::cout << "Número n: ";
    std::cin >> numero;
    
    std::cout << "Múltiplos (m): ";
    std::cin >> multiples;

    std::cout << "Múltiplos: " << mostrarMultiplos(numero, multiples) << std::endl;
    return 0;
}
