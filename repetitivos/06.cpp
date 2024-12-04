#include <iostream>
#include <string>

std::string generarTablaMultiplicar(int n, int x, int y) {
    std::string tabla;
    for (int i = x; i <= y; i++) {
        tabla += std::to_string(n) + " x " + std::to_string(i) + " = " + std::to_string(n * i) + "\n";
    }
    return tabla;
}

int main() {
    int numero, rangoX, rangoY;
    std::cout << "Número n: ";
    std::cin >> numero;

    std::cout << "Rango (x - y): ";
    std::cin >> rangoX >> rangoY;

    if (rangoX > rangoY) {
        std::cout << "El valor de x debe ser menor o igual a y.\n";
    } else {
        std::cout << "Tabla de Multiplicar:\n" << generarTablaMultiplicar(numero, rangoX, rangoY) << std::endl;
    }

    return 0;
}
