#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double cateto1, cateto2;

    cout << "Cateto 1: ";
    cin >> cateto1;

    cout << "Cateto 2: ";
    cin >> cateto2;

    double hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "Hipotenusa: " << hipotenusa << endl;

    return 0;
}
