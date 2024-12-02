#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int Numero;
    cout<<"Numero:";cin>>Numero;

    /*
    if (Numero > 0 ) cout<<"Positivo";
    else if ( Numero < 0 ) cout<<"Negativo";
    else cout<<"Cero";
    */
    
    cout<<(Numero > 0 ? "Positivo" : Numero < 0 ? "Negativo" : "Cero");
    return 0;
}