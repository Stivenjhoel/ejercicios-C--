#include <iostream>
#include <string>

std::string generarTablaMultiplicar(int n) {
    std::string tabla;
    for (int i = 1; i <= 12; i++) {
        tabla += std::to_string(n) + " x " + std::to_string(i) + " = " + std::to_string(n * i) + "\n";
    }
    return tabla;
}

int main() {
    int numero;
    std::cout << "Número n: ";
    std::cin >> numero;

    std::cout << "Tabla de Multiplicar:\n" << generarTablaMultiplicar(numero) << std::endl;
    return 0;
}
