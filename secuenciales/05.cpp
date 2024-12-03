#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double gigabytes;

    cout << "Ingrese la cantidad de gigabytes: ";
    cin >> gigabytes;

    double megabytes = gigabytes * 1024;
    double kilobytes = megabytes * 1024;
    double bytes = kilobytes * 1024;

    cout << fixed << setprecision(2);
    cout << "Equivalente en megabytes: " << megabytes << " MB" << endl;
    cout << "Equivalente en kilobytes: " << kilobytes << " KB" << endl;
    cout << "Equivalente en bytes: " << bytes << " Bytes" << endl;

    return 0;
}
