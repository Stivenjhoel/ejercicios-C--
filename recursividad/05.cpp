#include <iostream>
#include <algorithm>
using namespace std;

int mayorElemento(int v[], int desde, int hasta) {
    if (desde == hasta) {
        return v[desde];
    }
    int maxResto = mayorElemento(v, desde + 1, hasta);
    return max(v[desde], maxResto);
}

int main() {
    int vector[] = {3, 5, 1, 9, 2, 8, 7};
    int desde = 0;
    int hasta = 6;

    int resultado = mayorElemento(vector, desde, hasta);
    cout << "El mayor elemento del vector desde la posición " << desde << " hasta la " << hasta << " es: " << resultado << endl;

    return 0;
}
