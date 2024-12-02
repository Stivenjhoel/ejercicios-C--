#include <iostream>
using namespace std;

int multiplicar(int multiplicando , int multiplicador);

int main ()
{
    int multiplicando, multiplicador;

    cout<<"Multiplicando : "; cin>>multiplicando;
    cout<<"Multiplicador : "; cin>>multiplicador;

    cout<<"Producto = "<<multiplicar(multiplicando, multiplicador)<<endl;

    return 0;
}
int multiplicar(int multiplicando, int multiplicador){
    if ( multiplicador == 1) return multiplicando;
    return multiplicando + multiplicar( multiplicando, multiplicador - 1);
}