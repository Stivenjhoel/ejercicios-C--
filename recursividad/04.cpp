#include <iostream>
using namespace std;

int sumaVector(int v[], int desde, int hasta) {
    if (desde == hasta) {
        return v[desde];
    }
    return v[desde] + sumaVector(v, desde + 1, hasta);
}

int main() {
    int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int desde = 0;
    int hasta = 8;

    int resultado = sumaVector(vector, desde, hasta);
    cout << "La suma de los elementos del vector desde la posición " << desde << " hasta la " << hasta << " es: " << resultado << endl;

    return 0;
}
