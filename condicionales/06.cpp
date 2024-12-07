#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int edad1, edad2, edad3;
    
    cout << "Ingrese la Edad 1: ";
    cin >> edad1;
    
    cout << "Ingrese la Edad 2: ";
    cin >> edad2;
    
    cout << "Ingrese la Edad 3: ";
    cin >> edad3;

    int edadMayor = max(edad1, max(edad2, edad3));
    int edadMenor = min(edad1, min(edad2, edad3));

    cout << "Edad Mayor: " << edadMayor << endl;
    cout << "Edad Menor: " << edadMenor << endl;

    return 0;
}
