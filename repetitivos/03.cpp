#include <iostream>

int contarDivisores(int numero) {
    int contador = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) contador++;
    }
    return contador;
}

int main() {
    int numero;
    std::cout << "Número: ";
    std::cin >> numero;
    
    std::cout << "Cantidad de Divisores: " << contarDivisores(numero) << std::endl;
    return 0;
}
